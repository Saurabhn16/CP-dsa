#include <iostream>
#include <stack>
#include <string>

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

std::string postfixToPrefix(const std::string& postfix) {
    std::stack<std::string> stack;

    // Read the postfix expression from left to right
    for (char c : postfix) {
        if (isOperator(c)) {
            // Pop the top two operands
            std::string operand2 = stack.top();
            stack.pop();
            std::string operand1 = stack.top();
            stack.pop();

            // Construct the prefix expression
            std::string expression = c + operand1 + operand2;

            // Push the prefix expression onto the stack
            stack.push(expression);
        } else {
            // Current character is an operand
            stack.push(std::string(1, c));
        }
    }

    // The stack should contain the final prefix expression
    return stack.top();
}

std::string prefixToInfixConversion(const std::string& prefix) {
    std::stack<std::string> stack;

    // Read the prefix expression from right to left
    for (int i = prefix.size() - 1; i >= 0; i--) {
        char c = prefix[i];

        if (isOperator(c)) {
            // Pop the top two operands
            std::string operand1 = stack.top();
            stack.pop();
            std::string operand2 = stack.top();
            stack.pop();

            // Construct the infix expression
            std::string expression = "(" + operand1 + c + operand2 + ")";

            // Push the infix expression onto the stack
            stack.push(expression);
        } else {
            // Current character is an operand
            stack.push(std::string(1, c));
        }
    }

    // The stack should contain the final infix expression
    return stack.top();
}

std::string postToInfix(const std::string& postfix) {
    std::string prefix = postfixToPrefix(postfix);
    std::string infix = prefixToInfixConversion(prefix);
    return infix;
}