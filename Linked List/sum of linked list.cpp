#include<iostream>
using namespace std;
struct node
{
	int data;
	node * next;
	
};



main()
{
	node * start = NULL , * ptr , * temp;
	for(int i=0 ; i<5 ; i++)
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
	
	temp = start;
	int sum = 0;
	while(temp->next!=NULL)
	{
		
		sum = sum +temp->data;
		temp = temp->next;
	}
	
	sum = sum +temp->data;
	cout<<"sum = "<<sum;
	
}
