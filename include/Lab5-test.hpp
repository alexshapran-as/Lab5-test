#include <iostream>
#include <stdlib.h>
using namespace std;
 
//int tabs = 0;
//int number;
//unsigned int k = 0;
//unsigned int n = 0;

class BinarySearchTree
{

public:
	BinarySearchTree *left; 
	BinarySearchTree *right; 
	BinarySearchTree *parent; 
	unsigned int data;
	int Add(unsigned int new_data, BinarySearchTree *&root);
	int print(int check1, BinarySearchTree *root);
	int Search(int check2, BinarySearchTree *root);
	//void Deletion(BinarySearchTree *root);
	//BinarySearchTree* findMaxNode(BinarySearchTree *root);
	//void removeNode(BinarySearchTree *root, int number, BinarySearchTree *parent);
	//void FreeTree(BinarySearchTree *&root);
};
