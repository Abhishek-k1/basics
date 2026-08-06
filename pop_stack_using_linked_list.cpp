#include <iostream>
using namespace std;

// Structure to represent a node
struct Node
{
    int data;         // Stores the value of the node
    Node* next;       // Pointer to the next node
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
    if(newNode == NULL)
    {
        cout << "stack overflow" << endl;
        return;
    }

    // Store the given value in the new node
    newNode->data = value;

    // Link the new node to the current top node
    newNode->next = top;

    // Make the new node the top of the stack
    top = newNode;
}

// Function to pop (delete) the top element from the stack
int pop()
{
    // Check if the stack is empty
    if (top == NULL)
    {
        cout << "stack underflow";
        return -1;
    }

    // Store the top node in a temporary pointer
    Node* temp = top;

    // Save the value of the top node
    int x = temp->data;

    // Move the top pointer to the next node
    top = top->next;

    // Delete the old top node to free memory
    delete temp;

    // Return the deleted value
    return x;
}

// Function to display all elements of the stack
void display()
{
    // Create a temporary pointer starting from the top
    Node* temp = top;

    // Traverse until the end of the linked list
    while(temp != NULL)
    {
        cout << temp->data << endl;

        // Move to the next node
        temp = temp->next;
    }
}

int main()
{
    // Push elements into the stack
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    // Display the stack before pop
    cout << "Stack Before Pop:" << endl;
    display();

    // Delete the top element
    cout << "\nDeleted Element: " << pop() << endl;

    // Display the stack after pop
    cout << "\nStack After Pop:" << endl;
    display();

    return 0;
}