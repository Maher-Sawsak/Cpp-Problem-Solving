// Interfaces-Pure Virtual Functions and Abstract Classes

#include <iostream>
using namespace std;


//  Abstract class / Interface / Contract.
// To create an abstract class you should write (virtual) explicitly and must be equal to zero = 0. 
//In some programming language call it Interface. for contract its what is doing Abstract Cladd its like contract.
//Be Carefull the (abstract class) is sooo difference from the (abstraction concept from oop).

class clsDevice {
   
public:
    virtual void Dial(string DiviceName) = 0;
    virtual void SendSMS(string text, string PhoneNumber, string MacAddress) = 0;
    virtual void CompanyName(string CompanyName, string CountryMaker) = 0;
    virtual void SPICompany(string SPIName) = 0;
};


class clsLenovo : public clsDevice {
    //I need to implement all the clsDevice pure virtual function need to create a object from this class.

public:
    void Dial(string DivName) {

    };
    void SendSMS(string Text, string PhoneNumber, string MacAddress) {

    };
    void CompanyName(string CompanyName, string MakerCountry) {

    };
    void SPICompany(string SPICompanyName) {

    };

};


class clsDell : public clsLenovo{
    //here it look to clsLenovo as a Concrete Class, not as a abstract class so it is ok if i didn't implent any thing.

};


int main()
{


    clsLenovo LenovoThinkPad;
    LenovoThinkPad.CompanyName("Lenovo" , "China");


    clsDell DellReno300;
    DellReno300.CompanyName("Dell","R300");

}