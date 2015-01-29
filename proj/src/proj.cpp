//============================================================================
// Name        : proj.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;

int main() {
	cout << "!!Hello World!!!" << endl; // prints !!!Hello World!
	 string s;
	 getline(cin,s);

	    istringstream iss(s);

	    do
	    {
	        string sub;
	        iss >> sub;
	        cout << "Substring: " << sub << endl;
	    } while (iss);

	return 0;
}
