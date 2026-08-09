#include <iostream>
using namespace std;

// Structure to represent a node
struct Node
{
    int data;      // Stores the value of the node
    Node* next;    // Pointer to the next node
};

// Top pointer of the stack
// Initially the stack is empty
Node *top = NULL;

// Function to push (insert) an element into the stack
void push(int value)
{
    Node *newNode = new Node();

    if(newNode == NULL)
    {
        cout << "Stack overflow" << endl;
    }

    // Store the value in the new node
    newNode->data=value;

    // Connect the new node to the current top
    newNode->next=top;

    // Make the new node the top of the stack
    top=newNode;

}

// Function to return the bottom element of the stack
int stackBottom()
{
    // Check if the stack is empty
    if(top == NULL)
      return -1;

    // Create a temporary pointer starting from the top
    Node* temp = top;

    // Traverse until the last node
    // The last node has next == NULL
    while(temp->next != NULL)
    {
        // Move to the next node
        temp = temp->next;
    }

    // Return the data of the bottom node
    return temp->data;
}

int main()
{
   // Push elements into the stack
   push(10);
   push(20);
   push(30);
   push(40);
   push(50);

   // Display the bottom element
   cout << "Bottom Element: " << stackBottom() << endl;

   return 0;
}

