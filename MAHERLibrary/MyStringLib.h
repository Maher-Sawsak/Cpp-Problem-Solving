#pragma once

#include <iostream>
#include<vector>
#include<fstream>
#include<string>
#include "MyInputLib.h"
#include <MaherLib.h>

using namespace std;


 namespace MyStringLib {
	 enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };




	 string ReadString() {
		 string Sentence;
		 cout << "Please Enter a String :\n";

		 getline(cin, Sentence);

		 return Sentence;

	 }


	 


	 char RandomCharacter(enCharType CharType) {

		 switch (CharType) {

		 case enCharType::CapitalLetter:
			 return char(MyInputLib::RandomNumberInRange(65, 90));
			 break;

		 case enCharType::SmallLetter:
			 return char(MyInputLib::RandomNumberInRange(97, 122));
			 break;

		 case enCharType::SpecialCharacter:
			 return char(MyInputLib::RandomNumberInRange(33, 47));
			 break;
		 case enCharType::Digit:
			 return char(MyInputLib::RandomNumberInRange(48, 57));
			 break;
		 }

	 }



	 string GenerateWord(enCharType CharType, short Length)
	 {
		 string Word;

		 // Loop for the number of characters specified by Length.
		 for (int i = 1; i <= Length; i++)
		 {
			 // Append a random character of the specified type to the word.
			 Word = Word + RandomCharacter(CharType);
		 }
		 return Word;
	 }


	 string GenerateKey()
	 {
		 string Key = "";

		 Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
		 Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
		 Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
		 Key = Key + GenerateWord(enCharType::CapitalLetter, 4);

		 return Key;
	 }

	 void GenerateKeys(short NumberOfKeys)
	 {

		 for (int i = 1; i <= NumberOfKeys; i++)
		 {

			 cout << "Key [" << i << "] : ";
			 cout << GenerateKey() << endl;
		 }
	 }




	 string EncryptMessage(string Statement, short EncryptionKey) {

		 for (int i = 0;i <= Statement.length();i++) {

			 Statement[i] = char((int)Statement[i] + EncryptionKey);
		 }

		 return Statement;

	 }

	 string DecryptMessage(string EncryptionsText, short DecryptionKey) {


		 for (int i = 0; i <= EncryptionsText.length();i++) {

			 EncryptionsText[i] = char((int)EncryptionsText[i] - DecryptionKey);

		 }

		 return EncryptionsText;
	 }


	








	 void PrintFirstLetterOfEachWord(string S1) {

		 bool IsFirstLetter = true;
		 for (short i = 0;i < S1.length();i++) {

			 if (S1[i] != ' ' && IsFirstLetter) {

				 cout << S1[i] << endl;

			 }
			 IsFirstLetter = (S1[i] == ' ' ? true : false);

		 }


	 }

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


	 string UpperAllString(string S1) {

		 for (int i = 0;i < S1.length();i++) {


			 S1[i] = toupper(S1[i]);

		 }
		 return S1;
	 }



	 string LowerAllString(string S1) {

		 for (int i = 0;i < S1.length();i++) {


			 S1[i] = tolower(S1[i]);

		 }
		 return S1;
	 }


	 char InvertLetterCase(char Char1) {
		 return (islower(Char1) ? toupper(Char1) : tolower(Char1));
	 }




	 string InvertAllStringLettersCase(string S1) {

		 for (int i = 0;i < S1.length(); i++) {

			 S1[i] = InvertLetterCase(S1[i]);

		 }
		 return S1;

	 }



	 int CountSmallLettersInString(string S1) {

		 int counter = 0;
		 for (int i = 0;i < S1.length();i++) {

			 if (ispunct(S1[i])) {

				 continue;

			 }
			 else if (islower(S1[i])) {


				 counter++;

			 }

		 }

		 return counter;
	 }


	 int CountCapitalLettersInString(string S1) {

		 int counter = 0;
		 for (int i = 0; i < S1.length();i++) {


			 if (ispunct(S1[i])) {

				 continue;

			 }
			 else if (isupper(S1[i])) {

				 counter++;
			 }


		 }

		 return counter;
	 }

	 int CountSpecificLetterInString(string S1, char Letter, bool MatchCase = true) {


		 short counter = 0;
		 for (short i = 0; i < S1.length(); i++) {

			 if (MatchCase) {
				 if (S1[i] == Letter) {

					 counter++;

				 }

			 }
			 else {

				 if (tolower(S1[i]) == tolower(Letter)) {

					 counter++;

				 }


			 }

		 }

		 return counter;

	 }



	 bool IsVowelLetter(char Letter) {


		 Letter = tolower(Letter);


		 return ((Letter == 'a') || (Letter == 'e') || (Letter == 'o') || (Letter == 'i') || (Letter == 'u'));

	 }


	 short CountVowelsInString(string S1) {

		 short counter = 0;

		 for (short i = 0;i < S1.length();i++) {

			 if (IsVowelLetter(S1[i])) {

				 counter++;
			 }

		 }
		 return counter;


	 }



	 void PrintAllVowelsInString(string S1) {


		 for (int i = 0;i < S1.length();i++) {

			 if (IsVowelLetter(S1[i])) {

				 cout << S1[i] << " ";

			 }

		 }

	 }




	 void PrintEachWordInString(string S1) {

		 string delim = " ";  //delimiter
		 short Pos = 0;
		 while ((Pos = S1.find(delim)) != string::npos) {

			 string sWord = S1.substr(0, Pos);

			 if (sWord != " ") {

				 cout << sWord << endl;

			 }

			 S1.erase(0, Pos + delim.length());
		 }



		 if (S1 != " ") {

			 cout << S1 << endl;

		 }


	 }




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

	 string TrimLeft(string S1) {


		 for (int i = 0;i < S1.length();i++) {


			 if (S1[i] != ' ') {

				 return (S1.substr(i, S1.length() - i));
			 }

		 }
		 return " ";
	 }

	 string TrimRight(string S1) {

		 for (int i = S1.length() - 1;i > 0;i--) {

			 if (S1[i] != ' ') {

				 return S1.substr(0, i + 1);
			 }
		 }
		 return " ";

	 }

	 string TrimAll(string S1) {
		 return (TrimRight(TrimLeft(S1)));
	 }


	 string vJoinString(vector<string> S1, string Dimeleter) {


		 string TempString = "";

		 for (string& C : S1) {
			 TempString.append(C);
			 TempString.append(Dimeleter);
		 }

		 return (TempString.substr(0, TempString.length() - Dimeleter.length()));

	 }





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





	 string ReplaceWordInStringUsingBuiltInFunction(string S1, string ToReplace, string NewOne) {


		 short pos = S1.find(ToReplace);

		 while (pos != string::npos) {


			 S1 = S1.replace(pos, ToReplace.length(), NewOne);

			 pos = S1.find(ToReplace);
		 }

		 return S1;


	 }

	 string ReplaceWordInStringUsingSplit(string S1, string ToReplace, string NewPart, bool MatchCase = true) {


		 vector<string> vTempVector = MyStringLib::vSplitString(S1, " ");

		 for (string& Word : vTempVector) {

			 if (MatchCase) {


				 if (Word == ToReplace) {

					 Word = NewPart;

				 }
			 }
			 else {

				 if (MyStringLib::LowerAllString(Word) == MyStringLib::LowerAllString(ToReplace)) {

					 Word = NewPart;
				 }
			 }
		 }

		 return MyStringLib::vJoinString(vTempVector, " ");

	 }



	 string RemovePunctFromString(string S1) {

		 string S2 = "";
		 for (int i = 0;i < S1.length();i++) {

			 if (!ispunct(S1[i])) {

				 S2 += S1[i];

			 }



		 }

		 return S2;
	 }





	 string NumberToText(long long Number)
	 {
		 if (Number == 0)
		 {
			 return "";
		 }

		 if (Number >= 1 && Number <= 19)
		 {
			 string arr[] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven",
			 "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen",
			 "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };

			 return arr[Number] + " ";
		 }

		 if (Number >= 20 && Number <= 99)
		 {
			 string arr[] = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };
			 return arr[Number / 10] + " " + NumberToText(Number % 10);
		 }

		 if (Number >= 100 && Number <= 199)
		 {
			 return "One Hundred " + NumberToText(Number % 100);
		 }

		 if (Number >= 200 && Number <= 999)
		 {
			 return NumberToText(Number / 100) + "Hundreds " + NumberToText(Number % 100);
		 }

		 if (Number >= 1000 && Number <= 1999)
		 {
			 return "One Thousand " + NumberToText(Number % 1000);
		 }

		 if (Number >= 2000 && Number <= 999999)
		 {
			 return NumberToText(Number / 1000) + "Thousands " + NumberToText(Number % 1000);
		 }

		 if (Number >= 1000000 && Number <= 1999999)
		 {
			 return "One Million " + NumberToText(Number % 1000000);
		 }

		 if (Number >= 2000000 && Number <= 999999999)
		 {
			 return NumberToText(Number / 1000000) + "Millions " + NumberToText(Number % 1000000);
		 }

		 if (Number >= 1000000000 && Number <= 1999999999)
		 {
			 return "One Billion " + NumberToText(Number % 1000000000);
		 }
		 else
		 {
			 return NumberToText(Number / 1000000000) + "Billions " + NumberToText(Number % 1000000000);
		 }
	 }















































}
