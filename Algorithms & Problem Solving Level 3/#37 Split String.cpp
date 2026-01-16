/*
    Project: String Splitter & Vector Printer
    Refactored by: Gemini (Senior C++ Engineer)
    Based on: MaherLib Standards
*/

#include <iostream>
#include <string>
#include <vector>
#include "MaherLib.h" 

using namespace std;

vector<string> vSplitString(string SourceString, string Delimiter) {

    vector<string> vStringWords;
    short Pos = 0;
    string Word = ""; 

    while ((Pos = SourceString.find(Delimiter)) != string::npos) {

        Word = SourceString.substr(0, Pos);

        if (Word != "") {
            vStringWords.push_back(Word);
        }

        SourceString.erase(0, Pos + Delimiter.length());
    }

    if (SourceString != "") {
        vStringWords.push_back(SourceString);
    }

    return vStringWords;
}

void PrintVector(const vector<string> vStrings) {

    for (const string& Token : vStrings) {
        cout << Token << endl;
    }

}

int main()
{
    string TargetString = "Hello,#@My,#@Name,#@Is,#@Maher";
    string Delimiter = ",#@";

    vector<string> vSplitStrings;

    vSplitStrings = vSplitString(TargetString, Delimiter);

    PrintVector(vSplitStrings);

    return 0;
}