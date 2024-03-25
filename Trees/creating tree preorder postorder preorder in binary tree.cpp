#include<iostream>
using namespace std;
struct node
{
	int data;
	node * left;
	node * right;
};
node * creat_node(int val)
{
	node * ptr = new node;
	ptr->data = val;
	ptr->left = NULL;
	ptr->right=NULL;
	
	return ptr;
}
void pre_order(node * root)
{
	if(root!=NULL)
	{
		cout<<root->data;
		pre_order(root->left);
		pre_order(root->right);
		
	}
}
void post_order(node * root)
{
	if(root!=NULL)
	{
		
		post_order(root->left);
		post_order(root->right);
		cout<<root->data;
		
	}
}
void in_order(node * root)
{
	if(root!=NULL)
	{
		
		in_order(root->left);
		cout<<root->data;
		in_order(root->right);
		
		
	}
}
main()
{
	node *n1 = creat_node(5);
	node *n2 = creat_node(2);
	node *n3 = creat_node(6);
	node *n4 = creat_node(1);
	node *n5 = creat_node(3);
	node *n6 = creat_node(6);
	node *n7 = creat_node(7);
	
	n1->left = n2;
	n1->right = n3;
	n2->left = n4;
	n2->right = n5;
	n3->left = n6;
	n3->right = n7;
	
	pre_order(n1);
	cout<<endl;
	post_order(n1);
	cout<<endl;
	in_order(n1);
	
	
}
