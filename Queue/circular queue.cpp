#include<iostream>
using namespace std;
struct queue
{
	int rare;
	int front;
	int arr[6];
};
int isEmpty(queue * q)
{
	if(q->rare == q->front)
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
	if((q->rare+1)%6 == q->front)
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
		cout<<"Queue is Full......."<<endl;
	}
	else
	{
		
		q->rare = (q->rare +1)%6;
		
		q->arr[q->rare] = val; 
        printf("Enqued element: %d\n", val);
		
	}
	
	
}
int dequeue(queue * q)
{
	int a=-1 ;
	if(isEmpty(q))
	{
		cout<<"Queue is Empty....."<<endl;
		return a;
	}
	else
	{
		q->front = (q->front +1)%6;
		cout<<"q - >  front is = "<<q->front<<endl;
        a = q->arr[q->front];
		
	}
	return a;
}
main()
{
	queue * q = new queue;
	q->front=0;
	q->rare=0;
	
	cout<<"Dequeue element is = "<<dequeue(q)<<endl;
	enqueue(q , 4);
	enqueue(q , 5);
	enqueue(q , 6);
	enqueue(q , 7);
	enqueue(q , 8);
	enqueue(q , 9);
	enqueue(q , 1);
	
	cout<<"Dequeue element is = "<<dequeue(q)<<endl;
	cout<<"Dequeue element is = "<<dequeue(q)<<endl;
	cout<<"Dequeue element is = "<<dequeue(q)<<endl;
	cout<<"Dequeue element is = "<<dequeue(q)<<endl;
	cout<<"Dequeue element is = "<<dequeue(q)<<endl;
	cout<<"Dequeue element is = "<<dequeue(q)<<endl;
	enqueue(q , 9);
	enqueue(q , 1);
	cout<<"Dequeue element is = "<<dequeue(q)<<endl;
}

