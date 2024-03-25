#include<iostream>
using namespace std;
struct node
{
	int data;
	int preority;
	node * next;
	
	
};
node * create_node(int val , int pre)
{
	node* ptr = new node;
	ptr->data = val;
	ptr->preority = pre;
	ptr->next = NULL;
	return ptr;	
}

node * check_preority(node * start , int val , int pre)
{
	node * ptr = start;
	if(ptr->preority< pre)
	{
		node * temp = create_node(val , pre);
		temp->next = ptr;
		start = temp;
		return start;
	}
	else
	{
		node * p = ptr->next;
		while(p->preority> pre)
		{
			
			ptr = ptr->next;
			p = p->next;
			
		}
		node * temp = create_node(val , pre);
		temp->next =p;
		ptr->next= temp;
		return start;	
	}
	
	
}
void display(node * start)
{
	node * ptr = start;
	while(ptr->next!=NULL)
	{
		cout<<ptr->data;
		ptr = ptr->next;
	}
	cout<<ptr->data;
}
main()
{
	node * start = NULL;
	node * ptr = new node;
	ptr->data = 1;
	ptr->preority = 1;
	ptr->next = NULL;
	start = ptr;
	
	
	start = check_preority(start,2,5);
	display(start);
	cout<<endl;
	start = check_preority(start,0,3);
	display(start);
	
	cout<<endl;
	start = check_preority(start,3,2);
	display(start);
	
}
