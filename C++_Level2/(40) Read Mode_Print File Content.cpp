// Read Mode: Print File Content.

#include <iostream>
#include<fstream>
#include<string>
using namespace std;


void PrintFileContent(string FileName) {


	fstream MyFile;

	MyFile.open(FileName, ios::in);

	if (MyFile.is_open()) {
	
	
		string Line;

		while (getline(MyFile, Line)) {
		
		
		
			cout << Line << endl;
		}

		MyFile.close();
	}


}


int main()
{

	PrintFileContent("MyFile.txt");

	return 0;
}
