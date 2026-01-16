// #26 Problem

#include <iostream>
#include<string>
#include<cctype>
#include"MaherLib.h"

using namespace std;

string ReadString(string Message) {

    cout << Message << endl;

    getline(cin, Message);

    return Message;

}


string LowerAllString(string S1) {

        for (int i = 0;i < S1.length();i++) {


            S1[i] = tolower(S1[i]);

        }
        return S1;
    }

string UpperAllString(string S1) {

    for (int i = 0;i < S1.length();i++) {


        S1[i] = toupper(S1[i]);

    }
    return S1;
}


int main()
{
    string StringSentence = ReadString("Please Enter The Sentence :");

    cout << "\nBefor Conversion to Capital Letters :\n";
    cout << StringSentence << endl;
    cout << endl;


    cout << "\After Conversion to Capital Letters :\n";
    StringSentence = UpperAllString(StringSentence);

    cout << StringSentence << endl;
    cout << endl;


    cout << "\After Conversion to Small Letters :\n";
    StringSentence = LowerAllString(StringSentence);

    cout << StringSentence << endl;
    cout << endl;

    return 0;
}
