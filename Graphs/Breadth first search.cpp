#include<iostream>
using namespace std;

struct queue
{
	int front;
	int rare;
	int arr[8];
	
};
bool isEmpty(queue * q)
{
	if(q->front==q->rare)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
bool isFull(queue * q)
{
	if(q->rare>7)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void enqueue(queue * q , int val)
{
	if(isFull(q))
	{
		cout<<"\nYour Queue is Full.....\n"<<endl;
	}
	else
	{
		q->rare++;
		q->arr[q->rare] = val;
	}
}
int dequeue(queue * q)
{
	int a=-1;
	if(isEmpty(q))
	{
		cout<<"\nyour queue is empty........"<<endl;
	}
	else
	{
		q->front++;
		a = q->arr[q->front];
		
	}
	return a;
}
main()
{
	queue * q = new queue;
	q->front = -1;
	q->rare = -1;
	
	int visited[8]={0,0,0,0,0,0,0,0};
	int check =0;
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
	cout<<check;
	enqueue(q,check);
	visited[check]=1;
	while(!isEmpty(q))
	{
		int node = dequeue(q);
		for(int i=0 ; i<8 ; i++)
		{
			if(data[node][i]==1 && visited[i]==0)
			{
				cout<<i;
				visited[i] = 1;
				enqueue(q,i);
			}
		}
	}
}
