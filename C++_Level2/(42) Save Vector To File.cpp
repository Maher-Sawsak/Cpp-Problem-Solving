// Save Vector To File

#include <iostream>
#include<vector>
#include<fstream>
#include "SaveVectorToFile.h"

using namespace std;

void SaveVectorToFile(string FileName , vector<string> vVector) {

	fstream MyFail;

	MyFail.open(FileName, ios::out);//write Mode.

	if (MyFail.is_open()) {
	
	
	
		for (string& Line : vVector) {
		
		
			if (Line != "") 
				MyFail << Line << endl;
			
		

		}

		MyFail.close();

	
	}


}

int main()
{
	vector<string> vNames{ "Ali" , "Maher" , "Habib" , "Noor" , "Nidal" , "Hasan" , "Husain" , "Fatima" };


	SaveVectorToFile("MyFile.txt", vNames);


	return 0;
}