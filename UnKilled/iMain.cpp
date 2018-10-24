# include "iGraphics.h"
#include "Variables.h"
#include "Enemy.h"


void iDraw()
{

	
	iClear();

	
	if(game_page==0)
	{
		iShowBMP2(250,0,home_page,0);
		iShowBMP2(button_new_gamex,button_new_gamey,button_new_game,0);
		iShowBMP2(button_optionx,button_optiony,button_option,0);
		iShowBMP2(button_high_scorex,button_high_scorey,button_high_score,0);
		iShowBMP2(button_quitx,button_quity,button_quit,0);
		
	}
	
	
	if(game_page==2)
	{
		iShowBMP(x,y,"game_background\\bg_2.bmp");
		iShowBMP2(button_soundx,button_soundy,button_sound,0);
		iShowBMP2(button_instructionx,button_instructiony,button_instruction,0);
		iShowBMP2(button_aboutx,button_abouty,button_about,0);
		iShowBMP2(555,100,button_back,0);
	}
	 
	if(game_page==3)
	{
		iShowBMP(x,y,"button_page\\high_score.bmp");
		readScore();
		iShowBMP2(570,70,button_back,0);
		iText(100,500,"Rank",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(380,500,"Name",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(780,500,"Score",GLUT_BITMAP_TIMES_ROMAN_24);
		int point = 450;
		char strRank [5][10];
		char strScore [5][10];
		for(int i =0;i<5;i++,point = point-50)
		{
			sprintf(strRank[i],"%d",i+1);
			iText(100,point,strRank[i],GLUT_BITMAP_TIMES_ROMAN_24);
			iText(380,point,sc[i].name,GLUT_BITMAP_TIMES_ROMAN_24);
			sprintf(strScore[i],"%d",sc[i].score);
			iText(780,point,strScore[i],GLUT_BITMAP_TIMES_ROMAN_24);
		}
	
	}
	if(game_page==4)
	{
		iShowBMP(x,y,"game_background\\bg_4.bmp");
		iShowBMP2(button_onx,button_ony,button_on,0);
		iShowBMP2(button_offx,button_offy,button_off,0);
		iShowBMP2(markx,marky,mark,0);
		iShowBMP2(1140,0,button_back,0);	
	}

	if(game_page==5)
	{
		iShowBMP(x,y,"game_background\\bg_3.bmp");
		iShowBMP2(1140,0,button_back,0);
	}
	
	if(game_page==6)
	{
		iShowBMP(x,y,"game_background\\bg_1.bmp");
		iShowBMP2(1140,0,button_back,0);
		iSetColor(255,255,255);
		iText(360,360,"Name :   Mehedi Hasan        Id:17.02.04.096",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(360,300,"Name :   Israt Jahan         Id:17.02.04.107",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(360,240,"Name :   Jubayer Jaman       Id:17.01.04.125",GLUT_BITMAP_TIMES_ROMAN_24);
	}
	if (game_page==1)
	{	
		iShowBMP(x,y,loadpage[loadindex]);
	}
	if(game_page==7)
	{	
		iShowBMP(x,y,"game_background\\bg_10.bmp");
		iShowBMP2(0,105,"extra\\hut.bmp",0);
		if(call==0)
		{	
			iShowBMP2(fighterx,fightery,fighter[fighterindex],0);
		}
		if(call==2)
		{
			iShowBMP2(fighterx,fightery,fighterfight[fighterfightindex],0);
		}
		if(call==1)
		{	
			iShowBMP2(fighterx,fightery,fighterback[fighterbackindex],0);
		}
		if(call==3)
		{
			iShowBMP2(fighterx,fightery,fighterfightb[fighterfightbindex],0);
		}
	}
	if(game_page==8 || game_page==9)
	{
		if(game_page==8)
			iShowBMP(x,y,"game_background\\bg_10.bmp");
		else if(game_page==9)
			iShowBMP(x,y,"game_background\\bg_2.bmp");
		iSetColor(255,255,255);
		iText(25,650,"PLAYER",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(1175,650,"ENEMY",GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(255,255,255);
		iFilledRectangle(25,610,100,20);
		iFilledRectangle(1175,610,100,20);
		iSetColor(255,0,0);
		iFilledRectangle(25,610,player_health,20);
		iFilledRectangle(1175,610,enemy1_health,20);
		iSetColor(255,255,255);
		char temp[100];
		sprintf(temp,"SCORE = %d",data.score);
		iText(25,570,temp,GLUT_BITMAP_TIMES_ROMAN_24);
		
		if(call==0)
		{	
			iShowBMP2(fighterx,fightery,fighter[fighterindex],0);
		}
		if(call==2)
		{
			iShowBMP2(fighterx,fightery,fighterfight[fighterfightindex],0);
		}
		if(call==1)
		{
			iShowBMP2(fighterx,fightery,fighterback[fighterbackindex],0);
		}
		if(call==3)
		{
			
			iShowBMP2(fighterx,fightery,fighterfightb[fighterfightbindex],0);
		}
		if(enemycall==4)
		{
			iShowBMP2(stage1enemy1x,stage1enemy1y,stage1enemy1f1[stage1enemy1f1index],0);
		}
		if(enemycall==2)
		{
			iShowBMP2(stage1enemy1x,stage1enemy1y,stage1enemy1db1[stage1enemy1d1index],0);
		}
		
		if(enemycall==3)
		{
			iShowBMP2(stage1enemy1x,stage1enemy1y,stage1enemy1d1[stage1enemy1d1index],0);
		}
		if(enemycall==5)
		{
			iShowBMP2(stage1enemy1x,stage1enemy1y,stage1enemy1fb1[stage1enemy1fb1index],0);
		}
	}
	if(game_page==10)
	{
		iSetColor(255,255,255);
		iText(550,450,"GAME OVER",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(500,380,"Your Score:-",GLUT_BITMAP_TIMES_ROMAN_24);
		char t[100];
		sprintf(t,"%d",data.score);
		iText(715,380,t,GLUT_BITMAP_TIMES_ROMAN_24);
		iText(500,320,"Your Name:-",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(715,320,data.name,GLUT_BITMAP_TIMES_ROMAN_24);
	}
}


void iMouseMove(int mx, int my)
{

	printf("x = %d , y = %d , State = %d\n",mx,my,game_page);
	
}

void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if(game_page==0)
		{
			if(mx >= 150 && mx <= 470 && my >= 450 && my <= 532)
			{
				game_page=1;
			}
			if(mx >= 150 && mx <= 470 && my >= 350 && my <= 432)
			{
				game_page=2;
			}
		
			if(mx >= 150 && mx <= 470 && my >= 250 && my <= 332)
			{
				game_page=3;
			}
			if(mx >= 150 && mx <= 470 && my >=150 && my <= 232)
			{
				exit(0);
			}
		}
		if(game_page==2)
		{
			if(mx >= 490 && mx <= 810 && my >=410  && my <= 490)
			{
				game_page=4;
			}
			if(mx >= 490 && mx <= 810 && my >= 310 && my <= 390)
			{
				game_page=5;
			}
			if(mx >= 490 && mx <= 810 && my >= 210 && my <= 290)
			{
				game_page=6;
			}
			if(mx >= 555 && mx <= 715 && my >= 100 && my <= 180)
			{
				game_page=0;
			}
		}

		if(game_page==3)
		{
			if(mx >= 570 && mx <= 730  && my >=70  && my <= 150)
			{
				game_page=0;
			}
		}
		
		if(game_page==4)
		{
			if(mx >= 490 && mx <= 810 && my >= 370 && my <= 450)
			{
				markx=820;
				marky=370;
				sound = true;
				playingSound();
	
			}
			if(mx >= 490 && mx <= 810 && my >= 270 && my <= 350)
			{
				markx=820;
				marky=270;
				PlaySound(0,0,0);
				
			}
			if(mx >= 1140 && mx <= 1300 && my >= 0 && my <= 80)
			{
				game_page=2;
			}
		}
		if(game_page==5)
		{
			if(mx >= 1140 && mx <= 1300 && my >= 0 && my <= 80)
			{
				game_page=2;
			}
		}

		if(game_page==6)
		{
			if(mx >= 1140 && mx <= 1300 && my >= 0 && my <= 80)
			{
				game_page=2;
			}
		}
			
	}

	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		

	}
}

void iPassiveMouseMove(int mx,int my)
{
	;
	
}


void iKeyboard(unsigned char key)
{
	if(game_page==10)
	{
		if(key=='\r')
		{
			game_page= 0;
			saveScore(data.name,data.score);
			enemy1_health = 100;
			player_health = 100;
			fighterx=100;
			fightery=100;
			stage1enemy1x=920;
			stage1enemy1y=100;
			enemyCount =0;
			enemycall=0;
			call = 0;
		}
		else if(key=='\b' && strlen(data.name)>0)
		{
			int i = strlen(data.name);
			data.name[i-1] = '\0';
		}

		else if(strlen(data.name)<10 && ((key>='a' && key<='z' ) || (key>='A' && key<='Z')))
		{
			int i = strlen(data.name);
			data.name[i] = key;
			data.name[i+1] = '\0';
		}

	}
	else if(key == '\b')
	{
		if(game_page=7)
			game_page= 0;
	}
	else if(key == 's')
	{
		
		if(call==0)
		{
			call=2;
			if(fighterx+45>=stage1enemy1x && fighterx+45<=stage1enemy1x+100)
			{
				if(enemy1_health>0)
				{
					enemy1_health -= 10;
					stage1enemy1x += 5;
					data.score++;
				}
			}
		}
		
		else if(call==1)
		{
			call=3;
			if(fighterx>=stage1enemy1x && fighterx<=stage1enemy1x+100)
			{
				if(enemy1_health>0)
				{
					enemy1_health -= 10;
					stage1enemy1x -= 5;
					data.score++;
				}
			}

		}

		if(enemy1_health<=0)
		{
			if(enemycall==5)
				enemycall = 3;
			else if(enemycall==4)
				enemycall = 2;
			enemyisDead = true;
		}
		
		
	}
}


void iSpecialKeyboard(unsigned char key)
{
	if(key == GLUT_KEY_UP)
	{
		if(!jumpup && !jumpdown)
			jumpup= true;
	}
	
	

	if(key == GLUT_KEY_RIGHT)
	{
		call=0;

		if((game_page==8 && fighterx<1250) || game_page==7 || game_page==9)
		{
			fighterx+=15;
			fighterindex++;
		}
		
		
		if(fighterindex>=8)
		{
			fighterindex=0;
		}
		if(fighterx>=1300  && game_page==7)
		{
			game_page=8;
			fighterx=0;
			enemycall=5;
		}
		if((game_page==8 || game_page==9) && fighterx>stage1enemy1x+65)
				enemycall = 4;
	}

	if(key == GLUT_KEY_LEFT)
	{
		call=1;
		if(game_page==8 || (game_page==7 && fighterx>10) ||game_page==9)
		{
			fighterx-=15;
			fighterbackindex++;
		
			if(fighterbackindex>=8)
			{
				fighterbackindex=0;
			}
			if(game_page==8 && fighterx<=0)
			{
				fighterx=1300;
				game_page=7;
			}
			if((game_page==8 || game_page==9) && fighterx<stage1enemy1x)
				enemycall = 5;
	
		}
	
	}

}



int main()
{
	iSetTimer(10,loading);
	iSetTimer(200,fight);
	iSetTimer(0,jumpchange);
	iSetTimer(200,enemyfight);
	iSetTimer(200,enemyCome);
	iSetTimer(300,enemyDead);
	playingSound();
	iInitialize(1300, 700, "UnKilled");
	
	return 0;
}
