// Date time : local UTC time

#pragma warning(disable : 4996)

#include <iostream>
#include<ctime>

using namespace std;


int main()
{

	time_t t = time(0);


	cout << t << endl;//it will give the second from 1970 until this moment.

	char* dt =  ctime(&t);//ctime(..) it will convert the total second in  t variable to string with date and time.
	cout << "Local Time : " << endl;
	cout << dt << endl;//if ypu set * it will a value for first letter in the string that is pointing to it.

	tm* gmtm = gmtime(&t);//tm is a struct and gmtm is a variable from this type.

	dt = asctime(gmtm);//this function takes a struct and converted to readable form.
	//it recive a pointer to struct from tm type.
	//and it will return a pointer from string type(char* ) contains a date and time.

	cout << "UTC time : \n";
	cout << dt << endl;
		return 0;
}