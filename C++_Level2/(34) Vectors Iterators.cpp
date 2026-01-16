// Vectors Iterators

/* 

How to initialize a iterator by this syntax :

vector<dataType>::iterator IteratorName;

The Data type must be equivalent to the vector's data type.

VectorName.end() ----- here .end() does not point to the last element (number 10)! Instead,
it points to the 'empty' spot immediately after the last element.

*/
#include <iostream>
#include<vector>

using namespace std;

int main()
{
	
	vector <int> vNumbers = { 1,2,3,4,5,6,7,8,9,10 };

	vector<int>::iterator num;


	for (num = vNumbers.begin(); num != vNumbers.end();num++) {
	
	
		cout << *num << endl;
	
	}



	return 0;
}
