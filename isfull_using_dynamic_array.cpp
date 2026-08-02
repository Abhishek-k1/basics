#include <iostream>
using namespace std;

struct stack
{
    int size;     // Maximum size of the stack
    int top;      // Index of the top element
    int *arr;     // Pointer to dynamically allocated array
};

// Function to push (insert) an element into the stack
void push(stack *s, int value)
{
    // Check if the stack is full
    if(s->top == s-> size - 1)
    {
        cout << "st5ack overflow: " << endl;
    }
    else
    {
         // Move top to the next position
        s->top++;

        // Insert the value into the stack
        s->arr[s->top] = value;
    }
}

// Function to check whether the stack is full
int isFull(stack *s)
{
    // If top reaches the last index, the stack is full
      if(s->top == s-> size - 1)
      {
        return 1;    // Stack is full
      }
      else
      {
        return 0;    // Stack is not full
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

    // Check whether the stack is full before pushing any elements
    if(isFull(&s))
    {
        cout << "Stack is full" << endl;
    }
    else
    {
        cout << "Stack is not Full" << endl;
    }

    // Push elements into the stack
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);
    push(&s, 50);

    // Check again after pushing all elements
    if(isFull(&s))
    {
        cout << "Stack is Full" << endl;
    }
    else
    {
        cout << "Stack is Not Full" << endl;
    }

    // Free dynamically allocated memory
    delete[] s.arr;

    return 0;
}