#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // Create two stacks
    stack<int> s1;
    stack<int> s2;

    // Push elements into the first stack
    s1.push(10);
    s1.push(20);
    s1.push(30);

    // Push elements into the second stack
    s2.push(40);
    s2.push(50);
    s2.push(60);

    // Display top elements before swapping
    cout << "Before Swap:" << endl;
    cout << "Top of s1: " << s1.top() << endl;
    cout << "Top of s2: " << s2.top() << endl;

    // Swap the contents of both stacks
    s1.swap(s2);

    // Display top elements after swapping
    cout << "\nAfter Swap:" << endl;
    cout << "Top of s1: " << s1.top() << endl;
    cout << "Top of s2: " << s2.top() << endl;

    return 0;

}