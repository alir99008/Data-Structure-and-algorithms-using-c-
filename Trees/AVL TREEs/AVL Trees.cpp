#include<iostream>
using namespace std;

struct node
{
	int data;
	node * left;
	node * right;
	int height;
};
node * create_node(int val)
{
	node * ptr = new node;
	ptr->data = val;
	ptr->left = NULL;
	ptr->right = NULL;
	ptr->height = 1;
};

int max(int a , int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int get_height(node * ptr)
{
	if(ptr==NULL)
	{
		return 0;
	}
	return ptr->height;
}
int balance_factor(node * ptr)
{
	if(ptr==NULL)
	{
		return 0;
	}	
	return get_height(ptr->left)-get_height(ptr->right);
}

node * leftRotate(node * root)
{
	node * ptr = root->right;
	node * temp = ptr->left;
	
	ptr->left = root;
	root->right = temp;
	
	ptr->height = max(get_height(ptr->left) , get_height(ptr->right))+1;
	root->height = max(get_height(root->left) , get_height(root->right))+1;
	
	return ptr;
	
}

node * rightRotate(node * root)
{
	node * ptr = root->left;
	node * temp = ptr->right;
	
	ptr->right = root;
	root->left = temp;
	
	ptr->height = max(get_height(ptr->left) , get_height(ptr->right))+1;
	root->height = max(get_height(root->left) , get_height(root->right))+1;
	
	return ptr;
	
}

node * insert(node * root , int val)
{
	if(root==NULL)
	{
		node * ptr = create_node(val);
		return ptr;
	}
	
	if(val > root->data)
	{
		root->right = insert(root->right , val);
	}
	else if(val < root->data)
	{
		root->left = insert(root->left , val);
	}
	
	root->height = max(get_height(root->left) , get_height(root->right))+1;
	int bf = balance_factor(root);
	
	// Left Left Case
        if(bf>1 && val < root->left->data){
        	cout<<"\n\n right rotate is calling......\n\n";
            return rightRotate(root);
        }
    // Right Right Case
        if(bf<-1 && val > root->right->data){
        	cout<<"\n\n left rotate is calling......\n\n ";
            return leftRotate(root);
        }
    // Left Right Case
    if(bf>1 && val > root->left->data){
    		cout<<"\n\n left right rotate is calling......\n\n ";
            root->left = leftRotate(root->left);
            return rightRotate(root);
        }
    // Right Left Case
    if(bf<-1 && val < root->right->data){
    		cout<<"\n\n right left rotate is calling......\n\n ";
            root->right = rightRotate(root->right);
            return leftRotate(root);
        }
    return root;
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
	
	root = insert(root , 1);
	root = insert(root , 2);
	root = insert(root , 5);
	root = insert(root , 3);
	root = insert(root , 4);
//	root = insert(root , 3);
	
	in_order(root);
}






