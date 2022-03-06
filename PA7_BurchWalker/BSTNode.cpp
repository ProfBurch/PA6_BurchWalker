 /**IMPORTS**/
#include "BSTNode.h"

/**CONSTRUCTORS**/
BSTNode::BSTNode() 
{ 
	this->mpLeft = this->mpRight = nullptr;
}

BSTNode::BSTNode(Data& newData) 
{
	this->mpLeft = nullptr;
	this->mpRight = nullptr;
	data = newData;
}

/**GETTERS**/
const Data BSTNode::getData() 
{ 
	return this->data; 
}

BSTNode* BSTNode::getLeft() 
{ 
	return this->mpLeft; 
}

BSTNode* BSTNode::getRight() 
{ 
	return this->mpRight; 
}

/**NON MEMBER FUNCTIONS**/
ostream& operator<<(ostream& out, BSTNode& node) 
{
	node.getData().morse;
	return out;
}