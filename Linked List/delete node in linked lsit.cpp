#include<iostream>
using namespace std;
struct node
{
	int data;
	node * next;
};

node * delete_begining(node *start)
{
	node * ptr = new node;
	ptr = start;
	start = start->next;
	delete ptr;
	return start;
}

node * delete_between(node * start , int index)
{
	node *ptr = new node;
	ptr = start;
	node * temp = new node;
	temp = start->next;
	int i=0;
	while(i != index-1)
	{
		
		ptr = ptr->next;
		temp = temp->next;
		i++;
		
	}
	ptr->next = temp->next;
	delete temp;
	return start;
}

delete_last(node * start)
{
	node *ptr = new node;
	ptr = start;
	node * temp = new node;
	temp = start->next;
	
	while(temp->next != NULL)
	{
		
		ptr = ptr->next;
		temp = temp->next;
		
		
	}
	ptr->next = NULL;
	delete temp;
//	return start;
}

main()
{
	node *start = NULL , *ptr , * temp;
	for(int i= 0 ; i<5 ; i++)
	{
		ptr = new node;
		cout<<"please enter the data = ";
		cin>>ptr->data;
		ptr->next = NULL;
		if(start == NULL)
		{
			start = ptr;
		}
		else
		{
			temp = start;
			while(temp->next!= NULL)
			{
				temp = temp->next;
			}
			temp->next = ptr;
		}
	}
//	start = delete_begining(start);
//	start = delete_between(start,2);
	delete_last(start);


	temp = start;
	while(temp->next!=NULL)
	{
		cout<<temp->data;
		temp = temp->next;
	}
	cout<<temp->data;
}
