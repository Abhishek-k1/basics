#include<iostream>
using namespace std;

struct stack
{
    int size;     // Maximum size of the stack
    int top;      // Index of the top element
    int *arr;     // Pointer to dynamically allocated array
};

// function to push (insert) an element into the stack
void push(stack *s, int value)
{
    // Check if the stack is full
    if(s->top == s->size - 1)
    {
        cout << "stack overflow" << endl;
    }
    else
    {
        // Move top to the next position
        s->top++;

        // Insert the value into the stack
        s->arr[s->top] = value;
    }
}

// Function to return the top element of the stack
int stackTop(stack* s)
{
    // Check if the stack is empty
    if(s->top == -1)
    {
        cout << "Stack Underflow" << endl;
        return -1;
    }
    
    // Return the top element
    return s->arr[s->top];
}

int main()
{
    // Create a stack object
    stack s;

    // set the maximum size of the stack
    s.size = 5;

    // Initialize the stack is empty
    s.top = -1;

    //Dynamically allocate memory for the stack
    s.arr = new int[s.size];

    // Push elements into the stack
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);
    push(&s, 50);

    // Display the top element
    cout << "Top element: " << stackTop(&s) << endl;

    // Free dynamically allocated memory
    delete[] s.arr;

    return 0;
}