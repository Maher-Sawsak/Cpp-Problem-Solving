// Vectors Change Elements.
//There is Multiple Way to change the values for vectors elements .

#include <iostream>
#include<vector>

using namespace std;

int main()
{
	vector <int>vNumbers = { 1,2,3,4,5 };

	//Printing all elements.
	for (const int& i : vNumbers) {

		cout << i << " ";
	}

	cout << endl << endl;
	//changing all element's value of vector.

	for (int& i : vNumbers) {

		i = 20;

	}


	cout << "After Editing all value of whole elements in vector : \n";
	for (const int& i : vNumbers) {

		cout << i << " ";
	}

	cout << endl << endl;


	vNumbers.at(0) = 10;
	vNumbers[1] = 20;
	vNumbers[2] = 30;
	vNumbers[3] = 40;
	vNumbers.at(4) = 50;




	cout << "After Edit it 1 BY 1 : \n";
	for (const int& i : vNumbers) {

		cout << i << " ";
	}

	cout << endl << endl;

	return 0;
}
