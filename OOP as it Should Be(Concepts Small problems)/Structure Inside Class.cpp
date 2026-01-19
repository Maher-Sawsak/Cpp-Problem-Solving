// Structure Inside Class.

//Shipping Invoice System Exersice.

#include <iostream>
using namespace std;
class clsOrder;

class clsCustomer {

    string _FullName;

    struct stContact {

        string _Phone;
        string _Email;
    };

  
public:

    stContact UserContant;
    clsCustomer() {
        UserContant._Phone = "05247827938";
        UserContant._Email = "mahersawsak2@gmail.com";
        _FullName = "Maher Sawsak";
        
    }

    friend void PrintInvoice(clsCustomer &Customer, clsOrder &Order);


};

class clsOrder {

    int OrderId;
    int ProductPrice;

public: 

    clsOrder() {
    
        OrderId = 12;
        ProductPrice = 120;
    }

    friend void PrintInvoice(clsCustomer &Customer, clsOrder &Order);

};

// Passing objects by 'const reference' (&) to improve performance by 
// avoiding unnecessary memory copies and ensuring the original data isn't modified.
void PrintInvoice(clsCustomer &Customer, clsOrder &Order) {


    cout << "\n ====== = SHIPPING INVOICE = ======  ";
    cout << "\nCustomer Name    : " << Customer._FullName;
    cout << "\nContact Email    : "    <<Customer.UserContant._Email;
    cout<<   "\nOrder ID        :  # "<< Order.OrderId;
    cout << "\nTotal Price      : $ " << Order.ProductPrice;
    cout << "\n ================================";

}








int main()
{
    clsCustomer Customer1;
    clsOrder Order1;


    PrintInvoice(Customer1, Order1);
}
