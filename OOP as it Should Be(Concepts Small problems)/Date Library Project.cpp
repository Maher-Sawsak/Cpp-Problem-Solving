// Date Library Project.


#include <iostream>
#include"clsDate.h"
#include"clsString.h"
using namespace std;

void PrintSeparator(string Title) {
    cout << "\n__________________________________________________\n";
    cout << "\t\t" << Title << "\n";
    cout << "__________________________________________________\n";
}

int main() {
    // 1. ÇÎÊÈÇÑ ÇáÜ Constructors
    PrintSeparator("Testing Constructors");

    clsDate Date1; // Right now time i used the default constructor for it .
    cout << "Default Constructor (Today): " << Date1.DateToString() << endl;

    clsDate Date2("15/5/2024");
    cout << "String Constructor (15/5/2024): " << Date2.DateToString() << endl;

    clsDate Date3(70, 2024);
    cout << "Day Order Constructor (Day 70 of 2024): " << Date3.DateToString() << endl;

    clsDate Date4(20, 1, 2026);
    cout << "Explicit Constructor: " << Date4.DateToString() << endl;

    // 2. Date Info & Checks
    PrintSeparator("Date Info & Checks");

    cout << "Is Leap Year? " << (Date4.IsLeapYear() ? "Yes" : "No") << endl;
    cout << "Day Name: " << Date4.ConvertDayOfWeekOrderToDayName() << endl;
    cout << "Days in Current Month: " << Date4.NumberOfDaysInACurrentMonth() << endl;
    cout << "Is Weekend? " << (Date4.IsWeekEnd() ? "Yes" : "No") << endl;
    cout << "Is Business Day? " << (Date4.IsBusinessDay() ? "Yes" : "No") << endl;

    // 3.Testing Date Increase
    PrintSeparator("Testing Date Increase");

    Date4.IncreaseDateByOneDay();
    cout << "After One Day: " << Date4.DateToString() << endl;

    Date4.IncreaseDateByXDay(10);
    cout << "After 10 Days: " << Date4.DateToString() << endl;

    Date4.IncreaseDateByOneMonth();
    cout << "After One Month: " << Date4.DateToString() << endl;

    Date4.IncreaseDateByOneYear();
    cout << "After One Year: " << Date4.DateToString() << endl;

    Date4.IncreaseDateByOneDecade();
    cout << "After One Decade (10 Years): " << Date4.DateToString() << endl;

    // 4.Testing Date Decrease
    PrintSeparator("Testing Date Decrease");

    Date4.DecreaseDateByOneDay();
    cout << "Back One Day: " << Date4.DateToString() << endl;

    Date4.DecreaseDateByXDay(10);
    cout << "Back 10 Days: " << Date4.DateToString() << endl;

    Date4.DecreaseDateByOneYear();
    cout << "Back One Year: " << Date4.DateToString() << endl;

    // 5.Testing FormatDate
    PrintSeparator("Testing FormatDate");

    cout << "Default Format: " << Date4.FormatDate(Date4) << endl;
    cout << "Custom Format (yyyy/mm/dd): " << Date4.FormatDate(Date4, "yyyy/mm/dd") << endl;
    cout << "Custom Format (dd-mm-yyyy): " << Date4.FormatDate(Date4, "dd-mm-yyyy") << endl;

    // 6. Testing End Of Periods.
    PrintSeparator("End of Period Checks");

    cout << "Days until end of Week: " << Date4.DayUntilTheEndOfWeek() << endl;
    cout << "Days until end of Month: " << Date4.DayUntillTheEndOfMonth() << endl;
    cout << "Days until end of Year: " << Date4.DayUntillTheEndOfYear() << endl;

    // Testing Validation.
    PrintSeparator("Date Validity");

    clsDate InvalidDate(35, 13, 2024);
    cout << "Is (35/13/2024) Valid? " << (InvalidDate.IsValidDate() ? "Yes" : "No") << endl;
    cout << "Is " << Date4.DateToString() << " Valid? " << (Date4.IsValidDate() ? "Yes" : "No") << endl;

    cout << "\n\nTesting Finished Successfully!\n";
    system("pause>0");
    return 0;
}