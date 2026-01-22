#pragma once
#include <iostream>
#include<vector>
#include<string>
#include "clsDate.h"
#include "clsString.h"


class clsInputValidate
{
public:

	static bool IsNumberBetween(int Number , int From,int To) {
	
		return (!(Number > To || Number < From));
	
	}


	static bool IsNumberBetween(double Number, double From, double To) {

		return (!(Number > To || Number < From));

	}


	static bool IsDateBetween(clsDate Date , clsDate StartDate,clsDate EndDate) {
	
		if (EndDate.IsDateBeforDate2(StartDate)) {
		
			clsDate::SwapDates(StartDate, EndDate);
		}

		return !(Date.IsDateAfterDate2(EndDate) || Date.IsDateBeforDate2(StartDate));
		
	}

	static int  ReadIntNumber(string AskingMessage ,string ErrorMessage = "Invalid double Number! ") {
	
		int Number;
		cout << AskingMessage << endl;

		//here in the condition for the while loop it will Read the Number and check if the user entered anything except int it will give fail false. 
		//then it will give the result if fail or success true or false if true be(!)this will go out of the loop and continue.
		while (!(cin>>Number)) {
			//here to clear the fail status and cin can work again.
			cin.clear();


			//  ignore it flushes the 'remnants' of the error out of the input pipe (''''''The Buffer''''')
			// . ('\n') here it means until the end of the line.
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			
			cout << ErrorMessage << endl;

		}
		return Number;
	}


	static int ReadIntNumberBetween(int From,int To, string ErrorMessage  = "Out of range! ", string AskingMessage =  "Please Enter A Number In Range: ") {
	
		int Number = 0;
		do {
			Number = ReadIntNumber(AskingMessage, ErrorMessage );

		} while (!IsNumberBetween(Number, From, To));

		return Number;
	}


	static double ReadDblNumber(string AskingMessage, string ErrorMessage = "Invalid double Number! ") {
	
		double Number = 0;
	
		cout << AskingMessage << endl;

		while (!(cin >> Number)) {
		
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << ErrorMessage;
		}

		return Number;
	}


	static float ReadFloatNumber(string AskingMessage, string ErrorMessage = "Invalid double Number! ") {

		float Number = 0;

		cout << AskingMessage << endl;

		while (!(cin >> Number)) {

			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << ErrorMessage;
		}

		return Number;
	}




	static bool IsValidDate(clsDate Date) {
	
		return(clsDate::IsValidDate(Date));
	}


	static string ReadString(string AskingMessage) {
	
		string S1;
		cout<< AskingMessage;
		getline(cin >> ws, S1);
		return S1;
	}

};

