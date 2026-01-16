// Creating Reference

#include <iostream>

using namespace std;

int main()
{

	int a = 20;
	int& x = a;

	cout << x << endl;
	cout << a << endl;



	int& g = x;

	cout << g << endl;



	cout << "Adress" << endl;

	cout << &a << endl;
	cout << &x << endl;
	cout << &g << endl;





}