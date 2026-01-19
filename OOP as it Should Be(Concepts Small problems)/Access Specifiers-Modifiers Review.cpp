// Access Specifiers-Modifiers Review(public/private/protected).


#include <iostream>
using namespace std;
class clsMath {

//private By deault its private if u didn't write it, here I'm learning for that i worte it.
private:

    int MyGrade = 76;
    int HighestGrade = 100;

//Protected The class and whose inherit this class can access it.
protected:
    double Pi = 3.14;
    int CalculateMyGrade() 
    {
        return MyGrade - HighestGrade;
    }

//public have full access in the main and the class it self and whose intherit the base/super class.
public:
    
    int CalculateDiffBetweenGrade(int a, int b) {

        return a - b;
    }

};


class clsUniversity : public clsMath {
    //here Pi is protected so i can use it in this class.
    //here you can see that ReturnValue have access to Pi because its protected and this class inherit the clsMath.
    int ReturnValue() {
        return clsMath::Pi;
    }


};

int main()
{
    clsMath Math;

    //here i can access the method cuz its public in the class.
    cout << Math.CalculateDiffBetweenGrade(100, 48) << endl;

}
