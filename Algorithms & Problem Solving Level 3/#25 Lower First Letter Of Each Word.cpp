// #25 Problem.

//Convert Every First Letter in each word to lower letter.



#include <iostream>
#include<cctype>
#include<string>
#include "MaherLib.h"

using namespace std;



string LowerFirstLetterOfEachWord(string S1) {


    bool IsFirstLetter = true;

    for (int i = 0;i < S1.length();i++) {
    
        if (S1[i] != ' ' && IsFirstLetter) {
        
            S1[i] = tolower(S1[i]);
        
        }
    

        IsFirstLetter = (S1[i] == ' ' ? true : false);
    
    }

    return S1;

}

int main()
{

    string Temp = "Hello My Name Is Maher Sawsak And I Love Every Person Whose Work Hard And Making Money.\n";

    cout << "Befor Conversion its :\n";
    cout << Temp << endl;


    cout << "After Conversion its :\n";
    Temp = LowerFirstLetterOfEachWord(Temp);

    cout << Temp << endl;



}