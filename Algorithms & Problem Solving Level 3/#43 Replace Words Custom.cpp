// #43 Problem.


#include <iostream>
#include<string>
#include<vector>
#include<cctype>
#include "MaherLib.h"
using namespace std;

string ReplaceWordInStringUsingSplit(string S1, string ToReplace, string NewPart, bool MatchCase = true) {


	vector<string> vTempVector = MyStringLib::vSplitString(S1, " ");

	for (string& Word : vTempVector) {

		if (MatchCase) {


			if (Word == ToReplace) {

				Word = NewPart;

			}
		}
		else {

			if (MyStringLib::LowerAllString(Word) == MyStringLib::LowerAllString(ToReplace)) {

				Word = NewPart;
			}
		}
}

	return MyStringLib::vJoinString(vTempVector, " ");

}

int main()
{

	string S1 = "Welcome to Jordan , Jordan is a nice country";
	string StringToReplace = "jordan";
	string ReplaceTo = "USA";

	cout << "\nOriginal String:\n" << S1;

	cout << "\n\nReplace with match case: ";
	cout << "\n" << ReplaceWordInStringUsingSplit(S1,StringToReplace, ReplaceTo);

	cout << "\n\nReplace with dont match case: ";
	cout << "\n" << ReplaceWordInStringUsingSplit(S1,StringToReplace, ReplaceTo, false);

	system("pause>0");

}