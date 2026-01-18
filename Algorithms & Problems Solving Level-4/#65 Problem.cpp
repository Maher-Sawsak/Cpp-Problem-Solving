// #65 Problem.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <string>
#include<vector>
#include"MaherLib.h"


using namespace std;

enum enDateBeforAfterEqual { Befor = -1, Equal = 0, After = 1 };

struct sDate {
	short Year;
	short Month;
	short Day;
};

struct sPeriod {
	sDate StartDate;
	sDate EndDate;
};

short ReadDay() {

	short Day;
	cout << "please enter a day? ";
	cin >> Day;


	return Day;
}

short ReadMonth()
{
	short Month;
	cout << "\nPlease enter a Month? ";
	cin >> Month;
	return Month;
}

short ReadYear()
{
	short Year;
	cout << "\nPlease enter a year? ";
	cin >> Year;
	return Year;
}

sDate ReadFullsDate() {
	sDate Date;
	cout << endl;
	Date.Day = ReadDay();
	cout << endl;
	Date.Month = ReadMonth();
	cout << endl;
	Date.Year = ReadYear();
	cout << endl;
	cout << endl;

	return Date;
}

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



sDate vStringToDate(string StringDate) {

	sDate Date;
	vector<string> StringVectorContainDate;


	StringVectorContainDate = vSplitString(StringDate, "/");

	Date.Day = stoi(StringVectorContainDate[0]);
	Date.Month = stoi(StringVectorContainDate[1]);
	Date.Year = stoi(StringVectorContainDate[2]);

	return Date;
}



string DateToString(sDate Date, char Seperator = '/') {


	return to_string(Date.Day) + Seperator + to_string(Date.Month) + Seperator + to_string(Date.Year);
}


string ReplaceWordInStringUsingBuiltInFunction(string S1, string ToReplace, string NewOne) {


	short pos = S1.find(ToReplace);

	while (pos != string::npos) {


		S1 = S1.replace(pos, ToReplace.length(), NewOne);

		pos = S1.find(ToReplace);
	}

	return S1;

}

string FormatDate(sDate Date , string Format = "dd/mm/yyyy") {
	 Format = ReplaceWordInStringUsingBuiltInFunction(Format,"dd" , to_string(Date.Day));
	 Format = ReplaceWordInStringUsingBuiltInFunction(Format,"mm" , to_string(Date.Month));
	 Format = ReplaceWordInStringUsingBuiltInFunction(Format,"yyyy" , to_string(Date.Year));

	return Format;
}


int main()
{
	string DateAsString = "";
	cout << "Please Enter Date dd/mm/yyyy\n";
	cin >> DateAsString;

	sDate  Date;

	Date = vStringToDate(DateAsString);


	cout << FormatDate(Date) << endl;
	cout << FormatDate(Date, "Month: mm  ,Day:  dd  ,Year: yyyy") << endl;
	cout << FormatDate(Date, "dd/yyyy/mm") << endl;
	cout << FormatDate(Date, "yyyy/dd/mm") << endl;
	cout << FormatDate(Date, "dd-mm-yyyy") << endl;
	cout << FormatDate(Date, "yyyy-mm-dd") << endl;


}