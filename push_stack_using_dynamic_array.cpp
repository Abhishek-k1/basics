#include<iostream>       
using namespace std;

// Structure to represent a Stack
struct stack
{
    int size;        // Maximum capacity of the stack
    int top;         // Index of the top element
    int* arr;        // Pointer to dynamically allocated array
};

// Function to insert (push) an element into the stack
void push(stack* s, int value)
{
    // Check if the stack is full
    if(s->top == s->size - 1)
    {
        cout << "Stack overflow";
    }
    else
    {
        // Move top to the next position
        s->top++;

        // Store the new value at the top position
        s->arr[s->top] = value;
    }
}

// Function to display all elements of the stack
void display(stack* s)
{
     // Print elements from top to bottom
    for(int i = s->top; i >= 0; i--)
    {
        cout  << s->arr[i] << endl;
    }
}

int main()
{
    // Create a stack object
    stack s;

    // Maximum size of the stack
    s.size = 5;

    // Initially stack is empty
    s.top = -1;

    // Dynamically allocate memory for the stack
    s.arr = new int[s.size];

    // Push elements into the stack
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    // Display all stack elements
    cout << "Stack Elements:" << endl;
    display(&s);

    // Free dynamically allocated memory
    delete[] s.arr;
    
    return 0;
}