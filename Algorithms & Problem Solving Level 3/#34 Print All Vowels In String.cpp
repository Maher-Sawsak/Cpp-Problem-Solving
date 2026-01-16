// #34 Problem.
//Print All Vowel Character In String.


#include <iostream>
#include<cctype>
#include<string>
#include"MaherLib.h"

using namespace std;


void PrintAllVowelsInString(string S1) {


    for (int i = 0;i < S1.length();i++) {
    
        if (MyInputLib::IsVowelLetter(S1[i])) {
        
            cout << S1[i] << " ";
        
        }
    
    }

}


int main()
{
    string Temp = MyInputLib::ReadString();

    PrintAllVowelsInString(Temp);


    return 0;
}
