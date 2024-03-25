#include<iostream>
using namespace std;

struct node
{
	int data;
	node * next;
};
node * insert_beg(node * start)
{
	node * ptr = new node;
	node * temp = new node;
	
	ptr = start;
	while(ptr->next != start)
	{
		ptr = ptr->next;
	}
	
	temp->data = 6;
	temp->next = start;
	ptr->next = temp;
	start = temp;
	
	return start;
	
	
	
}
int main()
{
	node * start = NULL , *ptr , *temp;
	
	for(int i =0 ; i<5 ; i++)
	{
		ptr = new node;
		
		cout<<"Please enter the number = ";
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
	temp = start;
	while(temp->next!= NULL)
	{
		temp = temp->next;
	}
	temp->next = start;
	
	
	start  = insert_beg(start);
	cout<<"Your entered linked list is "<<endl;
	temp = start;
	while(temp->next != start)
	{
		cout<<temp->data;
		temp = temp->next;
	}
	cout<<temp->data;
	
	
}
