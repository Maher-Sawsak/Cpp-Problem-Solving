// Vectors Add Elements

#include <iostream>
#include<vector>

using namespace std;

void ReadNumber(vector <int> &vNumbers) {

	int Number = 0;

	char Cond;
	do {
		cout << "What is your Number You Want To add ? : \n";
		cin >> Number;

		vNumbers.push_back(Number);

		cout << "Do You Want To Add More ?\n";
		cin >> Cond;
	
	} while (Cond == 'Y' || Cond == 'y');


}


void PrintVector(vector <int> vNumbers) {


	for (int& Number : vNumbers) {


		cout << Number << endl;
	}




}

int main()
{

	vector <int> vNumbers;

	ReadNumber(vNumbers);
	PrintVector(vNumbers);
	

	return 0;
}
