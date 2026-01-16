


//The solution for probleam 14 in algorithms course 

#include <iostream>

int main()
{

	using namespace std;
	int Number1, Number2 , Temporary_varible;
	
	cout <<"Please Enter The First Number :\n";
	cin >> Number1;

	cout << "Please Enter The Second Number :\n";
	cin >> Number2;

	cout << Number1 << "\n" << Number2 << endl <<endl;

	Temporary_varible = Number1;
	Number1 = Number2;
	Number2 = Temporary_varible;
	cout << Number1 << "\n" << Number2 << endl;

	return 0;

}

