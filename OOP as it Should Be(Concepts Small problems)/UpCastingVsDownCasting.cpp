// Up Casting Vs Down Casting.


#include <iostream>

using namespace std;

class clsPerson {
	string _FullName;

	public:
	string GetFullName() {
		return"Maher Sawsak";
	}

};

class clsEmployee : public clsPerson{

	string GetTitle() {
		return "CEO";
	}

};


int main()
{
//Up Casting and also we have down casting.

//For Up casting from child to parent, meaning the child contain all propriety that in parent so we can casting. 

	clsEmployee Employee1;
	
	clsPerson * Person = &Employee1;
	cout<<Person->GetFullName();


	/*Down Casting its not correct just to understand the principle.
	notice you can't casting the child to the parent cuz like that to understanding 
	 in first case (Up Casting) : The Employee is a person in real life.
	 in case two(Down Casting) : The Person is not mandatory is Employee maybe its child person like that.
	
	Example for(Down Casting) :
	clsPerson Person2;
	clsEmployee* Employee2 = &Person;
	*/

}