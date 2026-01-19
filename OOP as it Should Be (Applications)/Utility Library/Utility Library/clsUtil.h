#pragma once
#include<iostream>
#include "clsDate.h"
#include "clsString.h"
class clsUtil
{
public:

static	void Srand() {
	
		srand((unsigned)time(NULL));
	}

static	enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4, Mix = 5};

static	int GetRawRandomNumber() {
		return rand();
	}

static	int RandomNumberInRange(int From, int To) {


		int RandomNumber = rand() % (To - From + 1) + From;

		return RandomNumber;
	}

static	char RandomCharacter(enCharType CharType) {

		switch (CharType) {

		case enCharType::CapitalLetter:
			return char(RandomNumberInRange(65, 90));
			break;

		case enCharType::SmallLetter:
			return char(RandomNumberInRange(97, 122));
			break;

		case enCharType::SpecialCharacter:
			return char(RandomNumberInRange(33, 47));
			break;
		case enCharType::Digit:
			return char(RandomNumberInRange(48, 57));
			break;

		case enCharType::Mix:
			return GetRawRandomNumber();
			break;
		}
	}

static	string RandomWord(enCharType CharType, short Length)
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

static	string GenerateOneKey(enCharType KeyType, short lengthOfKey) {
		string Key = "";
		Key = RandomWord(KeyType, lengthOfKey);
	
		return Key;
	}

static	string GenerateKey(enCharType KeyType,short lengthOfWordInKey)
	{
		string Key = "";

	        Key = RandomWord(KeyType, lengthOfWordInKey) + "-";
			Key = Key + RandomWord(KeyType, lengthOfWordInKey) + "-";
			Key = Key + RandomWord(KeyType, lengthOfWordInKey) + "-";
			Key = Key + RandomWord(KeyType, lengthOfWordInKey);

		return Key;
	}

//it will return a vector with keys that I'll ask for them.
static	vector<string> GenerateKeysReturnVector(enCharType KeysCharType ,short lengthOfWordInKey,short NumberOfKeys)
	{
		vector <string> VectorOfKeys;
		for (int i = 1; i <= NumberOfKeys; i++)
		{

			
			VectorOfKeys.push_back(GenerateKey(KeysCharType, lengthOfWordInKey));
		}

		return VectorOfKeys;
	}

static	string EncryptText(string Statement, short EncryptionKey) {

		for (int i = 0;i <= Statement.length();i++) {

			Statement[i] = char((int)Statement[i] + EncryptionKey);
		}

		return Statement;

	}

static	string DecryptText(string EncryptionsText, short DecryptionKey) {


		for (int i = 0; i <= EncryptionsText.length();i++) {

			EncryptionsText[i] = char((int)EncryptionsText[i] - DecryptionKey);

		}

		return EncryptionsText;
	}

static	void ShuffleArray(int arr[100], int arrLength)
	{

		for (int i = 0;i < arrLength;i++) {

			Swap(arr[RandomNumberInRange(1, arrLength) - 1], arr[RandomNumberInRange(1, arrLength) - 1]);

		}


	}

static	void ShuffleArray(string arr[100], int arrLength)
	{

		for (int i = 0;i < arrLength;i++) {

			Swap(arr[RandomNumberInRange(1, arrLength) - 1], arr[RandomNumberInRange(1, arrLength) - 1]);

		}


	}

static	void FillArrayWithRandomNumbers(int arr[100], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			arr[i] = RandomNumberInRange(1, 100);
	}

static	void FillArrayWithWords(string arr[100], int arrLength , enCharType WordType, short LengthOfWords)
	{
		for (int i = 0; i < arrLength; i++)
			arr[i] = GenerateOneKey(WordType, LengthOfWords);
	}

static	void FillArrayWithKeys(string arr[100], int arrLength, enCharType KeysSlotType, short LengthOfSlotInKey) {
		for (int i = 0; i < arrLength; i++)
			arr[i] = GenerateKey(KeysSlotType, LengthOfSlotInKey);
	
	}

static	int MaxNumberInArray(int arr[100], int arrLength) {
		int sum = 0;

		for (int i = 0;i < arrLength;i++) {

			if (arr[i] > sum)
				sum = arr[i];
		}

		return sum;


	}

static	int MinNumberInArray(int arr[100], int arrLength)
	{
		int Min = arr[0];

		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] < Min)
			{
				Min = arr[i];
			}
		}
		return Min;
	}

static	int SumArray(int arr[100], int arrLength) {

		int sum = 0;

		for (int i = 0;i < arrLength;i++) {

			sum += arr[i];
		}
		return sum;
	}

static	float AverageArray(int arr[100], int arrLength) {

		return  (float)SumArray(arr, arrLength) / arrLength;

	}

static	void Swap(int& A, int& B)
	{
		int Temp = 0;

		Temp = A;
		A = B;
		B = Temp;

	}

static	void Swap(double& A, double& B)
	{
		double Temp = 0;

		Temp = A;
		A = B;
		B = Temp;

	}

static	void Swap(string& A, string& B)
	{
		string Temp = " ";

		Temp = A;
		A = B;
		B = Temp;

	}

static	void Swap(clsDate & A, clsDate & B)
	{
		clsDate Temp ;

		Temp = A;
		A = B;
		B = Temp;

	}




};

