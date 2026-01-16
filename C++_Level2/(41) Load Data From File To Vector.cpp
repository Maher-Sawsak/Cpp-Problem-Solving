// Load Data From File To Vector

#include <iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;

void StoreFromFileToVector(string FailName, vector<string>& vVector) {

	fstream MyFail;
	MyFail.open(FailName, ios::in);//Read Mode


	if (MyFail.is_open()) {
	
	
	
		string Line = " ";

		while (getline(MyFail, Line)) {
		
			vVector.push_back(Line);
		
		}
	
		MyFail.close();
	
	}


}

void PrintVector(vector<string> vVector) {


	for (string &Counter : vVector) {
	
		cout << Counter << endl;
	
	
	}


}
int main()
{

	vector<string> vVector;


	StoreFromFileToVector("MyFile.txt", vVector);


	PrintVector(vVector);



	return 0;
}