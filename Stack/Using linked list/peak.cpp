#include<iostream>
using namespace std;
struct node
{
	int data;
	node * next;
	
};
node * top = NULL;

int isEmpty()
{
	if(top==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isFull()
{
	node * ptr = new node;
	if(ptr == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void push(int val)
{
	if(isFull())
	{
		cout<<"stack is over flow...."<<endl;
	}
	else
	{
		node * ptr = new node;
		ptr->data = val;
		ptr->next = top;
		top = ptr;
	}
}
int pop()
{
	if(isEmpty())
	{
		cout<<"stack is under flow..."<<endl;
	}
	else
	{
		node * ptr = top;
		int num = ptr->data;
		top = top->next;
		delete ptr;
		return num;
	}
}
int peak(int position)
{
	node * ptr = top;
	int counter = 0;
	for(int i=0 ; (i<position-1 && ptr != NULL) ; i++)
	{
		counter++;
		ptr = ptr->next;
	}
	cout<<"\n counter is = "<<counter<<endl;
	if(ptr!=NULL)
	{
		return ptr->data;
	}
	else
	{
		return -1;
	}
}
void display()
{
	node * ptr = top;
	while(ptr->next != NULL)
	{
		cout<<ptr->data<<" ";
		ptr = ptr->next;
	}
	cout<<ptr->data;
}
main()
{
	pop();
	push(1);
	push(2);
	push(3);
	display();
	int a = pop();
	cout<<"\n pop index = "<<a<<endl;
	display();
	int data = peak(4);
	cout<<"\nyour requiring peak value is = "<<data<<endl;
	data = peak(3);
	cout<<"\nyour requiring peak value is = "<<data<<endl;
	data = peak(2);
	cout<<"\nyour requiring peak value is = "<<data<<endl;
}
