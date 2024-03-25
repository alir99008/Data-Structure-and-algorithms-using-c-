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
node * search(node * root , int val)
{
	if (root == NULL)
	{
		return 0;
	}
	if(root->data==val)
	{
		return root;
	}
	else if(val > root->data)
	{
		root = root->right;
		search(root,val);
	}
	else
	{
		root = root->left;
		search(root,val);
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
	
	node * search1 = search(n,4);
	cout<<"search = "<<search1<<endl;
	cout<<"search = "<<search1->data<<endl;
	
	node * search2 = search(n,10);
	cout<<"search = "<<search2<<endl;
	cout<<"search = "<<search2->data<<endl;
	
}

