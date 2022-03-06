#pragma once

#include "theEverythingHeader.h"
#include "BSTNode.h"

class BST 
{
public:

	BST();
	BST(BSTNode*& copy);
	~BST();

	void insert(Data& newData);

	bool isEmpty();
	void print() const; // some print code borrowed from StackOverflow
	string search(char query);

private:

	BSTNode* mpRoot;

	void destroyBST(BSTNode* pTree);

	void insertHelper(BSTNode* pTree, Data& newData);
	void insertR(Data arr[], int startIndex, int middleIndex, int endIndex);

	string searchHelper(BSTNode* pTree, char query);
	void printHelper(BSTNode* pTree, int indent) const;

};

/**NON MEMBER FUNCTIONS**/
bool compareAscii(Data lhs, Data rhs); // for sorting before inserting
