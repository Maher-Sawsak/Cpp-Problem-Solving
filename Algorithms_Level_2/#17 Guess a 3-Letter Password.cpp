//Guess a 3 - Letter Password


#include <iostream>
using namespace std;

string ReadLetter(string Message) {

	string Password;
	cout << Message << endl;
	cin >> Password;

	return Password;
}


bool CheckTrainPassword(string Password) {

	string word = "";int counter = 0;

	for (int i = 65;i <= 90;i++) {

		for (int k = 65;k <= 90;k++) {
	
	
			for (int j = 65;j <= 90;j++) {
			
				word = word + char(i);
				word = word + char(k);
				word = word + char(j);
				counter++;
				cout <<"Trial [" <<counter <<"] " << word << endl;
			
				if (word == Password) {
				
					cout << "\nPassword is " << word << endl;

					cout << "Found after " << counter << " Trial(s)\n";

					return true;
				}
				
					word = "";
				

			}
	}
}

	return false;
}


int main()
{
	CheckTrainPassword(ReadLetter("Please Enter The Password :"));
	return 0;
}