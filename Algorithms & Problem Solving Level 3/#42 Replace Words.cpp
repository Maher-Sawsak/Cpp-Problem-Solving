// #42 Problem.
//My Solution By Using Iterator Here.
//The program aims to replace a specific word within a string with another word using the Split/Join technique.

#include <iostream>
#include<cctype>
#include"MaherLib.h"
using namespace std;



string ReplaceWordInStringUsingBuiltInFunction(string S1, string ToReplace, string NewOne) {


	short pos = S1.find(ToReplace);

	while (pos  != string::npos) {
	
	
		S1 = S1.replace(pos, ToReplace.length(), NewOne);
	
		pos = S1.find(ToReplace);
	}

	return S1;


}


int main()
{
	string S1 = "Welcome To Syria , Syria is a Nice Country\n";
	
	string ToReplace = "Syria";
	string NewOne = "USA";

	cout<<ReplaceWordInStringUsingBuiltInFunction(S1, ToReplace, NewOne);

	return 0;
}