#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, sumOfTwoNumbers, diff , product, mod;
    cout << "hello i am ryan" << endl;

    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;

    sumOfTwoNumbers = firstNumber + secondNumber;
    diff = firstNumber - secondNumber;
    product = firstNumber * secondNumber;
    mod = firstNumber % secondNumber;

    // Prints sum 
    cout << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers << endl;  
    cout << firstNumber << " * " <<  secondNumber << " = " << product << endl;    
    cout << firstNumber << " % " <<  secondNumber << " = " << mod << endl;      
    cout << firstNumber << " - " <<  secondNumber << " = " << diff;     
    cout << endl << "thhheee eennnddd";
    return 0;
}