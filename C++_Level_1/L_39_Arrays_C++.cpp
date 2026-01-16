//this for array in lesson 39 c++

#include <iostream>
using namespace std;
int main()
{
	float Grades [3];

	cout << "Please enter the Grade1 ?\n";
	cin >> Grades[0];

	cout << "Please enter the Grade2 ?\n";
	cin >> Grades[1];

	cout << "Please enter The Grade3 ?\n";
	cin >> Grades[2];

	cout << "******************************\n";

	float Average = (Grades[0] + Grades[1] + Grades[2]) / 3;

	cout << "The average of grades is " << Average << endl;

	return 0;
}

