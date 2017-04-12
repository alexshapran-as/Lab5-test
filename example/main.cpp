#include <iostream>
#include <stdlib.h>

#include "Lab5-test.hpp"
using namespace std;

int main()
{
	BinarySearchTree *root = 0;
	BinarySearchTree *ptr;

	unsigned int* node;
	unsigned int size = 0;
	auto temp = 0;

	cin >> temp;
	size = temp;

	node = new unsigned int [size];

	for (unsigned int i = 0; i < size; ++i)
	{
		cout << "Add node " << i+1 << ": ";
		cin >> temp;
		node[i] = temp;
	}
	for (unsigned int i = 0; i < size; ++i)
	{
		ptr->Add(node[i], root);
	}
 
	ptr->print(root);
	ptr->Search(root);

	ptr->Deletion(root);
	ptr->print(root);

	ptr->FreeTree(root);
 	delete [] node;
	return 0;
}
