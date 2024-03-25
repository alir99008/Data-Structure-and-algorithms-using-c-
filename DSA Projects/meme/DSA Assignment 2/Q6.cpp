#include<iostream>
using namespace std;

struct node
{
	int data;
	node * next;
	node * previous;
};

int pelidrome_check(node * start)
{
	node*ptr = start;
	node*temp = start;
	
	int i=0;
	int j=0;
	
	while(temp->next!=NULL)
	{
		temp=temp->next;
		j++;
	}
	j++;
	
	while(i<=j)
	{
		if(temp->data == ptr->data)
		{
			ptr = ptr->next;
			temp = temp->previous;
			i++;
			j--;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

main()
{
	node * start = NULL , * ptr , * temp;
	for (int i=0 ; i<6 ; i++)
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
	if(pelidrome_check(start))
	{
		cout<<"this is pelidrome number......"<<endl;
	}
	else
	{
		cout<<"this is not pelidrome number......"<<endl;
	}
	
//	display(start);
}
