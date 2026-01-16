// Vectors Remove Elements
/*

if u want to delete an element for the vector you should use ----- pop_back() ------

if u want to delete al the element in the stack of vector u can do it by property its --- clear() ----.

if u want to check the size of the vector u can check by property --- size() ---- it will return the size of it.

if u want to check if its empty or not you can use ---- empty() ----- property it will return true or false as answer.

*/

#include <iostream>
#include<vector>

using namespace std;
int main()
{

	vector<int> vNumber;

	vNumber.push_back(5);
	vNumber.push_back(10);
	vNumber.push_back(15);
	vNumber.push_back(20);
	vNumber.push_back(25);

	cout << "\nThe size at First :";
	cout<<vNumber.size();



vNumber.pop_back();
cout << "\n\nAfter Popping one element : ";
cout << "\nThe size after popping One elements : ";
cout << vNumber.size();

cout << "\nThe result for empty() Function after popping One elements : ";
cout << vNumber.empty();


cout << "\n\n\nAfter popping all elements :";
vNumber.pop_back();
vNumber.pop_back();
vNumber.pop_back();
vNumber.pop_back();
cout << "\nThe size after popping all elements : ";
cout << vNumber.size() << endl;

cout << "The result for empty() function after popping all elements : ";
cout << vNumber.empty() << endl;



}
