// #13 Problem

#include <iostream>
#include "MaherLib.h"

using namespace std;

bool Matrix_IsIdentity3x3(int Matrix[3][3], int Rows, int Cols) {

    

    for (int i = 0;i < Rows;i++) {
    
    
        for (int j = 0;j < Cols;j++) {
        
        
            if (i == j && Matrix[i][j] != 1) {
            
                return false;
            
            }
            else if(i != j && Matrix[i][j] != 0)
            {
            
                return false;
            
            }
        }

    }

    return true;
}
int main()
{


    int Matrix[3][3] = { {1,0,0},{0,1,0},{0,0,1} };


    
    if (Matrix_IsIdentity3x3(Matrix, 3, 3))
    {
        cout << "Yes, its identity Matrix \n";

    }
    else {
    
        cout << "No, its Not identity Matrix";
    
    }



}