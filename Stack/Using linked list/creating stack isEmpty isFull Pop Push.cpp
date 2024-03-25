#include<iostream>
using namespace std;

struct node
{
	int data;
	node * next;
};

node * top = NULL;
int isEmpty(node * top)
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
	if (ptr == NULL)
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
		cout<<"stack over flow....."<<endl;
	}
	else
	{
		node * tp = new node;
		tp->data = val;
		tp->next = top;
		top = tp;
	}
}
void display(node * ptr)
{
	while(ptr->next!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr = ptr->next;
	}
	cout<<ptr->data;
}
int pop()
{
	if(isEmpty(top))
	{
		cout<<"stack underflow....."<<endl;
	}
	else
	{
	
		node* n = top;
		int x = n->data;
        top = top->next;
        
        delete n;
        return x; 
		
	}
}
main()
{
	pop();
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
	display(top);
	int a = pop();
	cout<<"\n a = "<<a<<endl;
	display(top);
	a = pop();
	cout<<"\n a = "<<a<<endl;
	display(top);
	a = pop();
	cout<<"\n a = "<<a<<endl;
	display(top);
	a = pop();
	cout<<"\n a = "<<a<<endl;
	a = pop();
	cout<<"\n a = "<<a<<endl;
	a = pop();
	cout<<"\n a = "<<a<<endl;
	a = pop();
	cout<<"\n a = "<<a<<endl;
	a = pop();
	cout<<"\n a = "<<a<<endl;
}
