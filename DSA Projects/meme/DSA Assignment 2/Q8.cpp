#include<iostream>
using namespace std;

struct node
{
	int data;
	node * next;
	node * previous;
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
main()
{
	node * start = NULL , * ptr , * temp;
	for(int i=0 ; i<10 ; i++)
	{
		ptr = new node;
		cout<<"Please enter the data = ";
		cin>>ptr->data;
		ptr->next = NULL;
		
		if(start == NULL)
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
	sum_of_even(start);
}
