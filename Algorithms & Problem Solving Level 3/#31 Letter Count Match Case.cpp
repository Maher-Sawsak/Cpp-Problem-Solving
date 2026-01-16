// #31 Problem.



#include <iostream>
#include<string>
#include<cctype>
#include "MaherLib.h"

using namespace std;

char ReadChar() {
	char Letter;
	cout << "Please Enter a Character \n";
	cin >> Letter;

	return Letter;
}



int CountSpecificLetterInString(string S1, char Letter , bool MatchCase = true) {


	short counter = 0;
	for (short i = 0; i < S1.length(); i++) {

		if (MatchCase) {
			if (S1[i] == Letter) {

				counter++;

			}

		}
		else {
		
			if (tolower(S1[i]) == tolower(Letter)) {
			
				counter++;
			
			}
		
		
		}

	}

	return counter;

}



int main()
{

	string Temp =  MyInputLib::ReadString();

	char Letter = ReadChar();

	//if Match Case is true means he needs just the same case for letter small if its small and capital if it is.
	cout << "The Letter '" <<Letter<<"' is :  : " <<CountSpecificLetterInString(Temp, Letter) << endl;



	//he wants both of them the smaal and capital.
	cout << "The Letter '" << Letter << "' or '" << MyInputLib::InvertLetterCase(Letter)<<"' is : "
		<< CountSpecificLetterInString(Temp, Letter, false) << endl;


	cout << endl;



	return 0;
}
