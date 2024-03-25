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
void insert_end(node * start , int val)
{
	node * ptr = start;
	while(ptr->next!=NULL)
	{
		ptr = ptr->next;
	}
	node * temp = new node;
	temp->data = val;
	temp->next = NULL;
	temp->previous = ptr;
	ptr->next = temp;
	
}
void display(node * start)
{
	node*ptr = start;
	while(ptr->next!=NULL)
	{
		cout<<ptr->data;
		ptr = ptr->next;
	}
	cout<<ptr->data;
	cout<<"\n From previous  "<<endl;
	while(ptr->previous != NULL)
	{
		cout<<ptr->data;
		ptr = ptr->previous;
	}
	cout<<ptr->data;
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
	insert_end(start , 6);
	display(start);
}
