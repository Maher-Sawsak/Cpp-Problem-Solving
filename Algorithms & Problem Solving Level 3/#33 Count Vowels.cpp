// #33 Problem.

#include <iostream>
#include"MaherLib.h"

using namespace std;



short CountVowelsInString(string S1) {

	short counter = 0;

	for (short i = 0;i < S1.length();i++) {
	
		if (MyInputLib::IsVowelLetter(S1[i])) {
		
			counter++;
		}
	
	}
	return counter;


}


int main()
{

	string Sentence = MyInputLib::ReadString();

	cout<< "There is " << CountVowelsInString(Sentence)<<" Vowels Character in this String.\n";


	return 0;
}