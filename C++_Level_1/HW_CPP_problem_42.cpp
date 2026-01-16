//This homework for the lesson 42 in algorithms course level 1

#include <iostream>

int main()
{
	int Days, hours, Minutes, Seconds , TotalSeconds;

	using namespace std;
	 
		cout << " Please Enter The Days:  \n";

		cin >>Days ;
		cout << " Please Enter The hours:  \n";
		cin >>hours ;

	
		cout << " Please Enter The Minutes: \n";
		cin >>Minutes ;


	
		cout << " Please Enter The Seconds: \n";
		cin >> Seconds;



		TotalSeconds = Days * 24 * 60 * 60;


		TotalSeconds = TotalSeconds + (hours * 60 * 60);

		TotalSeconds = TotalSeconds + (Minutes * 60);

		TotalSeconds = TotalSeconds + (Seconds);
	

		cout << TotalSeconds << " Seconds";

		return 0;
}
