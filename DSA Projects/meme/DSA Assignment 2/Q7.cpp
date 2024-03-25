#include<iostream>
using namespace std;

struct node
{
	int data;
	node * next;
	
};
void delet_duplicate(node * start)
{
	node * ptr = new node;
	ptr = start;
	while(ptr->next!=NULL)
	{
		node * temp = ptr->next;
		int i=1;
		while(temp->next != NULL)
		{
			if(ptr->data == temp->data)
			{
				int j=0;
				node *q = ptr;
				while(q->next!=NULL)
				{
					if(j==i-1)
					{
						q->next = temp->next;
					}
					q = q->next;
					j++;
				}
				
			}
			temp = temp->next;
		
			cout<<ptr->data<<endl;
			i++;
			
		}
		
		ptr = ptr->next;
	}
}
main()
{
	node * start = NULL , * ptr , * temp;
	for(int i=0 ; i<10 ; i++)
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
	delet_duplicate(start);
	temp = start;
	while(temp->next!=NULL)
	{
		cout<<temp->data;
		temp = temp->next;
	}
	cout<<temp->data;
	
}
