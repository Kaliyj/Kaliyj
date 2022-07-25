#include <stdlib.h>
#include "tools.h"
#include "game2048.h"


bool is_full(void)
{
	int* num = (int*)view;
	for(int i=0;i<16;i++)
	{
		if(0 == num[i]) return false;
	}
	return true;
}

void rand_two(void)
{
	int x,y;
	if(is_full())
	{
		debug("NO");
		return;
	}
	x=rand()%4;
	y=rand()%4;
	while(0 != view[x][y])
	{
		x=rand()%4;
		y=rand()%4;
	}
	view[x][y]=2;
}

void show_view(void)
{
	system("clear");
	for(int i=0;i<4;i++)
	{
		printf("---------------------\n");
		for(int j=0;j<4;j++)
		{
			if(view[i][j])
			{
				printf("|%4d",view[i][j]);
			}
			else
				printf("|    ");
		}
		printf("|\n");
	}
	printf("---------------------\n");
}

bool is_die(void)
{
	if(!is_full()) return false;
	for(int y=0;y<4;y++)
	{
		for(int x=0;x<3;x++)
		{
			if(view[x][y] == view[x+1][y])
			return false;
		}
	}
	for(int x=0;x<4;x++)
	{
		for(int y=0;y<3;y++)
		{
			if(view[x][y] == view[x][y+1])
			return false;
		}
	}
	return true;	
}
