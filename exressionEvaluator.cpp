#include <iostream>
#include <string>
using namespace std;

int evaluateExpression(string expression) {
    // Gets the position of the the first + in the expression
    int operatorIndex = expression.find("+");
    // Tests if there is a + in the expression (no index found)
    if (operatorIndex == string::npos) {
        // Converts expression (string to int) and returns it
        return stoi(expression);
    }

    // Splits the expression into the left and right side "<leftSide>+<rightSide>"
    string leftSide = expression.substr(0, operatorIndex);
    string rightSide = expression.substr(operatorIndex + 1, expression.length() - operatorIndex - 1);

    // Evaluates left side of the expression 
    int leftResult = evaluateExpression(leftSide);
    // Evaluates right side of the expression 
    int rightResult = evaluateExpression(rightSide);
    
    return leftResult + rightResult;
}

int main() {
    string expression;
    // Input user expression and evaluate it
    cin >> expression;
    cout << evaluateExpression(expression);
    return 0;
}