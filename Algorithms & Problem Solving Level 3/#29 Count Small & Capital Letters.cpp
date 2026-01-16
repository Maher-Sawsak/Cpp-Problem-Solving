// #29 Problem.

//Write a prgrammto count the capital letter and small letter in the string and the length for it.

#include <iostream>
#include<string>
#include<cctype>
#include"MaherLib.h"

using namespace std;

int CountSmallLettersInString(string S1) {

	int counter = 0;
	for (int i = 0;i < S1.length();i++) {

		if (ispunct(S1[i])) {

			continue;

		}
		else if (islower(S1[i])) {


			counter++;

		}

	}

	return counter;
}

int CountCapitalLettersInString(string S1) {

	int counter = 0;
	for (int i = 0; i < S1.length();i++) {


		if (ispunct(S1[i])) {

			continue;

		}
		else if (isupper(S1[i])) {

			counter++;
		}


	}

	return counter;
}

enum WhatToCount {CapitalLetters = 0, SmallLetters,All};


int CountLetterInString(string S1, WhatToCount WhatToCount = WhatToCount::All) {


	if (WhatToCount ==CapitalLetters) {
	
		return CountCapitalLettersInString(S1);
	
	}
	else if (WhatToCount == SmallLetters){
	
	return	CountSmallLettersInString(S1);
	
	
	}
	else {
	
		return S1.length();
	
	}






}






int main()
{
	
	string Temp;
	Temp = MyInputLib::ReadString();


	cout << "String Length is : " << Temp.length() << endl << endl;

	cout << "The Capital Letter count is : ";
	cout << CountCapitalLettersInString(Temp) << endl << endl;

	cout << "The Small Letter count is : ";
	cout << CountSmallLettersInString(Temp) << endl << endl;




	cout <<"\n\nMethod Two :\n\n" << endl;



	cout << "String Length is : ";
	cout << CountLetterInString(Temp) << endl;

	cout << "\nThe Capital Letter count is : ";
	cout << CountLetterInString(Temp, WhatToCount::CapitalLetters) << endl;

	cout << "\nThe Small Letter count is : ";
	cout << CountLetterInString(Temp, WhatToCount::SmallLetters) << endl;



	return 0;
}
