#include<iostream>
using namespace std;

struct stack
{
	
	int top;
	char arr[100];
};
bool isFull(stack * s)
{
	
	if(s->top>=100)
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
void push(stack * s,char value)
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
bool match(char a , char b)
{
	if(a=='(' && b==')')
	{
		return 1;
	}
	if(a=='{' && b=='}')
	{
		return 1;
	}
	if(a=='[' && b==']')
	{
		return 1;
	}
	return 0;
}
main()
{
	stack * s = new stack;
	s->top=-1;
	char * ex = "8*5{(3+2)-(4)*9}{8+9-0(8)}";
	char check;
	for(int i=0 ; ex[i]!='\0' ; i++)
	{
		if(ex[i]=='(' || ex[i]=='{'|| ex[i]=='[')
		{
			push(s,ex[i]);
		}
		if(ex[i]==')' || ex[i]=='}'|| ex[i]==']')
		{
			check = pop(s);
			if(match(check , ex[i]))
			{
				cout<<"\n.....\n";
			}
			else
			{
				cout<<"paranthesis is not match...."<<endl;
				break;
			}
		}
	}
	if(s->top>=0)
	{
		cout<<"your parathesis is not maching....."<<endl;
	}
	else
	{
		cout<<"Your paranthesis is matching.."<<endl;
	}
	
}
