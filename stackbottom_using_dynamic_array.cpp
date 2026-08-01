#include <iostream>
using namespace std;

// Structure to represent a stack
struct stack
{
    int size;    // Maximum size of the stack
    int top;     // Index of the top element
    int *arr;    // Pointer to dynamically allocated array
};

// Function to push (insert) an element into the stack
void push(stack *s, int value)
{
    // check if stack is full
    if(s->top == s-> size-1)
    {
    cout << "stack overflow: " << endl;
    }
    else
    {
        //Move top to the next position 
        s->top++;

        // Insert the value into the stack
        s->arr[s->top] = value;
    }
}

// Function to return the bottom element of the stack
int stackBottom(stack* s)
{
// Check if the stack is empty
   if(s->top == -1)
   {
    cout << "stack underflow" << endl;
     return -1;
   }
   // Return the bottom element
   return s->arr[0];
}

int main ()
{
    // Create a stack object
    stack s;

    // Set the maximum size of the stack
    s.size = 5;

    // Initialize the stack is empty
    s.top = -1;

    // Dynamical;ly allocate memory for the stack
    s.arr = new int [s.size];

    // Push element into the stack
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);
    push(&s, 50);

    // Display the bottom element
    cout << "Bottom element: " << stackBottom(&s) << endl;

    // Free dynamicxally allocated memeory
    delete[] s.arr;
    
    return 0;

}