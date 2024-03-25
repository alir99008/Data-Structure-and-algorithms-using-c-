#include<iostream>
using namespace std;
struct node
{
	int data;
	node * next;
	
};


void sum_of_even(node * start)
{
	node *ptr = new node;
	ptr = start;
	int sum=0;
	while(ptr->next != NULL)
	{
		if(ptr->data%2==0)
		{
			sum = sum+ptr->data;
		}
		ptr = ptr->next;
	}
	if(ptr->data%2==0)
	{
		sum = sum+ptr->data;
	}
		
	cout<<"\n\n SUM OF EVEN IS = "<<sum<<endl;
}


void minimum(node * start)
{
	node *ptr = new node;
	ptr = start;
	int min = ptr->data;
	while(ptr->next != NULL)
	{
		if (min > ptr->data)
		{
			min = ptr->data;
		}
		ptr = ptr->next;
	}
	if(min > ptr->data)
	{
		min = ptr->data;
	}
	cout<<"\n Minimum number = "<<min<<endl;
}



void length(node *  start)
{
	node *ptr = new node;
	ptr = start;
	int length = 0;
	
	while(ptr->next != NULL)
	{
		
		ptr = ptr->next;
		length++;
	}
	
	length++;
	cout<<"\nlength = "<<length;
}
void sum(node * start)
{
	node *ptr = new node;
	ptr = start;
	int sum=0;
	while(ptr->next != NULL)
	{
		sum = sum+ptr->data;
		ptr = ptr->next;
	}
	
	sum = sum+ptr->data;
	cout<<"\nSum  = "<<sum;
}
void display(node * start)
{
	node *ptr = new node;
	ptr = start;
	int length = 0;
	int sum=0;
	while(ptr->next != NULL)
	{
		cout<<ptr->data<<" ";
		
		ptr = ptr->next;
		
	}
	cout<<ptr->data;
	
	
}

main()
{
	node * start = NULL , *ptr , *temp;
	
	for(int i=0 ; i<5 ; i++)
	{
		ptr = new node;
		cout<<"Enter data = ";
		cin>>ptr->data;
		ptr->next  = NULL;
		if (start == NULL)
		{
			start = ptr;
		}
		else
		{
			temp = start;
			while(temp->next != NULL)
			{
				temp = temp->next;
				
			}
			temp->next = ptr;
		}
	}
	display(start);
	sum(start);
	length(start);
	minimum(start);
	sum_of_even(start);
}
