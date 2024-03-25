#include<iostream>
using namespace std;
struct queue
{
	int front;
	int rare;
	int arr[7];
};

int isEmpty(queue * q)
{
	if(q->front == q->rare)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isFull(queue * q)
{
	if(q->rare > 7-1)
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
		cout<<"Queue is Full..";
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
		cout<<"Queue is Empty........";
	}
	else
	{
		q->front++;
		a=q->arr[q->front];
		
	}
	return a;
}
main()
{
	queue * q = new queue;
	q->front = -1;
	q->rare = -1;
	enqueue(q,4);
	enqueue(q,1);
	enqueue(q,2);
	enqueue(q,3);
	cout<<"DeQueue Element is = "<<dequeue(q)<<endl;
	cout<<"DeQueue Element is = "<<dequeue(q)<<endl;
	cout<<"DeQueue Element is = "<<dequeue(q)<<endl;
	cout<<"DeQueue Element is = "<<dequeue(q)<<endl;
	cout<<"DeQueue Element is = "<<dequeue(q)<<endl;
}
