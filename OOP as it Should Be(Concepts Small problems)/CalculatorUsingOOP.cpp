// #Project1 - Calculator Using OOP Concepts.

#include <iostream>
using namespace std;

class clsCalculator {

private: 

    int _CurrentNumber;
    int _TotalNumber;
    string _CurrentOperation = "Clear";
    float _PreviousResult = 0;

public:

    void Add(int Number) {
        _PreviousResult = _TotalNumber;

        _CurrentNumber = Number;
        _TotalNumber += Number;
        _CurrentOperation = "Adding";
    
    }
    void Subtract(int Number) {

        _PreviousResult = _TotalNumber;
        _CurrentNumber = Number;
  
        _TotalNumber -= Number;
        _CurrentOperation = "Subtracting";

    }
    void Multiply(int Number) {
        _PreviousResult = _TotalNumber;

        _CurrentOperation = "Mltiplying";
        _CurrentNumber = Number;
        _TotalNumber *= Number;
    
    }
    void Divide(int Number) {
        _CurrentOperation = "Dividing";

        if (Number == 0) {
            _CurrentNumber = 1;
            Number = 1;
        }
        else {
            _CurrentNumber = Number;
        }
    
        _PreviousResult = _TotalNumber;

        _TotalNumber /= Number;    
    }
    void Clear() {
        _CurrentOperation = "Clear";
        _PreviousResult = 0;

        _CurrentNumber = 0;
        _TotalNumber = 0;
    }

    float GetFinalResults()
    {
        return _TotalNumber;
    }
    void CancelLastOperation() {
    

        _CurrentOperation = "Canceling Last Operation";
    
        _CurrentNumber = 0;
    
        _TotalNumber = _PreviousResult;
    }





    void PrintResult() {
  
            cout << "After  " << _CurrentOperation <<"  " << _CurrentNumber << " The Result is : " << _TotalNumber << endl;
        
       
    }

};


int main()
{

    clsCalculator Calculator;
    Calculator.Clear();

    Calculator.Add(10);
    Calculator.PrintResult();

    Calculator.Add(20);
    Calculator.PrintResult();

    Calculator.Subtract(12);
    Calculator.PrintResult();

    Calculator.CancelLastOperation();
    Calculator.PrintResult();

    cout << endl << endl;


    Calculator.Divide(0);
    Calculator.PrintResult();


    Calculator.Multiply(2);
    Calculator.PrintResult();
    
    Calculator.Clear();
    Calculator.PrintResult();




}