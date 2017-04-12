#include <iostream>
#include <stdlib.h>
using namespace std;
 
int tabs = 0;
int number;
unsigned int k = 0;
unsigned int n = 0;

class BinarySearchTree
{

public:
	BinarySearchTree *left; 
	BinarySearchTree *right; 
	BinarySearchTree *parent; 
	unsigned int data;
	BinarySearchTree *r;
	void Add(unsigned int new_data, BinarySearchTree *&root);
	void Search(BinarySearchTree *root);
	void print(BinarySearchTree *root);
	//void Deletion(BinarySearchTree *root);
	//BinarySearchTree* findMaxNode(BinarySearchTree *root);
	//void removeNode(BinarySearchTree *root, int number, BinarySearchTree *parent);
	//void FreeTree(BinarySearchTree *&root);
};
