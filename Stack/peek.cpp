#include<iostream>
using namespace std;
struct stack
{
	int top;
	int arr[6];
};
bool isEmpty(stack * s)
{
	if(s->top == -1)
	{
		cout<<"stack under flow";
		return 1;
	}
	else
	{
		return 0;
	}
}
bool isFull(stack * s)
{
	if(s->top>=6-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void push(stack * s, int data)
{
	if(isFull(s))
	{
		cout<<"stack over flow = ";
	}
	else
	{
		s->top++;
		s->arr[s->top] = data;
	}
}
int pop(stack * s)
{
	if(isEmpty(s))
	{
		cout<<"stack over flow = ";
	}
	else
	{
		int data = s->arr[s->top];
		s->top=s->top-1;
		return data;
	}
}
int peak(stack * s,int i)
{
	int position = s->top-i+1;
	if(position < 0 )
	{
		cout<<"Wrong position you entered...";
	}
	else
	{
		return s->arr[position];
	}
}
main()
{
	stack * s = new stack;
	s->top = -1;
	
	pop(s);
	push(s , 1);
	push(s,2);
	push(s,3);
	push(s,4);
	push(s,5);
	push(s,6);
	push(s,7);
	push(s,8);
	
	int a = peak(s,3);
	cout<<"a = "<<a;
	a = peak(s,4);
	cout<<"a = "<<a;
	
	
	
	
}
