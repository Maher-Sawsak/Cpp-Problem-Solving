// Validate_Number_Only

#include <iostream>
using namespace std;

int ReadNumberOnly() {

	int Number = 0;
	cout << "Please Enter A Number :\n";
	cin >> Number;

	while (cin.fail()) {
	
	
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "You Entered an Invalid Number : \n";

			cin >> Number;
	
	
	}


	return Number;

}




int main()
{


	cout << "Your Number Is :" << ReadNumberOnly();


}
