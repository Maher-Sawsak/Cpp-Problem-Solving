// Map----OR---Dictionary.

#include <iostream>
#include <map>
using namespace std;
int main()
{
	//the time complixity for map is O(log n) and there is unsorted_map time cmplixity for it is O(1).
	map <string, int> Students; //noe this containing a pair which is key/index type and the value type;
	


	Students["Maher"] = 90;
	Students["Ali"] = 50;
	Students["Habib"] = 20;

	cout<<"\nThe Grade is " << Students["Maher"];
	cout<<"\nThe Grade is " << Students["Ali"];
	cout<<"\nThe Grade is " << Students["Habib"];

	cout << "\n\n\nPrinting all map values by ranged loop : \n";

	//i used pair to access the key and value and print it.
	for (const auto& pair : Students) {
	
		cout << "Student : " << pair.first << " Grade : " << pair.second << endl;
	
	}

	//find will return an iterator if return the end iterator mean not found if give us the iterator with address means found.
	string StudentName = "Ali";
	if (Students.find(StudentName) != Students.end()) {
		cout << endl << StudentName << "'s Grade is  :  " << Students[StudentName] << endl;
	}
	else {
	
		cout << "\nThe Student Not Found .\n";
	}





	//find will return an iterator if return the end iterator mean not found if give us the iterator with address means found.
	 StudentName = "Samar";
	if (Students.find(StudentName) != Students.end()) {
		cout << endl << StudentName << "'s Grade is  :  " << Students[StudentName] << endl;
	}
	else {

		cout << "\nThe Student Not Found .\n";
	}


}
