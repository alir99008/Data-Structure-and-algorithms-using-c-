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
void insert(node * root , int val)
{
	if(root==NULL)
	{
		node * ptr = create_node(val);
		return ptr;
	}
	if(val < root->data)
		root->left = insert(root->left , val);
	}
	else
	{
		root->right = insert(root->right , val);
	}
	return root;
	
	
}
node * inorderprecessor(node * root)
{
	root = root->left;
	while(root->right != NULL)
	{
		root = root->right;
	}
	return root;
}
node * delete_node(node * root , int val)
{
	node * ipre;
	if (root==NULL)
	{
		return 0;
	}
	if(root->left==NULL && root->right==NULL)
	{
		
		delete root;
		return NULL;
		
	}
	
	if(val < root->data)
	{
		root->left = delete_node(root->left , val);
	}
	else if(val > root->data)
	{
		root->right = delete_node(root->right , val);
	}
	else
	{
		ipre = inorderprecessor(root);
		root->data = ipre->data;
		root->left=delete_node(root->left , ipre->data);	
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
	node * root = NULL;
	root = insert(root , 6);
	insert(root , 5);
	insert(root , 9);
//	insert(root , 3);
//	insert(root , 1);
//	insert(root , 4);
//	insert(root , 7);
//	insert(root , 10);

	
	
	in_order(root);
	cout<<endl;
	delete_node(root,5);
	in_order(root);
	
}
