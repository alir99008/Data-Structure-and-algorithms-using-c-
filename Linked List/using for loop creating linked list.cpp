#include<iostream>
using namespace std;

struct node
{
	int data;
	node * next;
};

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
	
	cout<<"Your entered linked list is "<<endl;
	temp = start;
	while(temp->next != NULL)
	{
		cout<<temp->data;
		temp = temp->next;
	}
	cout<<temp->data;
	
	
}
