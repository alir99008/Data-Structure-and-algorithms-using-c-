#include<iostream>
using namespace std;

struct stack
{
	
	int top;
	int arr[6];
};
bool isFull(stack * s)
{
	
	if(s->top>=6)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
bool isEmpty(stack * s)
{
	
	if(s->top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void push(stack * s,int value)
{
	
	if(isFull(s))
	{
		cout<<"Stack is overflow.."<<endl;
	}
	else
	{
		s->top++;
		cout<<"\nElement push = "<<value<<endl;
		s->arr[s->top] = value;
		
	}
}
main()
{
	stack * s1 = new stack;
	s1->top=-1;
	
	push(s1,2);
	push(s1,3);
	push(s1,4);
	push(s1,5);
	cout<<"\n\nReverse of stack is ="<<endl;
	for(int i=s1->top ; i>=0 ; i--)
	{
		cout<<s1->arr[i]<<" ";
	}
}
	
