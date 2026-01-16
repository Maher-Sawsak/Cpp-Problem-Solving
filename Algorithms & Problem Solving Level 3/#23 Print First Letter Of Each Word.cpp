#include<iostream>
#include<string>
#include"MaherLib.h"

using namespace std;

string ReadString() {
	string Sentence;
	cout << "Please Enter a String :\n";

	getline(cin ,Sentence);

	return Sentence;
}

void PrintFirstLetterOfEachWord(string S1) {

	bool IsFirstLetter = true;
	for (short i = 0;i < S1.length();i++) {
	
		if (S1[i] != ' ' && IsFirstLetter) {
		
			cout << S1[i] << endl;
		
		}
		IsFirstLetter = (S1[i] == ' ' ? true : false);
	
	}


}
int main() {


	PrintFirstLetterOfEachWord(ReadString());


	return 0;
}