#include <iostream>
#include "clsInputValidate.h"
#include "clsDate.h"
#include "clsString.h"

using namespace std;

int main() {
    cout << "--- Testing Number Range ---" << endl;
    cout << "Is 5 between 1 and 10? " << (clsInputValidate::IsNumberBetween(5, 1, 10) ? "Yes" : "No") << endl;
    cout << "Is 15 between 1 and 10? " << (clsInputValidate::IsNumberBetween(15, 1, 10) ? "Yes" : "No") << endl;

    cout << "Is 5.5 between 1.1 and 10.1? " << (clsInputValidate::IsNumberBetween(5.5, 1.1, 10.1) ? "Yes" : "No") << endl;

    cout << "\n-----------------------------\n";

    cout << "--- Testing Date Range ---" << endl;
    clsDate Date(20, 1, 2026);
    clsDate StartDate(1, 1, 2026);
    clsDate EndDate(30, 1, 2026);

    cout << "Is 20/1/2026 between 1/1 and 30/1? "
        << (clsInputValidate::IsDateBetween(Date, StartDate, EndDate) ? "Yes" : "No") << endl;

    cout << "Testing Auto-Swap (End before Start): "
        << (clsInputValidate::IsDateBetween(Date, EndDate, StartDate) ? "Yes" : "No") << endl;

    cout << "\n-----------------------------\n";

    cout << "--- Testing Interactive Input ---" << endl;

    int IntNum = clsInputValidate::ReadIntNumber("Please enter an integer: ", "Invalid! Try again: ");
    cout << "You entered: " << IntNum << endl;

    int RangeNum = clsInputValidate::ReadIntNumberBetween(1, 100, "Out of range! ", "Enter a number between 1 and 100: ");
    cout << "You entered in range: " << RangeNum << endl;

    double DblNum = clsInputValidate::ReadDblNumber("Enter a double number: ", "Invalid double! ");
    cout << "You entered double: " << DblNum << endl;

    cout << "\n-----------------------------\n";

    cout << "Checking if Date is valid (31/2/2022): "
        << (clsInputValidate::IsValidDate(clsDate(31, 2, 2022)) ? "Valid" : "Invalid") << endl;

    return 0;
}