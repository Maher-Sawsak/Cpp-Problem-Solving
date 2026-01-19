// Nested Classes.


#include <iostream>
using namespace std;
//containing class (OR) Enclosing Class.
class clsPerson
{
    string _FullName;
public:

    //Inner Class
    class clsAddress {

        string _AddressLine1;
        string _AddressLine2;
        string _Country;
        string _City;

    public:
        //Here is the constructor will not allow to create an empty object.
        clsAddress(string AddLine1, string AddLine2, string Country, string City) {

            _AddressLine1 = AddLine1;
            _AddressLine2 = AddLine2;
            _Country = Country;
            _City = City;
        }

        void Print() {
        
            cout << "\nAddress Line1   :    " << _AddressLine1 << endl;
            cout << "Address Line2     :    " << _AddressLine2;
            cout << "\nCounry          :    " << _Country;
            cout << "\nCity            :    " << _City << endl;
                
        }

        
    };


    clsAddress Address;
    //Member Initialization List For Address(......);
    clsPerson(string FullName , string AddLine1,string AddLine2,string Country,string City)
        : Address(AddLine1,AddLine2,Country,City) {
        _FullName = FullName;

    }
   
  

};

int main()
{
    clsPerson Person1("Maher Sawsak","Quenn Rania " , "Bulding 101","Jordan","Amman");
    Person1.Address.Print();

    
}
