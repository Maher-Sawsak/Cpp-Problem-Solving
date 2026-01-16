// #38 Problem.


#include <iostream>
#include"MaherLib.h"


string TrimLeft(string S1) {


	for (int i = 0;i < S1.length();i++) {
	
	
		if (S1[i] != ' ') {
		
			return (S1.substr(i, S1.length() - i));
		}
	
	}
	return " ";
}

string TrimRight(string S1) {

	for (int i = S1.length() - 1;i > 0;i--) {
	
		if (S1[i] != ' ') {
		
			return S1.substr(0,  i + 1);
		}
	}
	return " ";

}

string TrimAll(string S1) {
	return (TrimRight(TrimLeft(S1)));
}
int main()
{

	string Sentence = "                    Hello My Name Is Maher Sawsak                  ";
	
	
	cout << "\nTrim Left : ";
	cout<< TrimLeft(Sentence);
	cout << endl;



	cout << "\nTrim Right : ";
	cout<< TrimRight(Sentence);
	cout << endl;

	system("pause>0");

	cout << "\nTrim all : ";
	cout << TrimAll(Sentence);
	cout << endl;



	return 0;
}
