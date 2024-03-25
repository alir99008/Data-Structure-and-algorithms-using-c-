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
		cout<<"\n s->top push = "<<s->top<<endl;
		s->arr[s->top] = value;
		
	}
}
unsigned pop(stack * s)
{
	
	if(isEmpty(s))
	{
		cout<<"Stack is underflow.."<<endl;
	}
	else
	{
		int value = s->arr[s->top];
		s->top--;
		cout<<"\n s->top pop = "<<s->top<<endl;
		return value;
		
	}
}
main()
{
	stack * s = new stack;
	s->top=-1;
	pop(s);
	push(s,2);
	push(s,3);
	push(s,4);
	push(s,5);
	for(int i=0 ; i<5 ; i++)
	{
		cout<<s->arr[i];
	}
	unsigned val = pop(s);
	cout<<"\ndelete value is ="<<val;
	unsigned vaal = pop(s);
	cout<<"\ndelete value is ="<<vaal;
	cout<<endl;
	for(int i=0 ; i<=s->top ; i++)
	{
		cout<<s->arr[i];
	}
	cout<<endl;
	push(s,2);
	push(s,3);
	push(s,2);
	push(s,3);
	push(s,2);
	push(s,3);
	push(s,3);
	push(s,3);
	
}
