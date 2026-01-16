// Update Record In File
#include <iostream>
#include<vector>
#include<fstream>
#include<string>

using namespace std;



void LoadDataFromFileToVector(string FileName, vector<string>& vVector) {


	fstream MyFail;

	MyFail.open(FileName, ios::in);//Read Mode

	if (MyFail.is_open()) {

		string Text;

		while (getline(MyFail, Text)) {

			vVector.push_back(Text);

		}


		MyFail.close();

	}
}

void LoadDataFromVectorToFile(string FileName, vector<string> vVector) {

	fstream MyFile;

	MyFile.open(FileName, ios::out);

	if (MyFile.is_open()) {


		for (string Line : vVector) {

			if (Line != "")
				MyFile << Line << endl;


		}


		MyFile.close();



	}


}

void UpdateRecord(string FileName, string ToRemove , string ToUpdate) {

	vector<string> vStrings;

	LoadDataFromFileToVector(FileName, vStrings);


	for (string& Line : vStrings) {

		if (Line == ToRemove) {

			Line = ToUpdate;
		}

	}


	LoadDataFromVectorToFile(FileName, vStrings);


}


void printFileContent(string FileName) {

	vector<string>vStrings;
	fstream MyFile;
	MyFile.open(FileName, ios::in);



	if (MyFile.is_open()) {
		LoadDataFromFileToVector(FileName, vStrings);


		for (string& Line : vStrings) {

			cout << Line << endl;

		}

		MyFile.close();
	}
}




int main()
{


	printFileContent("MyFile.txt");



	cout << "\nAfter Updating " << endl;
	UpdateRecord("MyFile.txt", "Maher" , "Soltan");


	printFileContent("MyFile.txt");



	return 0;
}


// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
