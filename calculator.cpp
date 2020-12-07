#include <iostream>
using namespace std;

// Adds two numbers and prints the equasion and result
void add(int firstNumber, int secondNumber) {
    int result = firstNumber + secondNumber;
    // Clears terminal and prints equasion
    system("CLS");
    cout << firstNumber << " + " <<  secondNumber << " = " << result;
    return;
}

// Substracts two numbers and prints the equasion and result
void substract(int firstNumber, int secondNumber) {
    int result = firstNumber - secondNumber;
    // Clears terminal and prints equasion
    system("CLS");
    cout << firstNumber << " - " <<  secondNumber << " = " << result;
    return;
}

// Multiplies two numbers and prints the equasion and result
void multiply(int firstNumber, int secondNumber) {
    int result = firstNumber * secondNumber;
    // Clears terminal and prints equasion
    system("CLS");
    cout << firstNumber << " * " <<  secondNumber << " = " << result;
    return;
}

// Divides two integers and prints the equasion, result and remainder (Euclidean division)
void divide(int firstNumber, int secondNumber) {
    int result = firstNumber / secondNumber;
    int remainder = firstNumber % secondNumber;
    // Clears terminal and prints equasion and remainder
    system("CLS");
    cout << firstNumber << " / " <<  secondNumber << " = " << result;
    cout << "\nRemainder = " << remainder;
    return;
}

int main() {
    int firstNumber;
    int secondNumber;
    
    // Clears terminal and asks user for two input integers
    system("CLS");
    cout << "Enter the first integer: ";
    cin >> firstNumber;
    cout << "Enter the second integer: ";
    cin >> secondNumber;

    // Clears terminal and asks user for operator and stores it in operator variable
    system("CLS");
    cout << "- List of operators -\n";
    cout << "Press 0 for exit\n";
    cout << "Press + for addition \n";
    cout << "Press - for subtraction\n";
    cout << "Press * for multiplication\n";
    cout << "Press / for division\n";
    cout << "Which operation would you like to perform?\n";
    
    char operation;
    cin >> operation;

    // Switches case according to the operator character (+, -, *, /)
    switch(operation) {
        case '+':
        add(firstNumber, secondNumber);
        break;

        case '-':
        substract(firstNumber, secondNumber);
        break;

        case '*':
        multiply(firstNumber, secondNumber);
        break;

        case '/':
        divide(firstNumber, secondNumber);
        break;

        case '0':
        exit(0);
        break;
    }
}