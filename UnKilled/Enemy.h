#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED

#include "Variables.h"
#include "Score.h"


void enemyfight()
{
	if(enemycall==5 && (game_page==8 ||game_page==9))
	{
		stage1enemy1fb1index++;

		if(stage1enemy1fb1index>=5)
		{
			stage1enemy1fb1index=0;
			if(fighterx<=stage1enemy1x && fighterx+45>=stage1enemy1x)
			{
				player_health -= 2;
				fighterx -= 5;
				if(player_health==0)
					game_page = 10;
			}
		}		
	}
	else if(enemycall==4 && (game_page==8 || game_page==9))
	{
		stage1enemy1f1index++;

		if(stage1enemy1f1index>=5)
		{
			stage1enemy1f1index=0;
			if(fighterx<=stage1enemy1x+100 && fighterx+45>=stage1enemy1x+100)
			{
				player_health -= 2;
				fighterx += 5;
				if(player_health==0)
					game_page = 10;
			}
		}		
	}

}



void loading()
{
	if(game_page==1)
	{
		loadindex++;
		if(loadindex >=11)
		{
			game_page=7;
		}
	}
}

void jumpchange()
{
	if(jumpup==true)
	{
		fightery+=40;
		if(call==0)
		{
			if((game_page==8 && fighterx<1250) || game_page==7)
				fighterx+=10;
		}
		else fighterx-=10;

		if(fightery>=220)
		{
			jumpup=false;
			jumpdown=true;
		}
	}
		
	if(jumpdown==true)
	{
		fightery-=20;	
		if(call==0)
		{
			if((game_page==8 && fighterx<1250) || game_page==7)
				fighterx+=10;

			if(fighterx>=1300 && game_page==7)
			{
				game_page=8;
				fighterx=0;
				enemycall=5;
			}
			
		}
		else if(call=1 && (game_page==8 || (game_page==7 && fighterx>10)))
		{
			fighterx-=10;

			if(game_page==8 && fighterx<=0)
			{
				fighterx=1300;
				game_page=7;
			}
		}

		if(fightery<=100)
		{
			jumpdown=false;
		}
	}
}

void fight()
{
	if(call==2)
	{		
		fighterfightindex++;
		if(fighterfightindex>=6)
		{
			fighterfightindex=0;
			call=0;
			
		}
	}
	else if(call==3)
	{
		fighterfightbindex++;
		if(fighterfightbindex>=6)
		{
			fighterfightbindex=0;
			call=1;
		}
	}
}

void enemyCome()
{

	if(game_page==8 || game_page==9)
	{
		if(stage1enemy1x>fighterx+45)
			stage1enemy1x -= 10;
		else if(stage1enemy1x+100<fighterx)
			stage1enemy1x += 10;
	}
}

void enemyDead()
{
	if((game_page==8 || game_page==9) && enemycall==3 && enemyisDead)
	{
		stage1enemy1d1index++;
		if(stage1enemy1d1index==6)
		{
			enemycall = 5;
			stage1enemy1x = 1400;
			enemy1_health = 100;
			stage1enemy1d1index= 0;
			enemyCount++;
			enemyisDead = false;
			if(enemyCount==3)
				game_page = 9;
		}
	}

	else if((game_page==8 || game_page==9) && enemycall==2 && enemyisDead)
	{
		stage1enemy1d1index++;
		if(stage1enemy1d1index==6)
		{
			enemycall = 4;
			stage1enemy1x = -100;
			enemy1_health = 100;
			stage1enemy1d1index= 0;
			enemyCount++;
			enemyisDead = false;
			if(enemyCount==3)
				game_page = 9;
		}
	}
}





#endif