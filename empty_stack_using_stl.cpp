#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // Create a stack of Integers
    stack<int> s;

    // Check the stack before pushing elements
    if(s.empty())
    {
        cout << "stack is Empty" << endl;
    }
    else
    {
        cout <<  "Stack is not Empty" << endl;
    }

    // Push elements into the stack
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    // Check the stack after pushing elements

    if(s.empty())
    {
        cout << "stack is Empty" << endl;
    }
    else
    {
        cout << "stack is Not Empty" << endl;
    }

    return 0;
}

