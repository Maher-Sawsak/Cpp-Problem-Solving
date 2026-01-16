// Dynamic Arrays New And Delete

//Don't Forget Every new it must have a delete.


#include <iostream>
using namespace std;

int main()
{

	float* ptr;
	int num = 0;

	cout << "please Enter How Many Student : \n";
	cin >> num;


	ptr = new float[num];


	for (int i = 0;i < num;i++) {

		cout << "Student " << i + 1 << " : " << endl;
		cin >> *(ptr + i);
	}


	for (int i = 0; i < num;i++) {


		cout << "Student " << i + 1 << " : " << *(ptr + i) << endl;

	}



	delete[] ptr;//This Sentax For Deleting A (new Array).




	return 0;
}