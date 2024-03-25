#include<iostream>
using namespace std;
struct queue
{
	int arr[7];
	int front;
	int rare;
};
int isEmpty(queue * q)
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
int isFull(queue * q)
{
	if(q->rare >=7 )
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
		cout<<"your queue is full......"<<endl;
	}
	else
	{
		
		q->arr[q->rare] = val;
		q->rare++;
	}
}
int dequeue(queue * q)
{
	if(isEmpty(q))
	{
		cout<<"Your queue is empty......."<<endl;
	}
	else
	{
		
		int val = q->arr[q->front];
		q->front++;
		return val;
	}
}
void enqueue_front(queue * q , int val)
{
	q->front--;
	if(q->front!=-1)
	{
		q->arr[q->front] = val;
	}
	
}
int dequeue_rare(queue* q)
{
	if(q->rare != -1)
	{
		int val = q->arr[q->rare];
		q->rare--;
		return val;
	}
	else
	{
		return 0;
	}
}
void display(queue * q)
{
	int val = q->front;
	while(val != q->rare)
	{
		
		cout<<q->arr[val]<<endl;
		val++;
		
	}
}
main()
{
	queue* q = new queue;
	q->front = 0;
	q->rare = 0;
	dequeue(q);
	enqueue(q,1);
	enqueue(q,2);
	enqueue(q,3);
	enqueue(q,4);
	enqueue(q,5);
	display(q);
	cout<<"dequeue element is = "<<dequeue(q)<<endl;
	display(q);
	cout<<"dequeue element is = "<<dequeue(q)<<endl;
	cout<<"dequeue element is = "<<dequeue(q)<<endl;
	display(q);
	cout<<endl;
	enqueue_front(q,1);
	enqueue_front(q,2);
	enqueue_front(q,3);
	display(q);
	cout<<endl;
	dequeue_rare(q);
	dequeue_rare(q);
	display(q);
	
	
}
