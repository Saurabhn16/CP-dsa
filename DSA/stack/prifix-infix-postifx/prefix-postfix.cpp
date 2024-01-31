bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}
string preToPost(string prefix) {
   
std::stack<std::string> stack;

    // Read the prefix expression from right to left
    for (int i = 0; i < prefix.size(); i++) {
        char c = prefix[i];

        if (isOperator(c)) {
            // Pop the top two operands
            std::string operand1 = stack.top();
            stack.pop();
            std::string operand2 = stack.top();
            stack.pop();

            // Construct the infix expression
            std::string expression =  operand1 + c + operand2 + ;

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

