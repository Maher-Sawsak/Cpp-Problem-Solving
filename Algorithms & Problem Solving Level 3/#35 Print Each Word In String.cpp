// #35 Problem.

//print Each Word In The String.



#include <iostream>
#include<string>
#include<cctype>
#include"MaherLib.h"
#include<vector>


void PrintEachWordInString(string S1) {

    string delim = " ";  //delimiter
    short Pos = 0;
    while ((Pos = S1.find(delim)) != string::npos) {
    
        string sWord = S1.substr(0, Pos);
    
        if (sWord != " ") {
        
            cout << sWord << endl;
        
        }

        S1.erase(0 , Pos + delim.length());
    }



    if (S1 != " ") {
    
        cout  << S1 << endl;
    
    }


}


int main()
{

    PrintEachWordInString("Hello    My Name Is Maher");

    return 0;
}




