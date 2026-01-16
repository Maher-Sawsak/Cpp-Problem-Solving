// Hw_C+++level1_String.cpp 

#include <iostream>
#include <string>

int main()
{

    using namespace std;
    string full_name , first_string , second_string;

    //take it from the user.
    cout << "Please Enter Your Full Name:";
    getline(cin, full_name);



    cout << "Please Enter String2 ?";
    cin >> first_string;

    cout << "Please Enter String3 ?";
    cin >> second_string;



    cout << "*********************************************\n";

    //to print the final result

    cout << "The Length of string is: " << full_name.length() << endl;

    cout << "characters at 0, 2, 4, 7 are :" << full_name[0] << full_name[2] << full_name[4] << full_name[7] << endl;
  
    string adding_two_string = first_string + second_string;
    cout << "Concatenating string 2 and string 3 = " << adding_two_string << endl;

    cout << first_string <<" * "<< second_string << " = " << stoi(first_string) * stoi(second_string) << endl;

    return 0;
}