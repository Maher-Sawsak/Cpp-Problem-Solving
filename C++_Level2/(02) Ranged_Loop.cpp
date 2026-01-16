
#include <iostream>
using namespace std;



int main()
{



	
	for (int n : { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }) {
	
		cout << n << endl;
}

	cout<< endl << endl;
	int numbers[] = { 1, 2, 3 };

	for (int& n : numbers) {
		//you should use & sign if you want to modifay the element during the iteration.
		cout << (n *= 2) << endl;
	}

}
