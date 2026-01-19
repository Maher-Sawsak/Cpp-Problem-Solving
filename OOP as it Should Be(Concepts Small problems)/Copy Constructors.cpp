// Constructors-AddressLine.


#include <iostream>
using namespace std;


class clsAddress {

private:
    string _AddressLine1;
    string _AddressLine2;
    string _PoBox;
    string _ZipCode;


public:


    /*


     Important Note for your Exams (The "Missing Default" Trap)
     <<<Since you created your own Parameterized Constructor, C++ deletes the automatic Default Constructor>>>.


    Constructor Not Default Constructor here.
    It doesn't return any type even void ;
    it must have the same name for class name.

    */


    clsAddress(string AddressLine1, string AddressLine2, string ZipCode, string PoBox) {
        _AddressLine1 = AddressLine1;
        _AddressLine2 = AddressLine2;
        _PoBox = PoBox;
        _ZipCode = ZipCode;

    }
    //Copy Costrauctor manually
    // I used const for safety cuz maybe will change the original data object 1.
    clsAddress(const clsAddress & OldAddress) {
    
        _AddressLine1 = OldAddress._AddressLine1;
        _AddressLine2 = OldAddress._AddressLine2;
        _PoBox = OldAddress._PoBox;
        _ZipCode = OldAddress._ZipCode;
    
    }
    void setAddressLine1(string AddressLine1) {

        _AddressLine1 = AddressLine1;
    }
    void setAddressLine2(string AddressLine2) {
        _AddressLine2 = AddressLine2;
    }

    void setZipCode(string ZipCode) {

        _ZipCode = ZipCode;
    }
    void setPoBox(string PoBox) {

        _PoBox = PoBox;
    }

    string GetAddressLine1() {
        return _AddressLine1;
    }
    string GetAddressLine2() {
        return _AddressLine2;
    }

    string GetZipCode() {

        return _ZipCode;
    }

    string GetPoBox() {

        return _PoBox;
    }


    void PrintAddress() {

        cout << "Address Line 1 : " << _AddressLine1 << endl;
        cout << "Address Line 2 : " << _AddressLine2 << endl;
        cout << "Zip code : " << _ZipCode << endl;
        cout << "PoBox  : " << _PoBox << endl;

    }



};


int main()
{
    //create first object
    clsAddress Address("Queuen Rania Hotel", "Room Number : ", "8000", "11235");
    Address.PrintAddress();

    cout << endl;
    //Calls my Manual Copy Constructor
    clsAddress Address2 = Address;
    Address2.PrintAddress();
}