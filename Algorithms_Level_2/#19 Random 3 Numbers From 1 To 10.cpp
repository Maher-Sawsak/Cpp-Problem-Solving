//Random 3 Numbers From 1 To 10

#include <iostream>
#include<cstdlib>

using namespace std;

int RandomNumberInRange(int From ,int To) {


	int RandomNumber = rand() % (To - From + 1) + From;

		return RandomNumber;
}



int main()
{
	
	srand((unsigned)time(NULL));


	cout << RandomNumberInRange(1, 10) << endl;

	return 0;

}
