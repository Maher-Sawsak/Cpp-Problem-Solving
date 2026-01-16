// #30 Problem.
//Count For Spesific Letter In String.
#include <iostream>
#include <string>
#include <cctype>
#include"MaherLib.h"


using namespace std;

char ReadChar() {

	char Letter = ' ';
	cout << "PLease Enter The Letter You Want To Count : \n";
	cin >> Letter;
	return Letter;

}

int CountSpecificLetterInString(string S1, char Letter ) {


	short counter = 0;
	for (short i = 0; i < S1.length(); i++) {
	
	
		if (S1[i] == Letter) {
		
			counter++;
		
		}

	}

	return counter;

}

int main()
{

	string Temp;
	Temp = MyInputLib::ReadString();

	char Letter = ReadChar();

	cout<<"The Letter ' "<<Letter <<"' is : " << CountSpecificLetterInString(Temp , Letter);



	return 0;
}
