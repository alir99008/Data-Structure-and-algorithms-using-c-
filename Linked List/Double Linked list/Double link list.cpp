#include<iostream>
using namespace std;
struct node
{
	int data;
	node * next;
	node * previous;
};
node * insert_beg(node * start)
{
	node * ptr = new node;
	ptr = start;
	node * temp = new node;
	temp->data = 6;
	temp->next = start;
	start->previous = temp;
	temp->previous = NULL;
	
	start  = temp;
	
	return start;
}
void insert_betw(node * start , int pos)
{
	node * ptr = new node;
	ptr = start;
	int i=0;
	while(i!=pos-1)
	{
		
		ptr = ptr->next;
		i++;
	}
	node * temp = new node;
	temp->data = 6;
	temp->next = ptr->next;
	temp->previous = ptr;
	ptr->next = temp;
	ptr = ptr->next->next;
	ptr->previous = temp;
	
	
	
}
void delete_betw(node * start , int pos)
{
	node * ptr = new node;
	
	ptr = start;
	node * temp = ptr->next;
	int i=0;
	while(i!=pos-1)
	{
		
		ptr = ptr->next;
		temp=temp->next;
		i++;
	}
	
	
	ptr->next = temp->next;
	ptr = ptr->next;
	
	ptr->previous = temp->previous;
	delete temp;
	
	
	
}

main()
{
	node * start = NULL , * ptr , * temp;
	for (int i=0 ; i<5 ; i++)
	{
		ptr = new node;
		cout<<"enter data = ";
		cin>>ptr->data;
		ptr->next = NULL;
		
		if(start == NULL)
		{
			start = ptr;
		}
		else
		{
			temp = start;
			while(temp->next!=NULL)
			{
				temp = temp->next;
			}
			temp->next=ptr;
			ptr->previous = temp;
		}
	}
	

	
//	start = insert_beg(start);
//	insert_betw(start,3);
	delete_betw(start,3);
	temp = start;
	while(temp->next!=NULL)
	{
		cout<<temp->data;
		temp= temp->next;
	}
	cout<<temp->data;
	cout<<"\n From previous  "<<endl;
	while(temp->previous != NULL)
	{
		cout<<temp->data;
		temp = temp->previous;
	}
	cout<<temp->data;
	
}
