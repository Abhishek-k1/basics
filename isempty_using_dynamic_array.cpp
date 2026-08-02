#include <iostream>
using namespace std;

struct stack
{
    int size;    // Maximum size of the stack
    int top;      // Index of the top element
    int *arr;      // Pointer to dynamically allocated array
};

// Function to push (insert) an element into the stack
void push(stack *s, int value)
{
    // Check if the stack is full
    if(s->top == s-> size - 1)
    {
        cout << "stack overflow: " << endl;
    }
    else
    {
        // Move top to the next position
        s->top++;

        // Insert the value into the stack
        s->arr[s->top] = value;
    }
}

// Function to check whether the stack is empty
int isEmpty(stack *s)
{
    // If top is -1, the stack is empty
    if (s->top == -1)
    {
        return 1;   // Stack is empty
    }

    // Otherwise, the stack is not empty
    return 0;
}
int main()
{
    // Create a stack object
    stack s;

    // Set the maximum size of the stack
    s.size = 5;

    // Initially the stack is empty
    s.top = -1;

    // Dynamically allocate memory for the stack
    s.arr = new int[s.size];

    // Check before pushing any element
    if (isEmpty(&s))
    {
        cout << "stack is Empty" << endl;
    }
    else
    {
        cout << "stack is not Empty" << endl;
    }

    // Push elements into the stack
    push(&s, 10);
    push(&s, 20);

    // Check again after pushing elements
    if(isEmpty(&s))
    {
        cout <<  "stack is Empty" << endl;
    }
    else
    {
       cout << "stack is not Empty" << endl;
    }

    // Free dynamically allocated memory
    delete[] s.arr;

    return 0;
}