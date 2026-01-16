// Bitwise_And Operator.

#include <iostream>
using namespace std;
int main()
{
	//Why its Called Bitwise Because its Callcualted bit by bit for that Reason.


	//	Note(That Is In Logical Operator) :
	//    1 && 1 = 1
	//	1 && 0 = 0
	//	0 && 0 = 0

	 
	//How it work Bitwise Operator.
	// 
	//The Compiler Convert 12 To Binary and 25 TO Binary Also 
	//	Then it & 12 and 25 it will be like this 
	//	12 = 0 0 0 0 1 1 0 0
	//	&
	//	25 = 0 0 0 1 1 0 0 1
	//	---------------
	//	=    0 0 0 0 1 0 0 0  = 8(in decimal)



	cout <<"Bitwise Result is : " << (12 & 25);

  return 0;
}
