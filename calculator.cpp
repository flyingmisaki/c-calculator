#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber, sumOfTwoNumbers;
    
    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;

    sumOfTwoNumbers = firstNumber + secondNumber;

    // Prints sum 
    cout << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers;     

    return 0;
}