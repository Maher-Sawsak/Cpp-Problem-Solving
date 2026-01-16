// #41 Problem.
//Reverse Words String.


//end() it points to after the end to a space 
#include <iostream>
#include<vector>
#include<string>
#include<cctype>
#include "MaherLib.h"
using namespace std;







string ReverseWordsInString(string S1) {

	vector<string> vTempVector;

	vTempVector = MyStringLib::vSplitString(S1, " ");

	vector<string>::iterator iter = vTempVector.end();

	string S2 = "";

	while (iter != vTempVector.begin()) {
	
	
		iter--;
		S2 += *iter + " ";
	
	
	}


S2 = S2.substr(0, S2.length() - 1);

	return S2;


}




int main()
{

	string Sentence = MyStringLib::ReadString();

	cout << "string After Reversing : \n";
	cout<<ReverseWordsInString(Sentence);

}
