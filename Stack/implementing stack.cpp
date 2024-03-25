#include<iostream>
using namespace std;

struct stack
{
	int size;
	int top;
	int arr[100];
};
main()
{
	stack *s = new stack;
	s->size=50;
	s->top=-1;
//	s->arr[s->size];
	for(int i=0 ; i<5 ; i++)
	{
		s->top+=1;
		cin>>s->arr[i];
	}
//	s->arr.pop();
	cout<<"out put = "<<endl;
	for(int i=0 ; i<5 ; i++)
	{
		cout<<s->arr[i];
	}
	
	cout<<"array"<<s->arr[1];
	cout<<"array"<<s->arr[2];
	cout<<"array"<<s->arr[3];	
}
