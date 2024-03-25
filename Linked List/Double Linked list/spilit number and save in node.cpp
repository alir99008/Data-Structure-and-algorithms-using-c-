#include<iostream>
using namespace std;

struct node
{
	int data;
	node * next;
	node * previous;
};

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
	cout<<"Enter your number = ";
	int num;
	cin>>num;
	while(num>0)
	{
		int r = num%10;
		num = num/10;
		ptr = new node;
		
		ptr->data=r;
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
			ptr->previous = temp;
			
		}
	}
	display(start);
}
