//// L_40_Arrays_with_function.cpp 
//
//
////That is will calculate the Average of grades
//#include <iostream>
//using namespace std;
//
//void ReadGradesProse (float grades[3]) {
//    
//    cout << "Please enter grade1 ?\n";
//    cin >> grades[0];
//
//    cout << "Please enter grade2 ?\n";
//    cin >> grades[1];
//
//    cout << "Please enter grade3 ?\n";
//    cin >> grades[2];
//}
//
//float AverageOfGrades(float grades[3])
//{
//  
// return  (grades[0] + grades[1] + grades[2]) / 3;
//}
//
//
//int main()
//{
//    float Grades[3];
//
//    ReadGradesProse(Grades);
//
//    cout << "*****************************\n";
//
//    cout <<"The Average og grades is " << AverageOfGrades(Grades);
//
//    return 0;
//}


#include <iostream>

using namespace std;

void ReadTheGrades(float x[3])
{
	cout << "Enter the grade 1 :\n";
	cin >> x[0];

	cout << "Enter the grade 2 :\n";
	cin >> x[1];

	cout << "Enter the grade 3 :\n";
	cin >> x[2];
};

float AverageOfGrade(float x[3])
{
	return (x[0] + x[1] + x[2]) / 3;

};


int main() {


	float x[3];
	ReadTheGrades(x);
cout<<	"The average of grades is :" << AverageOfGrade(x);


	return 0;


}

