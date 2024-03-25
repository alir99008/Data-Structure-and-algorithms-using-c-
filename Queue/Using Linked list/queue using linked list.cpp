#include<iostream>
using namespace std;

struct node
{
	int data;
	node * next;
	
};

node * front = NULL;
node * rare = NULL;

int isFull()
{
	node * ptr = new node;
	if (ptr == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isEmpty()
{
	if(front== NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void enqueue(int val)
{
	if(isFull())
	{
		cout<<"Queue is FUll....."<<endl;
	}
	else
	{
		node * ptr = new node;
		ptr->data = val;
		ptr->next = NULL;
		if(front==NULL)
		{
			front=rare=ptr;
		}
		else
		{
			rare->next  = ptr;
			rare = ptr;
		}
	}
}
int dequeue()
{
	if(isEmpty())
	{
		cout<<"Stack is empty...."<<endl;
	}
	else
	{
		node * ptr = front;
		int val = ptr->data;
		front  = front->next;
		delete ptr;
		return val;
		
	}
	
}
void display()
{
	node * ptr = front;
	while(ptr->next != NULL)
	{
		cout<<ptr->data<<" ";
		ptr= ptr->next;
	}
	cout<<ptr->data<<endl;
	
}

main()
{
	dequeue();
	enqueue(12);
	enqueue(1);
	enqueue(2);
	enqueue(23);
	enqueue(4);
	display();
	cout<<"Dequeue element is = "<<dequeue()<<endl;
	cout<<"Dequeue element is = "<<dequeue()<<endl;
	cout<<"Dequeue element is = "<<dequeue()<<endl;
	display();
	enqueue(23);
	enqueue(4);
	display();
}
