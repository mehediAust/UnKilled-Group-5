#ifndef SCORE_H_INCLUDED
#define SCORE_H_INCLUDED

#include<iostream>
#include <string>
#include <vector>
#include<algorithm>
#include<string.h>
using namespace std;


//bool sortscore(Score a,Score b);
//void saveScore(string name,int score);
//void readScore();


struct Score
{
	char name[100];
	int score;

	Score(char _name[100],int _score)
	{
		strcpy(name,_name);
		score = _score;
	}
	Score()
	{
		strcpy(name,"");
		score = 0;
	}
};

vector <Score> sc;
Score data;

bool sortScore(Score a,Score b)
{
	
	return a.score>b.score;
}

void saveScore(char* name,int score)
{
	Score temp;
	strcpy(temp.name,name);
	temp.score = score;
	FILE* fp = fopen("Score.bin","ab");
	fread(&temp,sizeof(temp),1,fp);
	fclose(fp);

}

void readScore()
{
	sc.clear();
	FILE* fp = fopen("Score.bin","rb");
	Score temp;
	while(fread(&temp,sizeof(temp),1,fp)==1)
		sc.push_back(temp);
	fclose(fp);

	sort(sc.begin(),sc.end(),sortScore);
}

void playingSound()
{
	if(sound)
	{
		PlaySound("music/game.wav",NULL,SND_LOOP | SND_ASYNC);	
		sound = false;
	
	}
}




#endif