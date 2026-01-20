
//I added this cuz its from c style and he think the time is not safe so ti skipe the warning i need to add this line here.
#pragma warning(disable : 4996)


#pragma once
#include <iostream>
#include<string>
#include<vector>
#include "clsString.h"

using namespace std;

class clsDate
{




	struct sDate {

		short Year;
		short Month;
		short Day;

	};

	short _Day;
	short _Month;
	short _Year;




public:

	enum enDateBeforAfterEqual { Befor = -1, Equal = 0, After = 1 };

	clsDate() {
	 
		time_t CurrentTime = time(0);

		tm* ltm = localtime(&CurrentTime);

		_Day = ltm->tm_mday;
		//i added One(1) cuz the month start from zero like array and vector just add one to get the correct month.
		_Month = ltm->tm_mon + 1;
		//because statr at 1900 so i need to add 1900 years to get current  year
		_Year = ltm->tm_year  + 1900;

	}
	
	clsDate(string Date) {
		vector <string> vDate;
		vDate = clsString::Split(Date,"/");
          
		_Day = stoi(vDate[0]);
		_Month = stoi(vDate[1]);
		_Year = stoi(vDate[2]);
		 
	}

	clsDate(int DayOrder,int Year) {

		clsDate Date = GetDateFromDayOrder(DayOrder, Year);
		_Day = Date.Day;
		_Month = Date.Month;
		_Year = Date.Year;
	
	}

	clsDate(short Day,short Month,short Year) {
	
		_Day = Day;
		_Month = Month;
		_Year = Year;
	}

	//-----
	void SetDay(short Day){
	
		_Day = Day;
	}
	short GetDay() {
		return _Day;
	}

	__declspec(property(get = GetDay, put = SetDay)) short Day;

	//---
	void SetMonth(short Month) {
		_Month = Month;
	}

	short GetMonth() {
		return _Month;
	}
	__declspec(property(get = GetMonth, put = SetMonth)) short Month;

	//----
	void SetYear(short Year) {
	
		_Year = Year;
	}
	short GetYear() 
	{
		return _Year;
	}
	__declspec(property(get = GetYear, put = SetYear)) short Year;



	//look what happed when we use __declspec(property())short Year; 
	//first thing when we want to use for Example : GetDay(); we replace it with Day so now if we call Day alone
	// it wiil do the same as GetDay() , and if we want to call SetDay(..) it will tale a paramete so we replace it with
	//Day = .... ; like that. and this onlu in visual studio compiler just not in C++ dont mix it up remember that pls.
	
	static void Print(clsDate Date) {
		cout << Date.Day << "/" << Date.Month << "/" << Date.Year;
	}

	void Print() {
		return Print(*this);
	}



	static bool isLeapYear(short Year)
	{
		// if year is divisible by 4 AND not divisible by 100
		// OR if year is divisible by 400
		// then it is a leap year
		return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
	}
	bool IsLeapYear() {
	
		return isLeapYear(_Year);
	}

	static short NumberOfDaysInACurrentMonth(short Month, short Year)
	{
		if (Month < 1 || Month > 12)
			return 0;

		int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
		return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
	}

	short NumberOfDaysInACurrentMonth() {
		return NumberOfDaysInACurrentMonth(_Month, _Year);
	}

	static clsDate GetDateFromDayOrder(short DayOrder, short Year) {
		clsDate Date;
		short RemainingDays = DayOrder;
		short MonthDays = 0;

		Date.Year = Year;
		Date.Month = 1;

		while (true) {
			MonthDays = NumberOfDaysInACurrentMonth(Date.Month, Year);

			if (RemainingDays > MonthDays) {
				RemainingDays -= MonthDays;
				Date.Month++;
			}
			else {
				Date.Day = RemainingDays;
				break;
			}
		}

		return Date;
	}

	void GetDateByDayOrderInSameYear(short DayOrder) {
		//*this means the current object we are using right now. 
	* this = GetDateFromDayOrder(DayOrder, _Year);
	}

	static string DateToString(clsDate Date, char Seperator = '/') {


		return to_string(Date.Day) + Seperator + to_string(Date.Month) + Seperator + to_string(Date.Year);
	}

	string DateToString() {
		return DateToString(*this, '/');
	}

