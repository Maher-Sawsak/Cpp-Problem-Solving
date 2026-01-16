// Print All Words From AAA To ZZZ

#include <iostream>
#include<string>
using namespace std;


void PrrintingAllPospilityOfLetters() {

	string word = " ";

	for (int i = 65;i <= 90;i++) {
	
	
		for (int k = 65; k <= 90;k++) {
		
		
			for (int j = 65;j <= 90;j++) {
			
				word = word + char(i);
				word = word + char(k);
				word = word + char(j);
				
				cout<<word << endl;

				word = " ";


			}
		
		
		}
	
	
	}


}
int main()
{

	PrrintingAllPospilityOfLetters();


	return 0;

}
