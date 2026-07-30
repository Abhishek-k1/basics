#include <iostream>
using namespace std;

struct stack
{
    int size;     // Maximum capacity of  the stack
    int top;      // Index of the top element 
    int *arr;     // Pointer to dynamically allocated array
};

//Function to push elements into the stack
void push(stack *s, int value)
{
    // Check  if the stack is full
    if(s->top == s->size - 1)
    {
        cout << "stack Overflow" << endl;
    }
    else
    {
        // Move top to the next position
        s->top++;

        // Insert the value
        s->arr[s->top] = value;
    }
}

// Function to return the top element without removing it
int peek(stack *s)
{
    // Check if the stack is empty
    if(s->top == -1)
    {
        cout << "Stack Underflow" << endl;
        return -1;
    }

    // Return the current top element
    return s->arr[s->top];
}

int main()
{
    // Create a stack object
   stack s;

   // set the size of the stack
   s.size = 5;

   // Initially the stack is empty
   s.top = -1;

   // Dynamically allocate memory
   s.arr = new int[s.size];

   // Push elements into the stack
   push(&s, 10);
   push(&s, 20);
   push(&s, 30);

   // Display the top element
   cout << "Top Element: " << peek(&s) << endl;

   // Free allocatedd memory
   delete[] s.arr;

   return 0;

}
