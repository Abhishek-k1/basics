#include <iostream>
using namespace std;

// Structure to represent a Stack
struct stack
{
    int size;      // Maximum capacity of the stack
    int top;       // Index of the top element
    int *arr;      // Pointer to dynamically allocated array
};

// Function to push (insert) an element into the stack
void push(stack *s, int value)
{
    // Check if the stack is full
    if(s->top == s->size - 1)
    {
        cout << "Stack overflow" << endl;
    }
    else
    {
        // Move top to the next position
        s->top++;
        
        // Insert the new value
        s->arr[s->top] = value;
    }
}

// Function to pop (delete) the top element from the stack
int pop(stack *s)
{
    // Check if the stack is empty
    if (s->top == -1)
    {
        cout << "Stack Underflow" << endl;
        return -1;
    }

    // Store the top element before deleting
    int x = s->arr[s->top];

    // Move top one position down
    s->top--;

    // Return the deleted element
    return x;
}

// Function to display all elements of the stack
void display(stack *s)
{
    // Print elements from top to bottom
    for(int i = s->top; i >= 0; i--)
    {
        cout << s->arr[i] << endl;
    }
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

    // Push elements into the stack
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 50);
    push(&s, 60);
    
    // Display the stack before pop
    cout << "Stack Before Pop:" << endl;
    display(&s);

    // Pop the top element
    cout << "\nDeleted Element: " << pop(&s) << endl;

    // Display the stack after pop
    cout << "\nStack After Pop:" << endl;
    display(&s);

    // Free the dynamically allocated memory
    delete[] s.arr;

    return 0;
}