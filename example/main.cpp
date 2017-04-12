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

	cout << "Print the number of nodes: ";
	cin >> temp;
	try
	{
		if(temp < 0) throw 1;
	}
	catch(int test)
	{
		cout << endl << "[-] Exception " << test << ": The number of nodes can't be negative!!!" << endl;
		return 0;
	}
	size = temp;

	node = new unsigned int [size];

	for (unsigned int i = 0; i < size; ++i)
	{
		cout << "Add node " << i+1 << ": ";
		cin >> temp;
		try
		{
			if( temp < 0 ) throw 2;
		}
		catch( int test )
		{
			cout << endl << "[-] Exception " << test << ": The node of tree can't be negative!!!" << endl;
			return 0;
		}
		node[i] = temp;
		cout << endl;
	}


	for (unsigned int i = 0; i < size; ++i)
	{
		ptr->Add(node[i], root);
	}
 
	ptr->print(root);
	ptr->Search(root);
	if( n == 0 ) cout << endl << "[-] The number " << number << " was not found!:(";

	ptr->Deletion(root);
	cout << endl << "The result of deletion: " << endl;
	ptr->print(root);

	ptr->FreeTree(root);
 	delete [] node;
	cout << endl << endl << "Press any button to exit the program " << endl;
	return 0;
}
