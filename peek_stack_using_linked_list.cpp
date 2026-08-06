#include <iostream>
using namespace std;

// Structure to represent a node
struct Node
{
    int data;       // Stores the value of the node
    Node *next;     // Pointer to the next node
};

// Top pointer of the stack
// Initially the stack is empty
Node *top = NULL;

// Function to push (insert) an element into the stack
void push(int value)
{
    // Create a new node dynamically
    Node *newNode = new Node();

    // Check wheteher memory allocationn was successful
    if(newNode == NULL)
    {
        cout << "Stack Overflow" << endl;
        return;
    }

    // Store the value in the new node
    newNode->data = value;

    // Link the new node to the current top
    newNode->next = top;

    // Make  the new node the new top
    top = newNode;
}

// Function to return the top element without deleting it
int peek()
{
    // Check if the stack is empty
    if(top == NULL)
    {
        cout << "Stack Underflow" << endl;
        return -1;
    }

    // Return  the data of the top node
    return top->data;
}

int main()
{
    // Push elements into the stack
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    // Display the top element
    cout << "Top Element: " << peek() << endl;

    return 0;
}

