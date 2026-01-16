// #27 Problem.

#include <iostream>
#include<cctype>
#include<string>
#include "MaherLib.h"
using namespace std;

char ReadCharacter(string Message) {
	
	 char Temp;
	cout << Message << endl;

	cin >> Temp;
	return Temp;
}


char InvertLetterCase(char Char1) {
return (islower(Char1) ? toupper(Char1) : tolower(Char1));
}



int main()
{
	char a = ReadCharacter("Please Enter A character :");


	cout<< InvertLetterCase(a);
	
	return 0;

}
