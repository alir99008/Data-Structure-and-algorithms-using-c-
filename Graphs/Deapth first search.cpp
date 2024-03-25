#include<iostream>
using namespace std;

int visited[8]={0,0,0,0,0,0,0,0};
	
int data[8][8] = {
		{0,1,1,1,0,0,0,0},
		{1,0,1,0,1,0,0,0},
		{1,1,0,1,1,0,0,0},
		{1,0,1,0,1,0,0,0},
		{0,1,1,1,0,1,0,1},
		{0,0,0,0,1,0,1,0},
		{0,0,0,0,0,1,0,1},
		{0,0,0,0,1,0,1,0}
	};
	
int DFS(int i)
{
	cout<<i;
	visited[i] = 1;
	for(int j=0 ; j<8 ; j++)
	{
		if(data[i][j]==1 && visited[j]==0)
		{
			DFS(j);
		}
	}
}
main()
{
	DFS(1);
}
