// #36  Problem.


#include <iostream>
#include<string>
#include<cctype>
#include "MaherLib.h"

using namespace std;


int CountWordsInString(string S1) {

    string delime = " ";
    short Pos = 0;
    short counter = 0;
    while ((Pos = S1.find(delime)) != string::npos) {
        string sWord = " ";
    
        sWord = S1.substr(0, Pos);
        if (sWord != "") {
        
            counter++;
        
        }
        S1.erase(0, Pos + delime.length());
    
    }

    if (S1 != "") {

        counter++;
    }




    return counter;

}

int main()
{
   cout<< CountWordsInString("Hello How Are You ");
    return 0;
}