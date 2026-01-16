#include<iostream>



int main() {

    using namespace std; const short The_Months_In_The_Year = 12;

    string Name1, City, Country;

    short Age;
        
    unsigned 
      int YearlySalary;

    float MonthlySalary;

    char Gander;

    bool Married;


    cout << "Enter The Name:\n";
    cin >> Name1;

    cout << "Enter The Age :\n";
    cin >> Age;

    cout << "Enter The City:\n";
    cin >> City;

    cout << "Enter The Country:\n";
    cin >> Country;

    cout << "Enter The Monthly Salary:\n";
    cin >> MonthlySalary;


    cout << "Enter The Gander :\n";
    cin >> Gander;

    cout << "Enter If u Married TRUE If U dont False: \n";
    cin >> Married;



    YearlySalary = MonthlySalary * The_Months_In_The_Year;
    cout << "**********************\n";
    cout << "Name: " << Name1 << endl;
    cout << "Age : " << Age << " years." << endl;
    cout << "City : " << City << endl;
    cout << "country : " << Country << endl;
    cout << "Monthly Salary :" << MonthlySalary << endl;
    cout << "Yearly Salary:" << YearlySalary << endl;
    cout << "Gender: " << Gander << endl;
    cout << "Married :" << Married << endl;
    cout << "**********************";
    return 0;


}