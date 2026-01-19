/*
Friend Classes.
In Sumple words : its one-way-relationship ,Meaning if the class declare the another class in it that means 
the class who take this permission will access every thing in that class whose give this permission to it 
even public or protected or public also full access in simple word.
how the class give full access to onther class syntax is :  [[[[[ friend class NameOfClassWillTakeFullAccess ]]]]] 
*/

#include <iostream>
using namespace std;
class clsAccountInfo {

private:
	string _MaherPassword;
protected :
	string UserName;

public:
    string Name;
	string Department;

	clsAccountInfo(){
	_MaherPassword = "123124";
	UserName = "maher.2";
	Name = "Maher Sawsak";
	Department = "Software Enginnering";

	}

	//Here is mean give full access to clsFacebook to access all member evev if its private .
	friend class clsFacebook;

};

class clsFacebook : public clsAccountInfo{
public: 


	void Display(clsAccountInfo User2) {
	
		//I can access the password and its private in class clsAccountInfo.
		cout<< User2._MaherPassword;
	}

};


int main()
{

	//I give it the value in the class for password.
	clsAccountInfo NormalUser;
	
	clsFacebook User1;

	User1.Display(NormalUser);
}
