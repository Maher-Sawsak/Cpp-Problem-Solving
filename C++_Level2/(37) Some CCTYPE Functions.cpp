// Some CCTYPE Functions


/*
The function :
                    
toupper(..);------------
                          -this two it will convert and return the result as a number in ASKII conde.
tolower(..);------------




isupper(...) ---------------

islower(...) ---------------
                                       --- Those they will return 0 it mean false or any another value mean true(Non Zero) . 
isdigit(...) ---------------

ispunct(...) ---------------

//punct This is for special character like :$(*)@}&$@#$&{


*/


#include <iostream>
#include<cctype>//Notice to include this Lib ---> (cctype)

using namespace std;

int main()
{


	char a;
	char b;


	a = toupper('a');
	cout << "convert a to upper case (A): " << a << endl;


	b = tolower('A');
	cout << "convert  A  to Lower Case (a) : " << b << endl;




	cout << "is A  Upper Case : " << isupper('A') << endl;

	cout << "is a is Lower Case : " << islower('a') << endl;

	cout << "is 9 a digit Number : " << isdigit('9') << endl;


	cout << "is character ($) punct character : " << ispunct('$') << endl;


	return 0;
}
