// HW_Data_Type_Conversion_Lesson_30.cpp
#include <iostream>
#include <string>

using namespace std;
int main()
{
    string st1 = "43.22";
    int N1 = 20;
    double N2 = 33.5;
    float N3 = 55.23;


    //this from string convert to double.
    double to_double = stod(st1);
    float to_float = stof(st1);
    int to_int = stoi(st1);

    // convert from integer to string for N1.
    string from_int_to_string = to_string(N1);
    

    // convert from double to string.
    string from_double_to_string = to_string(N2);

    // convert from float to string and to int .
    string from_float_to_string = to_string(N3);
    int from_float_to_int = int(N3);
        


        // That is for the first que from string to double,float,int. 
        cout << "from string to double is : " << to_double << endl;
        cout << "from string to float is : " << to_float << endl;
        cout << "from string to int is : " << to_int << endl << endl;


        //this for the second convert from int to string 
        cout << "from integer  to string is : " << from_int_to_string << endl << endl;


        //this for the third convert from double to string 
        cout << "from double to string is : " << from_double_to_string << endl << endl;


        //this for the fourth convert from float to string 
        cout << "from float to string is : " <<from_float_to_string << endl;

        //this for the fourth convert from float to int.
        cout << "from float to int is : " <<from_float_to_int << endl;
        return 0;

}