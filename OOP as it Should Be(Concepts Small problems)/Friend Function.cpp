/**
 * FRIEND FUNCTION:
 * - A non-member function granted access to the class's private and protected members.
 * - Declared inside the class with the 'friend' keyword, but defined outside.
 * - Not called using an object (no object.func() syntax); instead, it usually
 * takes an object as an argument to access its internal data.
 * - Used to bridge two classes or for operator overloading.
 * 
 * Syntax friend DeclarationOfTheFunction;
 */

#include <iostream>
using namespace std;
class clsAccountInfo {

private:
	string _MaherPassword;
protected:
	string UserName;

public:
	string Name;
	string Department;

	clsAccountInfo() {
		_MaherPassword = "123124";
		UserName = "maher.2";
		Name = "Maher Sawsak";
		Department = "Software Enginnering";

	}

	//Here is mean give full access to PrintTheUserNameAndPass to access all member even if its private .
	friend string PrintTheUserNameAndPass(clsAccountInfo User);

	//Here is mean give full access to clsFacebook to access all member even if its private .
	friend class clsFacebook;

};


string PrintTheUserNameAndPass(clsAccountInfo User) {

	return User.UserName + " " + User._MaherPassword;
}




class clsFacebook : public clsAccountInfo {
public:


	void Display(clsAccountInfo User2) {

		//I can access the password and its private in class clsAccountInfo.
		cout << User2._MaherPassword;
	}

};


int main()
{

	//I give it the value in the class for password.
	clsAccountInfo NormalUser;

	clsFacebook User1;

	User1.Display(NormalUser);
	cout << endl;

	cout << PrintTheUserNameAndPass(NormalUser);
}
