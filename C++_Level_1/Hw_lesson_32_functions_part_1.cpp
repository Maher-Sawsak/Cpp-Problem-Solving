// Hw_lesson_32_functions_part_1.cpp 


#include <iostream>
using namespace std;



//I display four function in the first then I called it in the main code.
void DisplayMyCardInfo() {



		cout << "*******************\n";

		cout << "Name: Maher Sawsak.\n";

		cout << "Age :21 years.\n";

		cout << "City : Ankara.\n";

		cout << "Country : Turkey.\n";

		cout << "*******************\n\n";
}

void PrintSquareStars() {

	cout << "**********\n";

	cout << "**********\n";

	cout << "**********\n";

	cout << "**********\n";
}


void PrintILoveProgramming() {

	cout << "I Love Programming!\n\n";

	cout << "I promise to be the best developer ever!\n\n";

	cout << "I know it will take some time to practice, but I will achieve my goal.\n\n";

	cout << "Best Regards.\n";

	cout << "Maher Sawsak.\n";
}

void PrintH() {

	cout << "*   *\n";
	cout << "*   *\n";
	cout << "*****\n";
	cout << "*   *\n";
	cout << "*   *\n";
}




//every thing in the int main is a function i created befor and in the main just I callde it.

int main()
{


	DisplayMyCardInfo();

	PrintSquareStars();

	PrintILoveProgramming();

	PrintH();




	return 0;
}
