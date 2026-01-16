// Integer Format Using printf()
#include <iostream>

int main()
{


	int Number = 1;
	printf("The Number is : %d\n" , Number);

	int Number2 = 5;
	printf("The equation is %d + %d = : %d \n", Number, Number2, Number + Number2);

	//Width specification
	printf("The Number is %0*d :\n", 2, Number);
	printf("The Number is %0*d :\n", 3, Number);
	printf("The Number is %0*d :\n", 4, Number);
	printf("The Number is %0*d :\n", 5, Number);



}
