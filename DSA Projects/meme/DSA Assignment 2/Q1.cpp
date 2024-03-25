#include<iostream>
using namespace std;
struct node
{
	int data;
	node * next;
	node * previous;
};
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
}
