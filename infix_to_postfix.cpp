#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;

// Function to determine operator precedence
int precedence(char op)
{
    // * and / have higher precedence
    if (op == '*' || op == '/')
        return 2;

    // + and - have lower precedence
    if (op == '+' || op == '-')
        return 1;

    // For brackets or other characters
    return 0;
}

// Function to convert infix expression to postfix
string infixTopostfix(string exp)
{
    // Stack to store operators
    stack<char> s;

    // String to store postfix expression
    string postfix = "";

    // Traverseto store postfix expression
    for (char ch : exp)
    {
        // If character is an operand
        // directly and it to postfix
        if (isalnum(ch))
        {
            postfix += ch;
        }

        // If opening bracket
        // Push it into stack
        else if (ch == '(')
        {
            s.push(ch);
        }

        // If closing bracket
        else if (ch == ')')
        {
            // pop operators until '(' is found
            while (!s.empty() && s.top() != '(')
            {
                postfix += s.top();
                s.pop();
            }

            // Remove '(' from stack
            if(!s.empty())
            s.pop();
        }

        // If character is an operator
        else
        {
            // Pop operators having higher
            // or equal precedence
            while (!s.empty() &&
            s.top() != '(' &&
             precedence(s.top()) >= precedence(ch))
            {
                postfix += s.top();
                s.pop();
            }

            // Push current operator
            s.push(ch);
        }
    }

    // Pop remaining operators from stack
    while (!s.empty())
    {
        postfix += s.top();
        s.pop();
    }

    // Return final postfix expression
    return postfix;
}

int main()
{
    // Infix expression
    string exp = "A+B*C";

    // Display infix expression
    cout << "Infix: " << exp << endl;

    // Convert and display postfix expression
    cout << "Postfix: " << infixTopostfix(exp) << endl;

    return 0;
}