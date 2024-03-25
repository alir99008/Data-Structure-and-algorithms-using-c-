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
		return value;
		
	}
}
main()
{
	cout<<"STACK 1\n\n";
	stack * s1 = new stack;
	s1->top=-1;
	pop(s1);
	push(s1,2);
	push(s1,3);
	push(s1,4);
	push(s1,5);
	cout<<endl<<"\n\nDisplay"<<endl;
	for(int i=0 ; i<5 ; i++)
	{
		cout<<s1->arr[i];
	}
	unsigned val = pop(s1);
	cout<<"\ndelete value is ="<<val;
	unsigned vaal = pop(s1);
	cout<<"\ndelete value is ="<<vaal;
	
	cout<<endl<<"\n\nDisplay"<<endl;
	for(int i=0 ; i<=s1->top ; i++)
	{
		cout<<s1->arr[i];
	}
	cout<<endl;
	push(s1,2);
	push(s1,3);
	push(s1,2);
	push(s1,3);
	push(s1,2);
	push(s1,3);
	push(s1,3);
	push(s1,3);
	
	cout<<"\n\nSTACK 2\n\n";
	stack * s2 = new stack;
	s2->top=-1;
	pop(s2);
	push(s2,2);
	push(s2,3);
	push(s2,4);
	push(s2,5);
	unsigned val1 = pop(s2);
	cout<<"\ndelete value is ="<<val1;
	unsigned vaal1 = pop(s2);
	cout<<"\ndelete value is ="<<vaal1;
	
	cout<<endl<<"\n\nDisplay"<<endl;
	for(int i=0 ; i<=s2->top ; i++)
	{
		cout<<s2->arr[i];
	}
}
