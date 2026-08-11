#include <iostream>
#include  <stack>
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

    // Display the number of elements
    cout << "Stack size: " << s.size() << endl;

    // Remove the top element
    s.pop();

    // Display the size after pop
    cout << "Stack size after pop: " << s.size() << endl;

    return 0;
}