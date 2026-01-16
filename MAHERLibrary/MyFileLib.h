#pragma once

#include <iostream>
#include<vector>
#include<fstream>
#include<string>

using namespace std;
namespace MyFileLib {




	void File_LoadDataFromFileToVector(string FileName, vector<string>& vVector) {


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

	void File_LoadDataFromVectorToFile(string FileName, vector<string> vVector) {

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

	void File_DeletingRecordFromFile(string FileName, string Record) {

		vector<string> vStrings;

		File_LoadDataFromFileToVector(FileName, vStrings);


		for (string& Line : vStrings) {

			if (Line == Record) {

				Line = "";
			}

		}


		File_LoadDataFromVectorToFile(FileName, vStrings);


	}

	void File_PrintFileContent(string FileName) {

		vector<string>vStrings;
		fstream MyFile;
		MyFile.open(FileName, ios::in);



		if (MyFile.is_open()) {
			File_LoadDataFromFileToVector(FileName, vStrings);


			for (string& Line : vStrings) {

				cout << Line << endl;

			}

			MyFile.close();
		}
	}

	void File_UpdateRecord(string FileName, string ToRemove, string ToUpdate) {

		vector<string> vStrings;

		File_LoadDataFromFileToVector(FileName, vStrings);


		for (string& Line : vStrings) {

			if (Line == ToRemove) {

				Line = ToUpdate;
			}

		}


		File_LoadDataFromVectorToFile(FileName, vStrings);


	}

}