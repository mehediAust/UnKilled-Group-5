# include "iGraphics.h"
# include "bitmap_loader.h"




int x=0;
int y=0;
char home_page[]={"game_background\\bg.bmp"};

int button_new_gamex=150;
int button_new_gamey=450;
char button_new_game[]={"button\\new_game.bmp"};

int button_optionx=150;
int button_optiony=350;
char button_option[]={"button\\option.bmp"};

int button_soundx=490;
int button_soundy=410;
char button_sound[]={"button\\sound.bmp"};
bool sound=true;


int button_onx=490;
int button_ony=370;
char button_on[]={"button\\on.bmp"};
int button_offx=490;
int button_offy=270;
char button_off[]={"button\\off.bmp"};

int button_instructionx=490;
int button_instructiony=310;
char button_instruction[]={"button\\instruction.bmp"};

int button_aboutx=490;
int button_abouty=210;
char button_about[]={"button\\about.bmp"};

int button_high_scorex=150;
int button_high_scorey=250;
char button_high_score[]={"button\\high_score.bmp"};

int button_quitx=150;
int button_quity=150;
char button_quit[]={"button\\quit.bmp"};

char button_back[]={"button\\back.bmp"};
int markx=820;
int marky=270;
char mark[]={"button\\mark.bmp"};

int fighterx=100;
int fightery=100;
char fighter[8][15]={"fighter\\f1.bmp","fighter\\f2.bmp","fighter\\f3.bmp","fighter\\f4.bmp","fighter\\f5.bmp","fighter\\f6.bmp","fighter\\f7.bmp","fighter\\f8.bmp"};
int fighterindex=0;
char fighterback[8][16]={"fighter\\fb1.bmp","fighter\\fb2.bmp","fighter\\fb3.bmp","fighter\\fb4.bmp","fighter\\fb5.bmp","fighter\\fb6.bmp","fighter\\fb7.bmp","fighter\\fb8.bmp"};
int fighterbackindex=0;
int call=0;


char fighterfight[6][21]={"fighter_fight\\k1.bmp","fighter_fight\\k2.bmp","fighter_fight\\k3.bmp","fighter_fight\\k4.bmp","fighter_fight\\k5.bmp","fighter_fight\\k6.bmp"};
int fighterfightindex=0;
char fighterfightb[6][22]={"fighter_fight\\kb1.bmp","fighter_fight\\kb2.bmp","fighter_fight\\kb3.bmp","fighter_fight\\kb4.bmp","fighter_fight\\kb5.bmp","fighter_fight\\kb6.bmp"};
int fighterfightbindex=0;

int stage1enemy1x=720;
int stage1enemy1y=100;
int stage1enemy1f1index=0;
int stage1enemy1fb1index=0;
int stage1enemy1d1index=0;
char stage1enemy1db1[7][24]={"stage1_enemy1\\e1db1.bmp","stage1_enemy1\\e1db2.bmp","stage1_enemy1\\e1db3.bmp","stage1_enemy1\\e1db4.bmp","stage1_enemy1\\e1db5.bmp","stage1_enemy1\\e1db6.bmp","stage1_enemy1\\e1db7.bmp"};
char stage1enemy1d1[7][23]={"stage1_enemy1\\e1d1.bmp","stage1_enemy1\\e1d2.bmp","stage1_enemy1\\e1d3.bmp","stage1_enemy1\\e1d4.bmp","stage1_enemy1\\e1d5.bmp","stage1_enemy1\\e1d6.bmp","stage1_enemy1\\e1d7.bmp"};
char stage1enemy1fb1[7][24]={"stage1_enemy1\\e1fb1.bmp","stage1_enemy1\\e1fb2.bmp","stage1_enemy1\\e1fb3.bmp","stage1_enemy1\\e1fb4.bmp","stage1_enemy1\\e1fb5.bmp"};
char stage1enemy1f1[7][23]={"stage1_enemy1\\e1f1.bmp","stage1_enemy1\\e1f2.bmp","stage1_enemy1\\e1f3.bmp","stage1_enemy1\\e1f4.bmp","stage1_enemy1\\e1f5.bmp"};
int enemycall=0;

char loadpage[11][17]={"loading\\ld.bmp","loading\\ld1.bmp","loading\\ld2.bmp","loading\\ld3.bmp","loading\\ld4.bmp","loading\\ld5.bmp","loading\\ld6.bmp","loading\\ld7.bmp","loading\\ld8.bmp","loading\\ld9.bmp","loading\\ld10.bmp"};
int loadindex=0;


