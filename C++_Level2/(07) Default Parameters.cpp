//Default Parameters
/*Default Parameters : are a feature in C++ that allows you to specify a default value for one or more function parameters.
If an argument is omitted during a function call, 
the compiler automatically uses the default value provided in the function's declaration or definition.*/



#include <iostream>


int Sum(int a, int b, int c = 0, int d = 0, int h = 0) {

    return a + b + c + d + h;


}


int main()
{
    Sum(1, 2);
    Sum(1, 2, 3);
    Sum(1, 2, 3, 4);


    Sum(1 ,2, 3, 4, 5);
}
