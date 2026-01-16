// #28 Problem.

#include <iostream>
#include<cctype>
#include<string>
#include "MaherLib.h"



string ReadString(string Message) {

	string S1 = " ";
	cout << Message << endl;
	getline (cin , S1);

	return S1;
}
string InvertAllStringLettersCase(string S1) {

	for (int i = 0;i < S1.length(); i++) {
	
		S1[i] = MyInputLib::InvertLetterCase(S1[i]);
	
	}
	return S1;

}


int main()
{
	string Temp;

	Temp = ReadString("Please Enter The Sentence :\n");
Temp =  InvertAllStringLettersCase(Temp);

cout << "\nString after Inverting All Letters Case:\n";
cout << endl << Temp << endl;
	return 0;
}