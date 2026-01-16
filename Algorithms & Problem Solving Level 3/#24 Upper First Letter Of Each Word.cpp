#include <iostream>
#include <string>
#include <sstream> 
#include<cctype>
#include "MaherLib.h"

using namespace std;
string UpperFirstLetterOfEachWord(string S1) {


    bool IsFirstLetter = true;
    for (int i = 0; i < S1.length();i++) {


        if (S1[i] != ' ' && IsFirstLetter) {
        
             S1[i] = toupper(S1[i]);
        
        }
        
        IsFirstLetter = (S1[i] == ' ' ? true : false);

    }
   return S1;

}
int main()
{
    string S1 = "hello my name is maher";

    S1 = UpperFirstLetterOfEachWord(S1);

    cout << S1;
    return 0;
}