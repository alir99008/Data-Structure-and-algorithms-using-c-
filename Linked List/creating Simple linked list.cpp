#include<iostream>
using namespace std;
struct node
{
	int data;
	node* next;
	
};
void print(node* ptr)
{
	while(ptr!=NULL)
	{
		
		cout<<ptr->data<<endl;
		ptr = ptr->next ;
	}
}
main()
{
	node* head = NULL;
	node* second = NULL;
	node* third = NULL;
	node* fourth = NULL;
	
	
	head = new node();
	second = new node();
	third = new node();
	fourth = new node();
	
	
	
	head->data = 12;
	head->next = second;
	second->data = 14;
	second->next = third;
	third->data = 16;
	third->next = fourth;
	fourth->data = 18;
	fourth->next = NULL;
	print(head);
}
