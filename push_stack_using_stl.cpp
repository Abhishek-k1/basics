#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // Create a stack of integers
    stack<int> s;

    // Push elements into the stack
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    // Display the top element
    cout << "Top element: " << s.top() << endl;

    return 0;
}