// #44 Problem.
//Remove Punctuations From String.

#include <iostream>
#include<string>
#include<cctype>
#include "MaherLib.h"
using namespace std;


string RemovePunctFromString(string S1) {

	string S2 = "";
	for (int i = 0;i < S1.length();i++) {
	
		if (!ispunct(S1[i])) {
		
			S2 += S1[i];
		
		}

	
	
	}

	return S2;
}

//another function for removing punct on another way and logic.
string sRemovePunctFromString(string S1) {


	for (int i = 0;i < S1.length();i++) {

		if (ispunct(S1[i])) {

			S1.erase(i, 1);

		}



	}

	return S1;
}




int main()
{
	string TempString = "Welcome To Syria, it's a Pretty Country ;Visit it please.";



	cout << RemovePunctFromString(TempString);


}