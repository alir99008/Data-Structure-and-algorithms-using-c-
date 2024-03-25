
#include<iostream>
using namespace std;
struct node
{
	int data;
	node * next;
	node * previous;
};

node * delete_beg(node * start)
{
	node * ptr = start;
	int val = ptr->data;
	start = start->next;
	start->previous = NULL;
	delete ptr;
	return start;
}

node * delete_from_data(node * start , int val)
{
	node * ptr = start;
	node* temp = ptr->next;
	if(ptr->data==val)
	{
		start = delete_beg(start);
		return start;
		
	}
	while(temp->data!=val)
	{
		temp = temp->next;
		ptr = ptr->next;
	}
	if(temp->data == val)
	{
		
		ptr->next = temp->next;
		ptr = ptr->next;
		ptr->previous = temp->previous;
		cout<<"delete data = "<<temp->data<<endl;
		delete temp;
//		return 1;
	}
	else
	{
		return 0;
	}
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
	if(delete_from_data(start , 3))
	{
		cout<<"successfully delete..."<<endl;
		display(start);
	}
	else
	{
		cout<<"no such data in the link list..."<<endl;
		display(start);
	}
}
