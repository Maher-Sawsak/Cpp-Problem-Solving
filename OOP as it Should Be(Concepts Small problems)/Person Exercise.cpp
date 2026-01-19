

#include <iostream>
using namespace std;

class clsPerson {


private:
    int _Id ;
    string _FirstName;
    string _LastName;
    string _PhoneNumber;
    string _Email;
public:
    //Parameterized constructor cuz have parameter.
    clsPerson(int ID,string FirstName , string LastName  , string PhoneNumber, string Email) {
    
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

    void SendEmail(string Subject , string Body) {
    
        cout << "The following message sent successfully to email : " << _Email << endl;

        cout <<"Subject : " << Subject << endl;
        cout <<"Body : " << Body << endl;


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

int main()
{
    clsPerson Person(10, "Maher", "Sawsak", "05342697871", "mahersawsak@gmail.com");

    Person.Print();


    Person.SendEmail("University Request", "PLease Send Me The Clacender.");
    Person.SendSMS("Hello Join us today!!");


    clsPerson Person2(10, "Ali", "Sawsak", "05342697871", "Alisawsak@gmail.com");

    Person2.Print();


}
