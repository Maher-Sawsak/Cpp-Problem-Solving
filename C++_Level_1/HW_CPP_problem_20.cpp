//this solution for problem 20 in algorithms course

#include <iostream>

int main()
{
	using namespace std;
	
	const float Pi = 3.14;
	int A ;
	float Area;
	cout << "Please Enter The Value For A :";
	cin >> A;


	Area = (Pi * A * A) / 4;
	
	cout << Area <<endl;

	return 0;
}
