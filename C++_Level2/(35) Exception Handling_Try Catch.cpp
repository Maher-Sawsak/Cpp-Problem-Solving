// Exception Handling _ Try Catch

/*

Exceptions help prevent crashes when something goes wrong (like accessing out-of-range elements).

Very important Note:
But they should be used only when necessary, because they can slow down the program.

try = risky code That you think will be.
 catch = what to do if it fails.
*/

#include <iostream>
#include<vector>

using namespace std;

int main()
{

	vector<int> vNumbers{ 2,4,6,8,10 };


	//try will contain the risky code like this.
	try {
	
		vNumbers.at(5);
	
	}
	//if try happens do the catch.
	catch (...) {
	
	
		cout << "out of bounds\n";
	
	
	}

	return 0;
}
