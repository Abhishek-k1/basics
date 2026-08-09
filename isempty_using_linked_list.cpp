#include <iostream>
using namespace std;

// Structure to represent a node
struct Node
{
    int data;       // Stores the value of the Node
    Node *next;    // Pointer to thenext node
};

// Top pointer of  the stack
// Initially the stack is empty
Node *top = NULL;

// Function to push (insert) an element into the stack
void push(int value)
{
    // Create a new node dynamically
    Node* newNode = new Node ();

    // Check whether memory allocation was successful
    if(newNode == NULL)
    {
        cout << "Stack overflow" << endl;
        return;
    }

    // Store the value in the new node
    newNode->data = value;

    // Connect the new node to the current top
    newNode->next = top;

    // Make the new node the top of the stack
    top = newNode;
}

// Function to  check whether the stack is empty
bool isEmpty()
{
    // If top is NULL, the stack is empty
    return top == NULL;
}

int main()
{
    // Check the stack before pushing  any element
    if(isEmpty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack is Not Empty" << endl;
    }

    // Push an element into the stack
    push(20);

    // Check the stack after pushing an element
    if(isEmpty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack is Not Empty" << endl;
    }

    return 0;
}

