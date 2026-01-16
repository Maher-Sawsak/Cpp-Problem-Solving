// Random Small, Capital, Special, and Numeral Characters


#include <iostream>
#include<cstdlib>
using namespace std;


int RandomNumber(int From,int To) {


    int RandNum = rand() % (To - From + 1) + From;

    return RandNum;

}


enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

char RandomCharacter(enCharType CharType) {

    switch (CharType) {

    case enCharType::CapitalLetter:
        return char(RandomNumber(65, 90));
        break;

    case enCharType::SmallLetter:
        return char(RandomNumber(97, 122));
        break;

    case enCharType::SpecialCharacter:
        return char(RandomNumber(33, 47));
        break;
    case enCharType::Digit:
        return char(RandomNumber(48, 57));
        break;
    }

}

int main()
{
    srand((unsigned)time(NULL));



    cout << RandomCharacter(enCharType::CapitalLetter) << endl;

    cout << RandomCharacter(enCharType::SmallLetter) << endl;

   cout << RandomCharacter(enCharType::SpecialCharacter) << endl;
   
   cout << RandomCharacter(enCharType::Digit) << endl;



   return 0;

}
