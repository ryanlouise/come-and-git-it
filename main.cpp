#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, sumOfTwoNumbers, diff;
    cout << "hello i am ryan" << endl;

    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;

    sumOfTwoNumbers = firstNumber + secondNumber;
    diff = firstNumber - secondNumber;

    // Prints sum 
    cout << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers << endl;     
    cout << firstNumber << " - " <<  secondNumber << " = " << diff;     
    return 0;
}