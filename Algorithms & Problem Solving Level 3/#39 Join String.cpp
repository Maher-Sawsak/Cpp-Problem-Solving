// #39 Problem.cpp 
//

#include <iostream>
#include<vector>
#include<cctype>
#include"MaherLib.h"


using namespace std;





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

	vector<string> vSentence = { "Maher" , "Ali" , "Habib" };



	cout<< vJoinString(vSentence, "###");


	return 0;
}