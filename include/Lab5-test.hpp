#include <iostream>
#include <stdlib.h>
using namespace std;
 
int tabs = 0;
int number = 0;
unsigned int k = 0;
unsigned int n = 0;

template <class Type>
class BinarySearchTree
{
	private:
	Type data;
	BinarySearchTree *left; 
	BinarySearchTree *right; 
	BinarySearchTree *parent; 
	
public:
	void Add(Type new_data, BinarySearchTree *&root);
	void Search(BinarySearchTree *root);
	void print(BinarySearchTree *root);
	void Deletion(BinarySearchTree *root);
	BinarySearchTree* findMaxNode(BinarySearchTree *root);
	void removeNode(BinarySearchTree *root, int number, BinarySearchTree *parent);
	void FreeTree(BinarySearchTree *&root);
};
