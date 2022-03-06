/*********************************************************************
 * Programmer: Burch Walker
 * Class : CptS 122 section 3
 * Programming Assignment : PA 6
 * Date : Nov 14 2021
 **********************************************************************/

#include "BST.h"
#include "BSTNode.h"

int main(void) 
{

	BST* pTree = new BST(); 

	string toConvert; // Input
	ifstream infile("Convert.txt"); // Plaintext

	// Convert, line by line, the plaintext file
	while (getline(infile, toConvert, '\n'))
	{

		for (int i = 0; i < toConvert.length(); i++) 
		{

			if (toConvert[i] == *" ")
			{
				cout << " ";
			}

			else
			{
				cout << pTree->search(toConvert[i]) << " ";
			}

		}

		cout << endl;

	}

	return 0;
}