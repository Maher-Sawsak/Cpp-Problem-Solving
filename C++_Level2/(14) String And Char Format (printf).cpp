// StringAndCharFormat(printf)


#include <iostream>

//string its object andfunction printf is not supoort to print Object 
//and the string is array of character/.
//printf("Is that realu Your Uni %s !!!", Uni);   For This Reason is not working.


using namespace std;
int main()
{



	char Name[] = "Maher Sawsak";
	char Job[] = "Software Engineering";
	string Uni = "Ostim Teknik University";

	char a = 'S';

	printf("Hello %s ", Name);

	printf("Is That Really Your Job %s :", Job);




	printf("Your Letter is %*c :\n" , 0 , a);
	printf("Your Letter is %*c :\n", 2, a);
	printf("Your Letter is %*c :\n", 3 , a);
	printf("Your Letter is %*c :\n", 4 , a);
	printf("Your Letter is %*c :\n", 5, a);





}