// Lesson_36_variables_scope____Local_variables_VS_Global_variables.cpp 



#include <iostream>
using namespace std;



//Note: The Global Variable the lifetime for it is all the time until end the program. 
//The sign for called the Global anywhere in the program is :: folowed by the name of the variable ::x .

int x = 50;     //This variable here Called Global Variable because its out of the function.


void MyFunction() {
	int x = 100;   // This is local variable because it's in a function.
	cout << "The Variable In MyFunction is :" << x << endl;
}


//That is main() consider a function also.
int main()
{
	//Note: Lifetime:
	// It is created when the block or function containing it is executed,
	// and it is destroyed once the execution of that block or function ends.

	int x = 200;    // This is local variable because it's in a function.

	cout << "The Local variable is :" << x << endl;



	::x = ::x + 5;   // you must assign the value in a variable befor any edit on it



	//How can I call the Global Variable here you must use this sign :: foolwed by the name of the Global Variable like ::x
	cout << "The Global Variable is :" << ::x << endl;



	//called the function
	MyFunction();


	return 0;

}