bool jumpup=false;
bool jumpdown=false;

bool e1fight=false;



int game_page=0;



void iDraw()
{

	
	iClear();

	
	if(game_page==0){
		iShowBMP2(250,0,home_page,0);
		iShowBMP2(button_new_gamex,button_new_gamey,button_new_game,0);
		iShowBMP2(button_optionx,button_optiony,button_option,0);
		iShowBMP2(button_high_scorex,button_high_scorey,button_high_score,0);
		iShowBMP2(button_quitx,button_quity,button_quit,0);
		
	}
	
	
	if(game_page==2){
		iShowBMP(x,y,"game_background\\bg_2.bmp");
		iShowBMP2(button_soundx,button_soundy,button_sound,0);
		iShowBMP2(button_instructionx,button_instructiony,button_instruction,0);
		iShowBMP2(button_aboutx,button_abouty,button_about,0);
		iShowBMP2(555,100,button_back,0);
		}
	 
	 if(game_page==3){
		iShowBMP(x,y,"button_page\\high_score.bmp");
		iShowBMP2(570,70,button_back,0);
		
	}
	 if(game_page==4){
			iShowBMP(x,y,"game_background\\bg_4.bmp");
			iShowBMP2(button_onx,button_ony,button_on,0);
			iShowBMP2(button_offx,button_offy,button_off,0);
			iShowBMP2(markx,marky,mark,0);
			iShowBMP2(1140,0,button_back,0);
			
	}
	if(game_page==5){
		iShowBMP(x,y,"game_background\\bg_3.bmp");
		iShowBMP2(1140,0,button_back,0);
	}
	
	if(game_page==6){
		iShowBMP(x,y,"game_background\\bg_1.bmp");
		iShowBMP2(1140,0,button_back,0);
	}
	if (game_page==1){

		
		iShowBMP(x,y,loadpage[loadindex]);
	}
	if(game_page==7){
		
		iShowBMP(x,y,"game_background\\bg_10.bmp");
		iShowBMP2(0,105,"extra\\hut.bmp",0);
	
		if(call==0){
			
		iShowBMP2(fighterx,fightery,fighter[fighterindex],0);
		}
		if(call==2){
			
		iShowBMP2(fighterx,fightery,fighterfight[fighterfightindex],0);
		
		}
		if(call==1){
			
			iShowBMP2(fighterx,fightery,fighterback[fighterbackindex],0);
		}
		if(call==3){
			
			iShowBMP2(fighterx,fightery,fighterfightb[fighterfightbindex],0);
	}
	}
	if(game_page==8){
		
		iShowBMP(x,y,"game_background\\bg_10.bmp");
		
		if(enemycall==5){
		iShowBMP2(stage1enemy1x+200,stage1enemy1y,stage1enemy1fb1[0],0);
		iShowBMP2(stage1enemy1x+300,stage1enemy1y,stage1enemy1fb1[0],0);
		}
		

		if(call==0){
			
		iShowBMP2(fighterx,fightery,fighter[fighterindex],0);
		}
		if(call==2){
			
		iShowBMP2(fighterx,fightery,fighterfight[fighterfightindex],0);
		
		}
		if(call==1){
			
			iShowBMP2(fighterx,fightery,fighterback[fighterbackindex],0);
		}
		if(call==3){
			
			iShowBMP2(fighterx,fightery,fighterfightb[fighterfightbindex],0);
	}
		if(enemycall==1){
			iShowBMP2(stage1enemy1x-200,stage1enemy1y,stage1enemy1f1[stage1enemy1f1index],0);
			iShowBMP2(stage1enemy1x-300,stage1enemy1y,stage1enemy1f1[stage1enemy1f1index],0);

		}
		if(enemycall==2){
			iShowBMP2(stage1enemy1x+200,stage1enemy1y,stage1enemy1fb1[stage1enemy1fb1index],0);
			iShowBMP2(stage1enemy1x+300,stage1enemy1y,stage1enemy1fb1[stage1enemy1fb1index],0);
		}
		
		if(enemycall==3){
			iShowBMP2(stage1enemy1x,stage1enemy1y,stage1enemy1d1[stage1enemy1d1index],0);
		}
		
	
	}
}



void iMouseMove(int mx, int my)
{

	
	
}

