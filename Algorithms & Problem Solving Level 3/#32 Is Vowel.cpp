// #32 Problem.

//IS Vowel Letter ?

#include <iostream>
#include "MaherLib.h"
#include<cctype>
#include<string>

using namespace std;

char ReadChar() {
	
	char Temp;
	cout << "Please Enter A character :\n";
	cin >> Temp;

	return Temp;
}


bool IsVowelLetter(char Letter) {


	Letter = tolower(Letter);


	return ((Letter == 'a')|| (Letter == 'e')|| (Letter == 'o')|| (Letter == 'i')||(Letter == 'u'));

}


int main()
{
	char Letter = ReadChar();

	if (IsVowelLetter(Letter)) {
	
		cout << "Yes ,"<<Letter << " its a Vowel Letter.\n";

	}
	else {
	
		cout << "No ," << Letter << " is Not a Vowel Letter.\n";
	}

	return 0;
}
