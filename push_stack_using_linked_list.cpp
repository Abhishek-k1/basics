#include <iostream>
using namespace std;

struct Node
{
    int data;         // Stores the value of the node
    Node* next;       // Pointer to the next node
};

// Top pointer of the stack
// Initially the stack is empty
Node* top = NULL;


// Function to push (insert) an element into the stack
void push(int value)
{
    // Create a new node dynamically
    Node* newNode = new Node();

     // Check whether memory allocation was successful
        if(newNode == NULL)
        {
            cout << "Stack Overflow" << endl;
            return;
        }

    // Store the given value in the new node
    newNode->data = value;

     // Link the new node to the current top node
    newNode->next = top;

    // Make the new node the top of the stack
    top = newNode;
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

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    // Display stack elements
    cout << "Stack Elements:" << endl;
    display();

    return 0;
}

