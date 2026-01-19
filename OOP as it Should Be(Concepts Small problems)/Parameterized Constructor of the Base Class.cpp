// Concept of OOP--Inheritance.
//Solving parameterized constructor for the Employee Object

#include <iostream>
using namespace std;


//This Called Base Class (OR) Super Class
class clsPerson {


private:
    int _Id;
    string _FirstName;
    string _LastName;
    string _PhoneNumber;
    string _Email;
public:

    //Parameterized constructor cuz have parameter.
    clsPerson(int ID, string FirstName, string LastName, string PhoneNumber, string Email) {

        _Id = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _PhoneNumber = PhoneNumber;
        _Email = Email;

    }


    void setFirstName(string FirstName) {
        _FirstName = FirstName;
    }

    void setLastName(string LastName) {
        _LastName = LastName;
    }

    void setPhoneNumber(string PhoneNumber) {
        _PhoneNumber = PhoneNumber;
    }

    void setEmail(string Email) {
        _Email = Email;
    }

    //Read Only ID.
    int GetID() {
        return _Id;
    }

    string GetFirstName() {
        return _FirstName;
    }

    string GetLastName() {
        return _LastName;
    }

    string GetFullName() {
        return _FirstName + " " + _LastName;
    }

    string GetEmail() {
        return _Email;
    }

    string GetPhoneNumber() {
        return _PhoneNumber;
    }

    void SendEmail(string Subject, string Body) {

        cout << "The following message sent successfully to email : " << _Email << endl;

        cout << "Subject : " << Subject << endl;
        cout << "Body : " << Body << endl;


    }

    void SendSMS(string Message) {
        cout << "The following SMS sent successfully to phone : " << _PhoneNumber << endl;
        cout << Message << endl;

    }

    void Print() {

        cout << "Info\n";
        cout << "\n------------------------------------------------------\n";
        cout << "ID : " << _Id << endl;
        cout << "First Name : " << _FirstName << endl;
        cout << "Last Name : " << _LastName << endl;
        cout << "Full Name : " << GetFullName() << endl;
        cout << "Email : " << _Email << endl;
        cout << "Phone Number : " << _PhoneNumber << endl;

        cout << "------------------------------------------------------\n";


    }
};


//This Called Derived Class (OR) Sub Class because its inherited the Super/Base class which is clsPerson.
class clsEmployee : public clsPerson {

private:

    string _Title;
    double _Salary;
    string _Department;

public:

    //here this constructor passing the paarameter to the clsPerson that he need it
    clsEmployee(int ID, string FirstName, string LastName, string PhoneNumber, string Email, string Title, string Department, double Salary)
        : clsPerson(ID, FirstName, LastName, PhoneNumber, Email)
    {
        _Title = Title;
        _Department = Department;
        _Salary = Salary;
    }



    void SetTitle(string Title) {
        _Title = Title;
    }

    string GetTitle() {
        return _Title;
    }

    void SetSalary(double Salary) {
        _Salary = Salary;
    }

    double GetSalary() {
        return _Salary;
    }

    void SetDepartment(string Department) {
        _Department = Department;
    }

    string GetDepartment() {
        return _Department;
    }

};


int main()
{
    clsEmployee Employee1(10 ,"Maher","Sawsak" ,"4234232424","maher@gmail.com","CEO","Software Eng",13000.750);

    Employee1.Print();
    cout << endl << Employee1.GetDepartment() << endl;
    cout << endl << Employee1.GetTitle() << endl;
    cout << endl << Employee1.GetSalary() << endl;

    //Now We have a problem its print function i can use it in sub class but i cant show the salary? how can i solve it
}