#include "Lab5-test.hpp"

unsigned int new_data = 10;
void BinarySearchTree::Add(unsigned int new_data, BinarySearchTree *&root)
{
	if (!root)
	{
		root = new BinarySearchTree;
		root->data = new_data;
		root->parent = root;
		root->left;
		root->right;
		return;
	}
	else if (root->data > new_data) Add(new_data, root->left);
	else if (root->data < new_data) Add(new_data, root->right); 
	else return;
}

void BinarySearchTree::print(BinarySearchTree *root)
{
	if (!root) return; 
	
	tabs++; 
	print(root->right);
 
	for (int i = 0; i < tabs; i++) cout << "- "; 
	cout << root->data << endl;

	print(root->left);
 	tabs--;

	return;
}

void BinarySearchTree::FreeTree(BinarySearchTree *&root)
{
	if (root != NULL)
	{
		FreeTree(root->left);
		FreeTree(root->right);
		delete root;
		root = NULL;
	}
	
	return;
}
