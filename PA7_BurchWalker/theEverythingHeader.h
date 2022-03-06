/*********************************************************************
 * Programmer: Burch Walker
 * Class : CptS 122 section 3
 * Programming Assignment : PA 6
 * Date : Nov 14 2021
 **********************************************************************/

#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ostream;
using std::getline;
using std::sort;

using std::istringstream;
using std::ifstream;

typedef struct data 
{
	string morse;
	char letter;
} Data;