void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if(game_page==0){
			if(mx >= 150 && mx <= 470 && my >= 450 && my <= 532){
			game_page=1;
		}
		if(mx >= 150 && mx <= 470 && my >= 350 && my <= 432){
			game_page=2;
		}
		
		if(mx >= 150 && mx <= 470 && my >= 250 && my <= 332){
			game_page=3;
		}
		if(mx >= 150 && mx <= 470 && my >=150 && my <= 232){
			exit(0);
		}
		}
		if(game_page==2){
			if(mx >= 490 && mx <= 810 && my >=410  && my <= 490){
				game_page=4;
			}
			if(mx >= 490 && mx <= 810 && my >= 310 && my <= 390){
			game_page=5;
			}
			if(mx >= 490 && mx <= 810 && my >= 210 && my <= 290){
			game_page=6;
			}
			if(mx >= 555 && mx <= 715 && my >= 100 && my <= 180){
				game_page=0;
			}
		}

		if(game_page==3){
			if(mx >= 570 && mx <= 730  && my >=70  && my <= 150){
				game_page=0;
			}
		}
		
		if(game_page==4){
			if(mx >= 490 && mx <= 810 && my >= 370 && my <= 450){
			markx=820;
			marky=370;
	
			}
			 if(mx >= 490 && mx <= 810 && my >= 270 && my <= 350){
				markx=820;
				marky=270;
				
			}
			if(mx >= 1140 && mx <= 1300 && my >= 0 && my <= 80){
				game_page=2;
			}
		}
		if(game_page==5){
				if(mx >= 1140 && mx <= 1300 && my >= 0 && my <= 80){
				game_page=2;
			}
			}

			if(game_page==6){
				if(mx >= 1140 && mx <= 1300 && my >= 0 && my <= 80){
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
	if(key == 'b')
	{
		
	
	}
	if(key == 's')
	{
		
		if(call==0){
			call=2;
		}
		
		else if(call==1){
			call=3;
		}
		if(game_page==8){
		
		enemycall=2;
		}

	}
	
	

}


void iSpecialKeyboard(unsigned char key)
{
	if(key == GLUT_KEY_UP)
	{
	
		
		jumpup= true;
		
		
	
	}
	
	

	if(key == GLUT_KEY_RIGHT)
	{
		call=0;
		fighterx+=15;
		fighterindex++;
		
		
	if(fighterindex>=8){
		fighterindex=0;
	}
	if(fighterx>=1300){
		game_page=8;
		fighterx=0;
		enemycall=5;
		}
	if(fighterx==stage1enemy1x){
			enemycall=3;
		}
	
	
	
	}
	if(key == GLUT_KEY_LEFT)
	{
		call=1;
		fighterx-=15;
		fighterbackindex++;
		
	if(fighterbackindex>=8){
		fighterbackindex=0;
	}
	if(game_page==8 && fighterx<=0){
		fighterx=1300;
			game_page=7;
		}
	
	}
	
}

void enemyfight(){
	if(enemycall==2){
		stage1enemy1fb1index++;
		if(stage1enemy1fb1index>=5){
			stage1enemy1fb1index=0;
		}
		
	

	}
}

void defeat(){
			if(enemycall==3){
				stage1enemy1d1index++;
				if(stage1enemy1d1index>=7){
					stage1enemy1d1index=7;
				}
			}
		}

void loading(){
if(game_page==1){
	loadindex++;
	if(loadindex >=11){
		game_page=7;
		
	}
}
}

void jumpchange(){
	if(jumpup==true){
		fightery+=40;
		fighterx+=10;
		if(fightery>=220){
			jumpup=false;
		jumpdown=true;
			}
	}
		
		if(jumpdown==true){
			fightery-=20;
			fighterx+=10;
			if(fightery==100){
				jumpdown=false;
			}
		}
}

void fight(){
		if(call==2){
			
		fighterfightindex++;
		if(fighterfightindex>=6){
		fighterfightindex=0;
		call=0;
		}
	}
		else if(call==3){
			
		fighterfightbindex++;
		if(fighterfightbindex>=6){
		fighterfightbindex=0;
		call=1;
		}
	}
}







int main()
{
	iSetTimer(10,loading);
	iSetTimer(200,fight);
	iSetTimer(0,jumpchange);
	iSetTimer(200,enemyfight);
	iSetTimer(200,defeat);
	
	iInitialize(1300, 700, "UnKilled");
	
	return 0;
}
