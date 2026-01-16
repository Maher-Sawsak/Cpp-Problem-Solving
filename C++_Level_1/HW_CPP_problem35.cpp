
#include <iostream>

int main()
{
    using namespace std;

    int  Pennies, Nickel, Dime, Quarter, Dollar ;

    float Total_Pennies , Total_Dollars;


    cout << "Enter The Pennies\n";
        cin >> Pennies;

        cout << "Enter The Nickel\n";
        cin >> Nickel;

        cout << "Enter The Dime" <<endl ;
        cin >> Dime;

        cout << "Enter The Quarter\n";
        cin >> Quarter;

        cout << "Enter The Dollar\n";
        cin >> Dollar;



        Total_Pennies = (Pennies * 5) + (Nickel * 5) + (Dime * 5) + (Quarter * 5) + (Dollar * 5);


        Total_Dollars = Total_Pennies / 100;


        cout << Total_Pennies << " Pennies" <<endl;

        cout << Total_Dollars << " Dollars" <<endl;



        return 0;
}
