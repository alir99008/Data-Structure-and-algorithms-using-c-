#include<iostream>
using namespace std;

struct node
{
	int data;
	node * left;
	node * right;
};
node * create_node(int val)
{
	node * ptr = new node;
	ptr->data = val;
	ptr->left = NULL;
	ptr->right = NULL;
	return ptr;
}
void insert_node(node * root , int val)
{
	node * parent = NULL;
	while(root!=NULL)
	{
		parent = root;
		if(root->data ==val)
		{
			break;
		}
		else if(val<root->data)
		{
			root = root->left;
		}
		else
		{
			root = root->right;
		}
	}
	if(parent->data == val)
	{
		cout<<"sorry cannot insert because this is alreay insert......."<<endl;
	}
	else if(val>parent->data)
	{
		parent->right = create_node(val);
	}
	else
	{
		parent->left = create_node(val);
	}
	
}
int is_binary_tree(node * root)
{
	static node * prev = NULL;
	if(root!=NULL)
	{
		if(!is_binary_tree(root->left))
		{
			return 0;
		}
		if(prev!=NULL && root->data<=prev->data)
		{
			return 0;
		}
		prev = root;
		return is_binary_tree(root->right);
	}
	else
	{
		return 0;
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
	node * n = create_node(7);
	insert_node(n , 3);
	insert_node(n , 9);
	insert_node(n , 1);
	insert_node(n , 4);
	insert_node(n , 8);
	insert_node(n , 10);
	
	in_order(n);
	if(is_binary_tree)
	{
		cout<<"\nTHis is binary tree....."<<endl;
		
	}
	else
	{
		cout<<"\nnot binary tree"<<endl;
	}
	
	
}
