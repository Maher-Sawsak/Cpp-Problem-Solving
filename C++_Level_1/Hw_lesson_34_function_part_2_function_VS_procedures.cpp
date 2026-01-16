// Hw_lesson_34_function_part_2_function_VS_procedures.cpp



#include <iostream>
using namespace std;

	void My_sum_procedures() {
	
		int Num1, Num2;
		
		cout << "Please Enter Number1 ? ";
		cin >> Num1;
		
		cout << "Please enter Number2 ? ";
		cin >> Num2;

		cout << Num1 + Num2;
	}


	int My_sum_function() {
	
		
		int Num3, Num4;
		
		cout << "Please enter Number1 ?";
		cin >> Num3;
	

		cout << "Please enter Number2 ?";
		cin >> Num4;
		

		return   Num3 + Num4;
	}

int main()
{
  

	  My_sum_procedures() ,  cout << endl ;

	 cout<<  My_sum_function();
	
	
	return 0;

}