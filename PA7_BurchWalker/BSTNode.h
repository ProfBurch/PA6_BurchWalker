 /**IMPORTS**/
#include "theEverythingHeader.h"


class BSTNode 
{
public:

	BSTNode();
	BSTNode(Data& newData);

	const Data getData();
	BSTNode* getLeft();
	BSTNode* getRight();

private:

	Data data;
	BSTNode* mpLeft;
	BSTNode* mpRight;

};

ostream& operator<<(ostream& out, BSTNode& node);