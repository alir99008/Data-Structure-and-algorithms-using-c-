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

node * delete_end(node * start)
{
	node * ptr = start;
	node * temp = ptr->next;
	
	while(temp->next!=NULL)
	{
		ptr=ptr->next;
		temp = temp->next;
	}
	ptr->next = NULL;
	delete temp;
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
//	start = delete_beg(start);
	delete_end(start);
	display(start);
}
