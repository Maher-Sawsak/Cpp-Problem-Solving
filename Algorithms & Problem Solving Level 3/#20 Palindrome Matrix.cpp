// #20 Problem.
//palindrome Matrix.

#include <iostream>
#include "MaherLib.h"

bool Matrix_isPalindrome3x3(int Matrix[3][3] , int Rows,int Cols) {


    for (int i = 0;i < Rows;i++) {
    
        for (int j = 0;j < Cols / 2; j++) {
        
            if (Matrix[i][j] != Matrix[i][Cols - 1 - j]) {
            
                return false;
            
            }
        }   
    }


    return true;

}




int main()
{

    int Matrix1[3][3] = {
        {1, 2, 1},  
        {5, 5, 5},  
        {7, 3, 7}   
    };

    int Matrix2[3][3] = {
{1, 2, 1},  
{5, 5, 5},  
{7, 3, 8}   
 };


    MyArrayLib::Matrix_PrintThreeByThree(Matrix1, 3, 3, 3);

    cout << endl;

    MyArrayLib::Matrix_PrintThreeByThree(Matrix2, 3, 3, 3);


    if (Matrix_isPalindrome3x3(Matrix1, 3, 3)) {
    
        cout << "\nYes, its Palindrome .\n";
    
    }
    else {
    
        cout << "\nNo , its not Palindrome . \n";
    }



    if (Matrix_isPalindrome3x3(Matrix2, 3, 3)) {

        cout << "\nYes, its Palindrome .\n";

    }
    else {

        cout << "\nNo , its not Palindrome . \n";
    }
}