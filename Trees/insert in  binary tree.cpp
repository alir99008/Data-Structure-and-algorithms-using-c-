#include<iostream>
using namespace std;

struct node
{
	int data;
	node * left;
	node * right;
};
node * creat_node(int data)
{
	node * ptr = new node;
	ptr->data = data;
	ptr->left = NULL;
	ptr->right  = NULL;
}
void insert_node(node * root , int val)
{
	node * parent = NULL;
	while(root!=NULL)
	{
		parent = root;
		if(root->data==val)
		{
			cout<<"you cannot insert this value in tree because this is already there......."<<endl;
			break;
		}
		else if(val > root->data)
		{
			root = root->right;
		}
		else
		{
			root = root->left;
		}
	}
	node * new_node = creat_node(val);
	if(val > parent->data)
	{
		parent->right = new_node;
	}
	else if(val == parent->data)
	{
		cout<<"you cannot insert this value in tree because this is already there......."<<endl;	
	}
	else
	{
		parent->left = new_node;
	}
	
}
void in_order(node * root)
{
	if(root!=NULL)
	{
		in_order(root->left);
		cout<<root->data<<" ";
		in_order(root->right);
	}
}
main()
{
	node * n = creat_node(7);
	node * n1 = creat_node(3);
	node * n2 = creat_node(9);
	node * n3 = creat_node(1);
	node * n4 = creat_node(4);
	node * n5 = creat_node(8);
	node * n6 = creat_node(10);
	
	n->left = n1;
	n->right = n2;
	
	n1->left = n3;
	n1->right = n4;
	
	n2->left = n5;
	n2->right = n6;
	
	insert_node(n , 5);
	in_order(n);
	cout<<endl;
	insert_node(n , 2);
	in_order(n);
	cout<<endl;
	insert_node(n , 3);
	in_order(n);
	
	
}