	static short NumberOfDaysFromTheBeginningOfTheYear(short Day, short Month, short Year)
	{
		short TotalDays = 0;
		for (int i = 1; i <= Month - 1; i++)
		{
			TotalDays += NumberOfDaysInACurrentMonth(i, Year);
		}
		TotalDays += Day;
		return TotalDays;
	}

	short NumberOfDaysFromTheBeginningOfTheYear() {
	
		return NumberOfDaysFromTheBeginningOfTheYear(_Day, _Month, _Year);
	}


	static bool IsLastMonth(short Month) {

		return(Month == 12);

	}

	bool IsLastMonth() {
		return IsLastMonth(_Month);
	}



	static bool IsLastDayInMonth(clsDate Date) {

		return(Date.Day == NumberOfDaysInACurrentMonth(Date.Month, Date.Year));

	}

	bool IsLastDayInMonth() {
		return IsLastDayInMonth(*this);
	}


	static bool IsDate1BeforDate2(clsDate Date1, clsDate Date2) {

		return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? ((Date1.Month < Date2.Month) ? true : ((Date1.Month == Date2.Month) ? (Date1.Day < Date2.Day) : false)) : false);
	}

	bool IsDateBeforDate2(clsDate Date2) {
		return IsDate1BeforDate2(*this, Date2);
	}

	static bool IsDate1EqualToDate2(clsDate Date1, clsDate Date2) {
		return (Date1.Year == Date2.Year ? (Date1.Month == Date2.Month ? (Date1.Day == Date2.Day ? true : false) : false) : false);
	}

	bool IsDate1EqualToDate2(clsDate Date2) {
		return IsDate1EqualToDate2(*this, Date2);
	}


	static clsDate IncreaseDateByOneDay(clsDate Date) {

		if (IsLastDayInMonth(Date)) {
			if (IsLastMonth(Date.Month)) {
				Date.Day = 1;
				Date.Month = 1;
				Date.Year++;
			}
			else {

				Date.Day = 1;
				Date.Month += 1;


			}
		}
		else {
			Date.Day += 1;
		}
		return Date;
	}



	void IncreaseDateByOneDay() {
		*this = IncreaseDateByOneDay(*this);
	}

	static int CalculateTheDifferenceD1Smaller(clsDate Date1, clsDate Date2, bool includeEndDay = false) {

		short counter = 0;

		while (IsDate1BeforDate2(Date1, Date2)) {

			Date1 = IncreaseDateByOneDay(Date1);
			counter++;

		}
		return includeEndDay ? ++counter : counter;
	}


	int CalculateDifferenceBetweenD1AndD2(clsDate Date2, bool includeEndDay = false) {
	
		return CalculateTheDifferenceD1Smaller(*this, Date2, includeEndDay);
	}

	static clsDate GetSystemDate(clsDate RightNowDate) {

		

		time_t t = time(0);
		tm* now = localtime(&t);


		//cuz year start from 1900 so we add 1900 to the result.
		RightNowDate.Year = now->tm_year + 1900;
		//Mont Start From Zero So we add one to it
		RightNowDate.Month = now->tm_mon + 1;

		RightNowDate.Day = now->tm_mday;

		return RightNowDate;

	}

	void GetSystemDate() {
	
		*this = GetSystemDate(*this);
	
	}



	static bool IsFirstDayInMonth(clsDate Date) {

		return Date.Day == 1;
	}


	bool IsFirstDayInMonth() {
	
		return IsFirstDayInMonth(*this);
	}

	static bool IsFirstMonthInYear(clsDate Date) {

		return Date.Month == 1;

	}

	bool IsFirstMonthInYear() {
		return IsFirstMonthInYear(*this);
	}


	static bool IsDate1AfterDate2(clsDate Date1, clsDate Date2) {
		return (!IsDate1BeforDate2(Date1, Date2) && !IsDate1EqualToDate2(Date1, Date2));
	}

	bool  IsDateAfterDate2(clsDate Date2) {
		return IsDate1AfterDate2(*this,Date2);
	}


	static clsDate DecreaseDateByOneDay(clsDate Date) {

		if (IsFirstDayInMonth(Date)) {
			if (IsFirstMonthInYear(Date)) {

				Date.Month = 12;
				Date.Day = NumberOfDaysInACurrentMonth(Date.Month, Date.Year);
				Date.Year--;
			}
			else {

				Date.Month -= 1;
				Date.Day = NumberOfDaysInACurrentMonth(Date.Month, Date.Year);

			}
		}
		else {
			Date.Day -= 1;
		}
		return Date;
	}

	void DecreaseDateByOneDay() {
		*this = DecreaseDateByOneDay(*this);
	}

	static void SwapDates(clsDate& Date1, clsDate& Date2) {

		clsDate TempDate;
		//We can doit directly like tempdate = date1 but for training i dont want right now.


		TempDate.Day = Date1.Day;
		TempDate.Month = Date1.Month;
		TempDate.Year = Date1.Year;

		Date1.Day = Date2.Day;
		Date1.Month = Date2.Month;
		Date1.Year = Date2.Year;

		Date2.Day = TempDate.Day;
		Date2.Month = TempDate.Month;
		Date2.Year = TempDate.Year;

	}


	void SwapDates(clsDate& Date2) {
		SwapDates(*this, Date2);
	}


	static clsDate IncreaseDateByXDay(clsDate Date, int XDay) {

		for (int i = 0;i < XDay;i++) {

			Date = IncreaseDateByOneDay(Date);

		}
		return Date;
	}

	void IncreaseDateByXDay(int	XDay) {
	
		*this = IncreaseDateByXDay(*this, XDay);
	
	}

	static clsDate IncreaseDateByOneWeek(clsDate Date) {

		Date = IncreaseDateByXDay(Date, 7);
		return Date;
	}

	void IncreaseDateByOneWeek() {
	
		*this = IncreaseDateByOneWeek(*this);
	}


	static clsDate IncreaseDateByXWeek(clsDate Date, int xWeek) {


		for (int i = 0;i < xWeek;i++) {
			Date = IncreaseDateByOneWeek(Date);

		}
		return Date;

	}

	void IncreaseDateByXWeek(int xWeek) {
	
		*this = IncreaseDateByXWeek(*this, xWeek);
	}

	//-------------------------------------------------

	static clsDate IncreaseDateByOneMonth(clsDate Date) {


		if (Date.Month == 12) {
			Date.Month = 1;
			Date.Year++;
		}
		else {
			Date.Month++;

		}

		short NumberOfDaysInTheCurrentMonth = NumberOfDaysInACurrentMonth(Date.Month, Date.Year);
		if (Date.Day > NumberOfDaysInTheCurrentMonth) {


			Date.Day = NumberOfDaysInTheCurrentMonth;
		}
		return Date;
	}
	
	void IncreaseDateByOneMonth() {
		*this = IncreaseDateByOneMonth(*this);
	}


	static clsDate IncreaseDateByXMonth(clsDate Date, short xMonth) {

		for (int i = 0; i < xMonth;i++) {
			Date = IncreaseDateByOneMonth(Date);
		}
		return Date;
	}
	 
	void IncreaseDateByXMonth(short xMonth) {
	
		*this = IncreaseDateByXMonth(*this, xMonth);
	}

	static clsDate IncreaseDateByOneYear(clsDate Date) {

		Date.Year++;

		if (Date.Month == 2 && Date.Day == 29 && !isLeapYear(Date.Year)) {
			Date.Day = 28;
		}

		return Date;

	}
	 
	void IncreaseDateByOneYear() {
	
		*this = IncreaseDateByOneYear(*this);
	}

	static clsDate IncreaseDateByXYear(clsDate Date, short xYear) {

		for (int i = 0;i < xYear;i++) {

			Date = IncreaseDateByOneYear(Date);

		}
		return Date;
	}
	
	void IncreaseDateByXYear(short xYear) {
		*this = IncreaseDateByXYear(*this,xYear);
	}

	static clsDate IncreaseDateByXYearFaster(clsDate Date, short xYear) {

		Date.Year += xYear;

		if (Date.Month == 2 && Date.Day == 29 && !isLeapYear(Date.Year)) {
			Date.Day = 28;
		}
		return Date;

	}
	
	void IncreaseDateByXYearFaster(short xYear) {
	
		*this = IncreaseDateByXYearFaster(*this, xYear);
	}

	static clsDate IncreaseDateByOneDecade(clsDate Date) {
		//Decade is equal to 10 years alaqed in arabic.

		Date = IncreaseDateByXYear(Date, 10);

		return Date;

	}
	
	void IncreaseDateByOneDecade() {
	
		*this = IncreaseDateByOneDecade(*this);
	}

	static clsDate IncreaseDateByXDecade(clsDate Date, short xDecade) {

		for (int i = 0;i < xDecade;i++) {

			Date = IncreaseDateByOneDecade(Date);

		}
		return Date;
	}
	 
	void IncreaseDateByXDecade(short xDecade) {
		*this = IncreaseDateByXDecade(*this, xDecade);
	}

	static clsDate IncreaseDateByXDecadeFaster(clsDate Date, short xDecade) {

		Date.Year += xDecade * 10;


		if (Date.Month == 2 && Date.Day == 29 && !isLeapYear(Date.Year)) {
			Date.Day = 28;
		}

		return Date;

	}
	 
	void IncreaseDateByXDecadeFaster(short xDecade) {
	
		*this = IncreaseDateByXDecadeFaster(*this, xDecade);
	}

	static clsDate IncreaseDateByOneCentury(clsDate Date) {
		//One Century is eequal to a hundred years.

		Date = IncreaseDateByXDecadeFaster(Date, 10);

		return Date;
	}
	 
	void IncreaseDateByOneCentury() {
		*this = IncreaseDateByOneCentury(*this);
	}

	static clsDate IncreaseDateByOneMillennium(clsDate Date) {
		//One Millennium Is Equal To A Thousand Years.

		for (int i = 0;i < 10;i++) {

			Date = IncreaseDateByOneCentury(Date);
		}

		return Date;
	}

	void IncreaseDateByOneMillennium() {
	
		*this = IncreaseDateByOneMillennium(*this);
	}

	//------

	static clsDate DecreaseDateByXDay(clsDate Date, int XDay) {

		for (int i = 0;i < XDay;i++) {

			Date = DecreaseDateByOneDay(Date);

		}
		return Date;
	}

	void DecreaseDateByXDay(int xDay) {
		*this = DecreaseDateByXDay(*this,xDay);
	}

	static clsDate DecreaseDateByOneWeek(clsDate Date) {

		Date = DecreaseDateByXDay(Date, 7);
		return Date;
	}
	
	void DecreaseDateByOneWeek() {
		*this = DecreaseDateByOneWeek(*this);
	}

	static clsDate DecreaseDateByXWeek(clsDate Date, int xWeek) {


		for (int i = 0;i < xWeek;i++) {
			Date = DecreaseDateByOneWeek(Date);

		}
		return Date;

	}

	void DecreaseDateByXWeek(int xWeek) {
		*this = DecreaseDateByXWeek(*this,xWeek);
	}

	static clsDate DecreaseDateByOneMonth(clsDate Date) {


		if (Date.Month == 1) {
			Date.Month = 12;
			Date.Year--;
		}
		else {
			Date.Month--;

		}

		short NumberOfDaysInTheCurrentMonth = NumberOfDaysInACurrentMonth(Date.Month, Date.Year);
		if (Date.Day > NumberOfDaysInTheCurrentMonth) {


			Date.Day = NumberOfDaysInTheCurrentMonth;
		}
		return Date;
	}
	
	void  DecreaseDateByOneMonth() {
		*this = DecreaseDateByOneMonth(*this);
	}

	static clsDate DecreaseDateByXMonth(clsDate Date, short xMonth) {

		for (int i = 0; i < xMonth;i++) {
			Date = DecreaseDateByOneMonth(Date);
		}
		return Date;
	}

	void DecreaseDateByXMonth (short xMonth) {
		*this = DecreaseDateByXMonth(*this,  xMonth);
	}

	static clsDate DecreaseDateByOneYear(clsDate Date) {

		Date.Year--;

		if (Date.Month == 2 && Date.Day == 29 && !isLeapYear(Date.Year)) {
			Date.Day = 28;
		}

		return Date;

	}
	
	void DecreaseDateByOneYear() {
		*this = DecreaseDateByOneYear(*this);
	}

	static clsDate DecreaseDateByXYear(clsDate Date, short xYear) {

		for (int i = 0;i < xYear;i++) {

			Date = DecreaseDateByOneYear(Date);

		}
		return Date;
	}

	void DecreaseDateByXYear(short xYear) {
		*this = DecreaseDateByXYear(*this, xYear);
	}

	static clsDate DecreaseDateByXYearFaster(clsDate Date, short xYear) {

		Date.Year -= xYear;

		if (Date.Month == 2 && Date.Day == 29 && !isLeapYear(Date.Year)) {
			Date.Day = 28;
		}
		return Date;

	}
	
	void DecreaseDateByXYearFaster(short xYear) {
		*this = DecreaseDateByXYearFaster(*this, xYear);
	}

	static clsDate DecreaseDateByOneDecade(clsDate Date) {
		//Decade is equal to 10 years alaqed in arabic.

		Date = DecreaseDateByXYearFaster(Date, 10);

		return Date;

	}

	void DecreaseDateByOneDecade() {
		*this = DecreaseDateByOneDecade(*this);
	}

	static clsDate DecreaseDateByXDecade(clsDate Date, short xDecade) {

		for (int i = 0;i < xDecade;i++) {

			Date = DecreaseDateByOneDecade(Date);

		}
		return Date;
	}

	void DecreaseDateByXDecade(short xDecade) {
		*this = DecreaseDateByXDecade(*this, xDecade);
	}

	static clsDate DecreaseDateByXDecadeFaster(clsDate Date, short xDecade) {

		Date.Year -= xDecade * 10;


		if (Date.Month == 2 && Date.Day == 29 && !isLeapYear(Date.Year)) {
			Date.Day = 28;
		}

		return Date;

	}
	
	void DecreaseDateByXDecadeFaster(short xDecade) {
		*this = DecreaseDateByXDecadeFaster(*this, xDecade);
	}

	static clsDate DecreaseDateByOneCentury(clsDate Date) {
		//One Century is eequal to a hundred years.

		Date = DecreaseDateByXDecadeFaster(Date, 10);

		return Date;
	}
	
	void DecreaseDateByOneCentury() {
		*this = DecreaseDateByOneCentury(*this);
	}

	static clsDate DecreaseDateByOneMillennium(clsDate Date) {
		//One Millennium Is Equal To A Thousand Years.

		for (int i = 0;i < 10;i++) {

			Date = DecreaseDateByOneCentury(Date);
		}

		return Date;

	}

	void DecreaseDateByOneMillennium() {
		*this = DecreaseDateByOneMillennium(*this);
	}

	//-------

	static short DayOfWeekOrder(short Day, short Month, short Year) {


		short a, y, m;
		a = (14 - Month) / 12;
		y = Year - a;
		m = Month + (12 * a) - 2;
		//Gregorian:
		//0:sun , 1:Mon,2:Tue..etc.
		return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
	}

	short DayOfWeekOrder() {
	
		return clsDate::DayOfWeekOrder(_Day, _Month, _Year);
	}

	static short DayOfWeekOrder(clsDate Date) {

		return(DayOfWeekOrder(Date.Day, Date.Month, Date.Year));

	}

	//-------

	static string ConvertDayOfWeekOrderToDayName(short GregorianIndex) {

		string Days[7] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };

		return Days[GregorianIndex];

	}

	string  ConvertDayOfWeekOrderToDayName() {
	
		return ConvertDayOfWeekOrderToDayName(DayOfWeekOrder(*this));
	
	}

	static bool IsEndOfWeek(clsDate Date) {

		return DayOfWeekOrder(Date) == 6;

	}

	bool IsEndOfWeek() {
	
		return IsEndOfWeek(*this);
	}

	static bool IsWeekEnd(clsDate Date) {

		short IndexDay = DayOfWeekOrder(Date);
		return (IndexDay == 5 || IndexDay == 6);
	}

	bool IsWeekEnd() {
		return IsWeekEnd(*this);
	
	}

	static bool IsBusinessDay(clsDate Date) {

		return!IsWeekEnd(Date);
	}

	bool IsBusinessDay() {
		return IsBusinessDay(*this);
	}

	static short DayUntillTheEndOfWeek(clsDate Date) {

		return (6 - DayOfWeekOrder(Date));

	}

	short DayUntilTheEndOfWeek() {
	
		return DayUntillTheEndOfWeek(*this);

	}


	static short DayUntillTheEndOfMonth(clsDate Date) {

		clsDate EndOfMonthDate;

		EndOfMonthDate.Day = NumberOfDaysInACurrentMonth(Date.Month, Date.Year);
		EndOfMonthDate.Month = Date.Month;
		EndOfMonthDate.Year = Date.Year;

		return CalculateTheDifferenceD1Smaller(Date, EndOfMonthDate, true);

	}

	short DayUntillTheEndOfMonth() {
		return DayUntillTheEndOfMonth(*this);
	}

	static short DayUntillTheEndOfYear(clsDate Date) {

		short NumberOfDayFromBiginning = NumberOfDaysFromTheBeginningOfTheYear(Date.Day, Date.Month, Date.Year);

		short DaysInYear = isLeapYear(Date.Year) ? 366 : 365;
		return ++DaysInYear - NumberOfDayFromBiginning;

	}

	short DayUntillTheEndOfYear() {
		return DayUntillTheEndOfYear(*this);
	}

	static short CalculateVacationDays(clsDate Date, clsDate Date2) {

		short DaysCounter = 0;
		while (IsDate1BeforDate2(Date, Date2)) {

			if (IsBusinessDay(Date)) {

				DaysCounter++;
			}
			Date = IncreaseDateByOneDay(Date);
		}
		return DaysCounter;
	}

	short CalculateVacationDays(clsDate DateOfEndVacation) {
		return CalculateVacationDays(*this, DateOfEndVacation);
	}

	clsDate CalculateVacationReturnDate(clsDate Date, short VacationDays) {


		// Calculates return date excluding weekends.
		// Note: The first while loop is to ensure we start counting from a workday (Input Sanitization),
		// although the logic works without it, it's better for separation of concerns.
		short WeekendCounter = 0;
		while (IsWeekEnd(Date)) {

			Date = IncreaseDateByOneDay(Date);
		}
		for (int i = 0;i < VacationDays + WeekendCounter;i++) {


			if (IsWeekEnd(Date)) {

				WeekendCounter++;
			}
			Date = IncreaseDateByOneDay(Date);

		}

		while (IsWeekEnd(Date)) {

			Date = IncreaseDateByOneDay(Date);
		}
		return Date;
	}

	void SetNewDateVacationDate(short VacationDays) {
	
		*this = CalculateVacationReturnDate(*this, VacationDays);
	
	}

	static enDateBeforAfterEqual CompareDates(clsDate Date1, clsDate Date2) {
		//Two Solution For it one is more readable its the second one.

		/*

		return(IsDate1BeforDate2(Date1, Date2) ? enDateBeforAfterEqual::Befor :
		IsDate1AfterDate2(Date1, Date2) ? enDateBeforAfterEqual::After : enDateBeforAfterEqual::Equal);
		*/

		if (IsDate1BeforDate2(Date1, Date2))
			return enDateBeforAfterEqual::Befor;

		if (IsDate1EqualToDate2(Date1, Date2))
			return enDateBeforAfterEqual::Equal;


		return enDateBeforAfterEqual::After;



	}

	enDateBeforAfterEqual GetEnumCompareDates(clsDate Date2) {
	
	
		return CompareDates(*this, Date2);
	
	}

	static bool IsValidDate(clsDate Date) {

		return !(Date.Day <= 0 || (Date.Month > 12 || Date.Month <= 0) || (Date.Year <= 0) || (Date.Day > NumberOfDaysInACurrentMonth(Date.Month, Date.Year)));

	}

	bool IsValidDate() {
		return IsValidDate(*this);
	}

	static string FormatDate(clsDate Date, string Format = "dd/mm/yyyy") {
		Format = clsString::ReplaceWord(Format, "dd", to_string(Date.Day));
		Format = clsString::ReplaceWord(Format, "mm", to_string(Date.Month));
		Format = clsString::ReplaceWord(Format, "yyyy", to_string(Date.Year));

		return Format;
	}
	
	string FormatDate(string Format = "dd/mm/yyyy") {
	
		return FormatDate(*this, Format);

	}





};

