// #40 Problem.
//Overloading fun.

#include <iostream>
#include<string>
#include<cctype>
#include<vector>
#include "MaherLib.h"
using namespace std;



string vJoinString(string S1[100] ,int arrLength ,string Delim) {

	string TempString = "";
	for (int i = 0;i < arrLength;i++) {
	
		TempString +=  S1[i] + Delim;
	
	}

	return TempString.substr(0, TempString.length() - Delim.length());

}




string vJoinString(vector<string> S1, string Dimeleter) {


	string TempString = "";

	for (string& C : S1) {
		TempString.append(C);
		TempString.append(Dimeleter);
	}

	return (TempString.substr(0, TempString.length() - Dimeleter.length()));

}


int main()
{

	vector<string> Sentence = { "Mohammed" , "Fadi" , "Ali" , "Maher" };

	string sArray[4] = { "Mohammed" , "Fadi" , "Ali" , "Maher" };

	string Delim = " ";

	cout << "The join By vector is : ";
	cout<<vJoinString(Sentence, Delim);
	cout << endl;



	cout << "The join By array is  : ";
	cout<<vJoinString(sArray , 4 , Delim);

	cout << endl;

	return 0;
}