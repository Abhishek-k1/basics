#include <iostream>
using namespace std;

// Structure to represent a node
struct Node
{
    int data;        // Stores the value of the node
    Node* next;      // Pointer to the next node
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
        cout << "Stack Overflow" << endl;
        return;
    }

    // Store the value in the new node
    newNode->data = value;

    // Connect the new node to the current top
    newNode->next = top;

     // Make the new node the top of the stack
    top = newNode;
}

// Function to peek at a specific position
int peek(int position)
{
    // Check if the position is invalid
    if(position <= 0)
    {
        cout << "Invalid Position" << endl;
        return -1;
    }

    // Start traversal from the top of the stack
    Node* temp = top;

    // Move to the required position
    // Position 1 means the top element
    for(int i = 1; temp != NULL && i < position; i++)
    {
        // Move to the next node
        temp = temp->next;
    }

    // Check if the required position exists
    if(temp != NULL)
    {
       // Return the data at that position
      return temp->data;
    }
      
    // Position is greater than the stack size
    cout << "Invalid Position" << endl;
    return -1;
}

int main()
{
    // Push elements into the stack
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    
    // Display elements at different positions
    cout << "Position 1: " << peek(1) << endl;
    cout << "Position 2: " << peek(2) << endl;
    cout << "Position 3: " << peek(3) << endl;
    cout << "Position 4: " << peek(4) << endl;
    cout << "Position 5: " << peek(5) << endl;

    // Test an invalid position
     cout << "Position 6: " << peek(6) << endl;

   return 0;
}


