#include <iostream>
using namespace std;

struct stack
{
    int size;        // Maximum capacity of the stack
    int top;         // Index of the top element
    int *arr;        // pointer to dynamically allocated array
};

// Function to push (insert) an element into the stack
void push(stack *s, int value)
{
    // Check if the stack is full
   if(s->top == s->size - 1)
   {
    cout << "Stack Overflow" << endl;
   }
   else
   {
     // Move top to the next position
    s->top++;

    // Insert the new value
    s->arr[s->top] = value;
   }
}

// Function to return an element at a given position from the top
int peek(stack *s, int position)
{
     // Convert the position into an array index
    int index = s->top - position + 1;
    if(position <= 0 || index < 0)
    {
        cout << "Invalid Position" << endl;
        return -1;
    }

    // Return the element at the calculated index
    return s->arr[index];
}

    int main()
    {
         // Create a stack object
        stack s;

        // Set the maximum size of the stack
        s.size = 5;

        // Initially the stack is empty
        s.top = -1;

         // Dynamically allocate memory
        s.arr = new int[s.size];

        // Push elements into the stack
        push(&s, 10);
        push(&s, 20);
        push(&s, 30);
        push(&s, 40);

        // Display elements using their position from the top
        cout << "Position 1: " << peek(&s, 1) << endl;
        cout << "Position 2: " << peek(&s, 2) << endl;
        cout << "Position 3: " << peek(&s, 3) << endl;
        cout << "Position 4: " << peek(&s, 4) << endl;

         // Free dynamically allocated memory
        delete[] s.arr;

        return 0;
    }


