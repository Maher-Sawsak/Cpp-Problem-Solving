// Delete Record From File.

#include <iostream>
#include<vector>
#include<fstream>
#include<string>

using namespace std;



void LoadDataFromFileToVector(string FileName, vector<string>& vVector) {


	fstream MyFail;

	MyFail.open(FileName, ios::in);//Read Mode

	if (MyFail.is_open()) {

		string Text ;

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

void DeletingRecordFromFile(string FileName, string Record) {

	vector<string> vStrings;

	LoadDataFromFileToVector(FileName, vStrings);

	
	for (string& Line : vStrings) {

		if (Line == Record) {

			Line = "";
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



	cout << "\nAfter deleting " << endl;
	DeletingRecordFromFile("MyFile.txt", "Maher");


	printFileContent("MyFile.txt");



	return 0;
}
