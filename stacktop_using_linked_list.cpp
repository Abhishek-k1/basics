#include <iostream>
using namespace std;

// Structure to represent a node
struct Node
{
    int data;            // Stores the value of the node
    Node* Next;          // Pointer to the next node
    };

// Top pointer of the stack
// Initially the stack is empty
Node *top = NULL;

// Function to push (insert) an element into the stack
void push(int value)
{
    // Create a new node dynamically
    Node* newNode = new Node();

    // Check whether memory allocation was successful
    if(new Node == NULL)
    {
       cout << "Stack overflow" << endl;
       return;
    }

    // Store the value in the new node
    newNode->data = value;

    // Connect the new node to the current top
    newNode->Next = top;

    // Make the new node the top of the stack
    top = newNode;
}

// Function to return the top element of the stack
int stackTop()
{
    // Check if the stack is empty
    if(top == NULL)
     return -1;

     // Return the data stored in the top node
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
    cout << "Top Element: " << stackTop() << endl;

    return 0;
}
   
