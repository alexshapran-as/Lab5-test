#include "Lab5-test.hpp"

int BinarySearchTree::Add(unsigned int new_data, BinarySearchTree *&root)
{
	if (!root)
	{
		root = new BinarySearchTree;
		root->data = new_data;
		root->parent = root;
		root->left;
		root->right;
		return root->data;
	}
	else if (root->data > new_data) Add(new_data, root->left);
	else if (root->data < new_data) Add(new_data, root->right); 
	else return root->data;
}

int BinarySearchTree::print(int check1, BinarySearchTree *root)
{
	if (!root) return check1; 
	if (root->data = 10 ) check1 = 12;
	
	return check1;
}
int BinarySearchTree::Search(int check2, BinarySearchTree *root)
{
	if (!root) return check2;
	
	if (k == 0) 
	{ 
		root->data = 1;
	}
	k++; 

	if(root->data == number) 
		{ 
			root->data = 1;
			n++;
		}
	
	return root->data;

}
/*void BinarySearchTree::FreeTree(BinarySearchTree *&root)
{
	if (root != NULL)
	{
		FreeTree(root->left);
		FreeTree(root->right);
		delete root;
		root = NULL;
	}
	
	return;
}*/
