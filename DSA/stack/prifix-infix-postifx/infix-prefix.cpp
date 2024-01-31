
#include <stack>
#include <string>

using namespace std;

int prec(char c) {
    if (c == '^') {
        return 3;
    } else if (c == '*' || c == '/') {
        return 2;
    } else if (c == '+' || c == '-') {
        return 1;
    } else {
        return -1;
    }
}

string infixToPostfix(string exp) {
    stack<char> st;
    string result;

    for (char c : exp) {
        if (isalnum(c)) {
            result += c;
        } else if (c == '(') {
            st.push(c);
        } else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                result += st.top();
                st.pop();
            }
            if (!st.empty() && st.top() == '(') {
                st.pop();
            } else {
                // Error: Unbalanced parentheses
                return "";
            }
        } else {
            while (!st.empty() && prec(st.top()) >= prec(c)) {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        if (st.top() == '(') {
            // Error: Unbalanced parentheses
            return "";
        }
        result += st.top();
        st.pop();
    }

    return result;
}
