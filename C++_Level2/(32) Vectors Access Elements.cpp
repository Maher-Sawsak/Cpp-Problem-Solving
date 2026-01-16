// Vectors Access Elements

//To Access the element in vector you have two way the better one is to use VectorName.at(iNDEX).
//The Second Way like array VectorName[INDEX].


#include <iostream>
#include<vector>

using namespace std;

int main()
{


	vector<int>vNumbers{ 1, 2, 3 ,4 ,5,6 };


	cout << "using .at()\n";

	cout << vNumbers[0] << endl;
	cout << vNumbers[1] << endl;
	cout << vNumbers.at(2) << endl;
	cout << vNumbers.at(3) << endl;
	cout << vNumbers.at(4) << endl;
	cout << vNumbers.at(5) << endl;





	return 0;
}