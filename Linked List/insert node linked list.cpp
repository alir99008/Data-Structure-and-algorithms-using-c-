#include<iostream>
using namespace std;
struct node
{
	int data;
	node * next;
	
};
node* insert_begining(node * head , int data)
{
	node *Ptr = new node;
	Ptr->data = data;
	Ptr->next = head;
//	head = Ptr;
	return Ptr;
	
	
}
void insert_middle(node * ptr)
{
	
	int i=0;
	while(ptr->next!=NULL)
	{
		if (i==1)
		{
			node *temp =new node;
			temp->data = 3;
			
			temp->next = ptr->next;
			ptr->next = temp;
			
			
			
		}
		i++;
		ptr = ptr->next;
		
	}
}

void insert_end(node *ptr)
{
	while(ptr->next!=NULL)
	{
		ptr = ptr->next;
	}
	node *temp = new node;
	temp->data = 7;
	ptr->next =  temp;
	temp->next = NULL;
}


void display(node *ptr)
{
	while(ptr->next != NULL)
	{
		cout<<ptr->data;
		ptr = ptr->next;
		
	}
	cout<<ptr->data;
}
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
//	node *start1 = insert_begining(start , 1);
//	insert_middle(start);
	insert_end(start);
	display(start);
	
}
