//You must include the <fstream> Library.

/*
The functio.open(FileName, ios::out);

ios::out means you want to write in the file not to read from it.


*/

#include<iostream>
#include<fstream>

using namespace std;

int main() 
{


	fstream MyFile;

	MyFile.open("MyFile.txt", ios::out);//Write Mode


	if (MyFile.is_open()) {
	
		MyFile << "This is your first line in the file :\n";
		
		MyFile << "Congratulations , You did the first line in the file \n";

		MyFile << "Now lets go to the next step\n";
	
		MyFile.close();
	
	}


	return 0;
}