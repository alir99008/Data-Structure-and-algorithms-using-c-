#include<iostream>
using namespace std;
struct node
{
	int data;
	node * next;
};

main()
{
	node * start = NULL , *ptr , *temp;
	for(int i = 0 ; i<5 ; i++)
	{
		ptr = new node;
		cout<<"Enter data = ";
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
	int a=0;
	
	while(temp!=NULL)
	{
		int a = sum;
		sum = temp->data;
		cout<<sum+a;
		temp = temp->next;
	}
}
