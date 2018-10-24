#ifndef VARIABLE_H_INCLUDED
#define VARIABLE_H_INCLUDED


# include "bitmap_loader.h"


char firePicture1[] = {"extra\\agun.bmp"};
char firePicture2[] = {"extra\\agun2.bmp"};



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

int stage1enemy1x=920;
int stage1enemy1y=100;
int stage1enemy1f1index=0;
int stage1enemy1fb1index=0;
int stage1enemy1d1index=0;
int enemyCount =0;
bool enemyisDead = false;
char stage1enemy1db1[7][50]={"stage1_enemy1\\e1db1.bmp","stage1_enemy1\\e1db2.bmp","stage1_enemy1\\e1db3.bmp","stage1_enemy1\\e1db4.bmp","stage1_enemy1\\e1db5.bmp","stage1_enemy1\\e1db6.bmp","stage1_enemy1\\e1db7.bmp"};
char stage1enemy1d1[7][50]={"stage1_enemy1\\e1d1.bmp","stage1_enemy1\\e1d2.bmp","stage1_enemy1\\e1d3.bmp","stage1_enemy1\\e1d4.bmp","stage1_enemy1\\e1d5.bmp","stage1_enemy1\\e1d6.bmp","stage1_enemy1\\e1d7.bmp"};
char stage1enemy1fb1[7][24]={"stage1_enemy1\\e1fb1.bmp","stage1_enemy1\\e1fb2.bmp","stage1_enemy1\\e1fb3.bmp","stage1_enemy1\\e1fb4.bmp","stage1_enemy1\\e1fb5.bmp"};
char stage1enemy1f1[7][23]={"stage1_enemy1\\e1f1.bmp","stage1_enemy1\\e1f2.bmp","stage1_enemy1\\e1f3.bmp","stage1_enemy1\\e1f4.bmp","stage1_enemy1\\e1f5.bmp"};
int enemycall=0;

char loadpage[11][17]={"loading\\ld.bmp","loading\\ld1.bmp","loading\\ld2.bmp","loading\\ld3.bmp","loading\\ld4.bmp","loading\\ld5.bmp","loading\\ld6.bmp","loading\\ld7.bmp","loading\\ld8.bmp","loading\\ld9.bmp","loading\\ld10.bmp"};
int loadindex=0;

int fire2x = 920;

bool jumpup=false;
bool jumpdown=false;
bool sound = true;
bool e1fight=false;
bool enemyFire = false;


int game_page=0;
int enemy1_health = 100;
int enemy2_health = 100;
int player_health = 100;
int fireMove = 0;



#endif