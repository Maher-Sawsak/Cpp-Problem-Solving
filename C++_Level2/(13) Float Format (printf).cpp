// FloatFormat(printf)

#include <iostream>
using namespace std;

int main()
{

	float  Pi = 3.14673839;


	printf("You Number is : %f\n", Pi);

	printf("Your Number is %.2f \n: ", Pi);

	printf("Your Number is %0*f\n",15, Pi);


}