/*--------------------------------------------------- DSA ---------------------------------------------------------------
Introduction-> Data structure + algorithms
Data structure-> way of storing data like
array
linkedlist
stack
queue
tree
graph
Algorithm-> step by step procedure to solve a problem
ex-> finding largesst number in a array

Important of DSA:-
makes program faster
uses les memory
immproves problem solvinng skills
help for coding interview

TIME COMPLEXITY:-
time complexity tells how much work an algorithm performs as input size increase
it does not measure seconds
it measure number of operation
Ex->
 for(int i = 0; i < n; i++)
 {
 cout << i;
 }

 Loop runs n times
 Time Complexity = 0(n)

BIG O NOTATION:-
big o represents worst case complexity
some common complexity->
O(1)-> Constant Time
O(log n)-> Logarithmic Time
O(n)-> Linear time
O(n log n)-> Efficient sorting
O(n2)-> Nested Loops

Asymptotic Notations:-
1.Big O(O)-> Worst Case
2.Big Omega(Ω)-> Best case
3.Big theta(Θ)-> Average/Tight Bound

Best case, Worst case and Average case
Example-> Linear Search
Array:- 10 20 30 40 50
IF searching 10: found immediately
                 Best Case Ω(1)
IF searching 50: worst case O(n)
                 because check every element
If searching random element: Average Case Θ(n)


RULES for finding time complexity
Rule 1. single loop
for(int i = 0; i < n; i++)
Complexity: O(n)

Rule 2. Nested Loop
for(int i = 0; i < n; i++)
{
for(int j = 0; j < n; j++)
{
}
}
Complexity: O(n²)

Rule 3. Consecutive loops
for(int i = 0; i < n; i++)
{
}
for(int i = 0; i < n; i++)
{
}
Complexity = O(n + n)
           = O(2n)
           = O(n)

Rule 4. Ignore Constants
for(int i = 0; i < n; i++)
{
     cout << i;
}
Complexity = o(5n)
           = o(n)

ARRAY AND ABSTRACT DATA TYPE:-
Array is collection of element of same data types stored in contiguous memory locations

Characteristics
stores same type of data
stored in contiguous memory
index start from 0
fixed size

Advantages
fast access using index
easy to traverse
less memory overhead

Disadvantages
Fixed size
insertion is costly
deletion is costly
memory may be wasted

Abstract Data Type:-
ADT defines what operation can be performed on data but does not specify how those operation are implemented
ADT tells: what can be done?

Array as an ADT
Array ADT-> array ADT is a logical representation of an array that defines
size of array
total number of elements
operations that can be performed
1.Traversal-> visit every element of an array one by one
2.Insertion-> add a new element at a specific position
3.Deletion-> Remove an element from array
4.Searching-> Finding an element in array
5.Updating-> change value of existing element

Representation of array ADT
1.Pointer to array
2. Total size of array
3. Number of  used elements

Array ADT structure
struct Array
{
int*A;
int size;
int length;
};

size = total capacity
Length = current elements

Array Operations:-
The main operations performed on an array are:
1.Traversal-> means visit element of the array one by one
2.Insertion-> adding a new element at a specific position
3.Deletion-> removing an element from the array
4.Searching-> Finding an element in an array
   Linear search-> check elements one by one
   Binary search-> used only on sorted array
5.Updating-> change value of an existing element

Insertion
  for(int i = length; i > index; i--)
  {
   arr[i] = arr[i -1];
  }
shift right -> Traverse Backward (i--)

Deletion
  for(int i = index; i < length - 1; i++)
  {
   arr[i] = arr[i + 1];
  }
shift left -> Traverse Forward (i++)

Linear search

 for(int i = 0; i < n; i++)
 {
    if(arr[i] == key)
       return i;
 }

Binary search
 while(low <= high)
 {
    int mid = (low + high) / 2;

    if(arr[mid] == key)
    return mid;

    else if(key < arr[mid])
     high = mid - 1;

 else
     low = mid + 1;
 }



LINKED LIST:-
 A Linked list is a collection of nodes where each node contains:
 1.Data
 2.Address of the next node
 linked list elements are not stored in contiguous memory

Array Problems:
 -> Fixed size
 -> Insertion is costly
 -> Deletion is costly
 -> May waste memory

Structure of a Node:
 struct Node
 {
 int data;
 Node*next;
 };

 data-> store value
 next-> store address of next node
Example
 +------+-------+      +------+-------+      +------+-------+
 | 10   |   •---|----->| 20   |   •---|----->| 30   | NULL  |
 +------+-------+      +------+-------+      +------+-------+
 First Node-> first node is called Head node
             Head stores the address of  the first node
 Last Node-> The last node points to NULL
            This indicates the end of the linked list

Advantages of Linked List
 Dynamic Size-> can grow and shrink during execution
 Easy Insertion-> No shifting required
 Easy Deletion-> no shifting required
 Better Memory Utilization-> meomory allocated when needed

Disadvantages of Linked List
 Extra Memory-> Need space for pointer
 No direct Access-> cannot do like array
 Traversal Required-> Must move node by node

Node:- A node is the basic building block of a linked list
Head Pointer:- The head stores the address of  the first node

Creating Nodes:
 Node* first = new Node();
 Node* second = new Node();
 Node* third = new Node();

Assign values:
 first->data = 10;
 second->data = 20;
 third->data = 30;

Link nodes:
 first->next = second;
 second->next = third;
 third->next = NULL;

Traversing Linked List:
Traversal means visiting each node one by one
 Node* temp = first;

 while(temp != NULL)
 {
    cout << temp->data << " ";
    temp = temp->next;
 }

 Time complexity-> O(n)

Insertion:
 Insertion means adding a new node into a linked list

Types of Insertion:-

1.Insertion at Beginning

Algorithm:-
1.Create a new node
2.Store the value in the new node
3.Point newNode-> next to head
4.Update head = newNode

 void insertAtBeginning(Node* &head, int value)
 {
 Node* newNode =  new Node();
 newNode->data = value;
 newNode->next = head;
 head = newNode;
 }

Time complexity-> O(1)

2.Insertion at End

Algorithm:-
1.Create a new node
2.Store the value
3.Traverse to the last node
4.Set last->next = newNode
5.Set newNode->next = NULL

 void insertAtEnd(Node* head, int value)
 {
 Node* newNode = new Node();

 newNode->data = value;
 newNode->next = NULL;

 Node* temp = head;

 while(temp->next != NULL)
 {
    temp = temp->next;
 }

 temp->next = newNode;
 }

Time complexity-> O(n)

3.Insertion at a given position

Algorithm:-
1.Traverse to the node before the given position
2.Create a new node
3.Set newNode->next = temp->next
4.Set temp->next = newNode

 void insertAtIndex(Node* head, int index, int value)
 {
 Node* newNode = new Node();

 newNode->data = value;

 Node* temp = head;

 for(int i =1; i < index - 1; i++)
 {
    temp = temp->next;
 }

 newNode->next = temp->next;
 temp->next = newNode;
 }
Time complexity-> O(n)

4.Insertion after a given node

Algorithm:-
1.Create a new node
2.Store the value
3.Set newNode->next = previous->next
4.Set previous->next = newNode

 void insertAfterNode(Node* previous, int value)
 {
 Node* newNode = new Node();

 newNode->data = value;

 newNode->next = previous->next;
 previous->next = newNode;
 }

Time complexity-> O(1)

**Always connect the new node first, then update the previous node
correct order:
 newNode->next = temp->next;
 temp->next = newNode;

Note:-Insertion in a linked list is easier than in an array because only pointers are updated.
No shifting of elements is required

Deletion:
 Deletion means removing a node from a linked list

Types of Deletion:-

1.Deletion at beginning

Algorithm:-
1.Store the head node in a temporary pointer
2.Move head to the next node
3.Delete the old first node

 void deleteAtBeginning(Node* &head)
 {
  Node* temp = head;
  head = head->next;
  delete temp;
 }

Time Complexity-> O(1)

2.Deletion at a Given position

Algorithm:-
1.Traverse to the node before the position
2.Store the node to be deleted
3.Change the links
4.Delete the removed node

 void deleteAtIndex(Node* &head, int index)
 {
   Node* temp = head;

   for(int i = 1; i < index - 1;  i++)
   {
      temp = temp->next;
   }
   Node* del = temp->next;
   temp->next = del->next;
   delete del;
 }

Time Complexity-> O(n)

3.Deletion at End

Algorithm:-
1.Traverse to the second last node
2.Store the last node
3.Make second last node point to NULL
4.Delete the last node

 void deleteAtEnd(Node* &head)
 {
   Node* temp = head;
   while(temp->next->next != NULL)
   {
      temp = temp->next;
   }
      Node* del = temp->next;
      temp->next = NULL;
      delete del;
 }

Time Complexity-> O(n)

4.Deletion after a given Node

Algorithm:-
1.Traverse to the previous node
2.Store the node to be deleted
3.Change the link
4.Delete the node

 void deleteAfterNode(Node* previous)
 {
  Node* del = previous->next;
  previous->next = del->next;
  delete del;
 }

Time complexity-> O(1)

**Before deleting a node always save its address
 Correct order:-
   Node* del = temp->next;
   temp->next = del->next;
   delete del;

Circular Linked List:
 A circular linked list is a linked list in which the last node points back to the first node instead of NULL

Node structure
 struct Node
 {
 int data;
 Node* next;
 };

Difference Between Singly Linked List and Circular Linked List:
 Singly Linked List:
 Last node points to NULL
 Traversal ends at NULL
 Has one end

 Circular Linked List:
 Last node points to the first nod
 Traversal ends when we reach the first node again
 No end (forms a circle)

Advantages:-
 can start traversal from any node
 No NULL pointer at the end
 Useful for circular processes
 Efficient for round-robin scheduling

Disadvantages:-
 Traversal is more difficult
 Infinite loop may occur if the stopping condition is incorrect
 slightly more complex than a singly linked list

Creating a circular linked list:-

Create Nodes
 Node* first = new Node();
 Node* second = new Node();
 Node* third = new Node();

Store data
 first->data = 10;
 second->data = 20;
 third->data = 30;

Link Nodes
 first->next = second;
 second->next = third;
 third->next = first;

Traversal:
 since there is no NULL, we cannot use
    while(temp != NULL)

Algorithm:
1. Start from the first node
2. Print the current node
3. Move to the next node
4. Stop when the first node is reached again

 void display(Node* head)
 {
    Node* temp = head;

    do
    {
      cout << temp->data << " ";
      temp = temp->next;
    }
      while(temp != head);
 }

Time complexity-> O(n)

Inserting at Beginning:

Algorithm:
1.Create a new node
2.Traverse to the last node
3.Make the last node point to the new node
4.Point the new node to the old head
5.Update the head

 void insertAtBeginning(Node* &head, int value)
 {
   Node* newNode = new Node();
   newNode->data = value;
   Node* temp = head;

   while(temp->next != head)
   {
      temp = temp->next;
   }
   newNode->next = head;
   temp->next = newNode;
   head = newNode;
 }

Time complexity-> O(n)

Insertion at End:

Algorithm:
1.Create a new node.
2.Traverse to the last node.
3.Point the last node to the new node.
4.Point the new node to the head.

 void insertAtEnd(Node* &head, int value)
 {
   Node* newNode = new Node();
   newNode->data = value;
   Node* temp = head;

   while(temp->next != head)
   {
     temp = temp->next;
   }
   temp->next = newNode;
   newNode->next = head;
 }

Time complexity-> O(n)

Deletion at Beginning:

Algorithm:
1.Traverse to the last node
2.Store the first node
3.Move the head to the next node
4.Point the last node to the new head
5.Delete the old head

 void deleteAtBeginning(Node* &head)
 {
   Node* temp = head;
   Node* last = head;

   while(last->next != head)
   {
     last = last->next;
   }

   head = head->next;
   last->next = head;
   delete temp;
 }

Time complexity-> O(n)

Applications:

 Round Robin CPU Scheduling
 Multiplayer games
 Music Playlist
 Circular Queue
 Turn-based systems

Note:
Traversal in a Circular Linked List uses a do-while loop because the first node must be visited before checking the stopping condition

DOUBLY LINKED LIST:

A Doubly Linked List is a linked list in which each node contains:
1.Data
2.Address of the next node
3.Address of the previous node

Node Structure:

  struct Node
  {
     int data;
     Node* prev;
     Node* next;
  };

  data -> stores the value
  prev -> stores the address of the previous node
  next -> stores the address of the next node

 Example:

 NULL <- [10] <-> [20] <-> [30] -> NULL

 First Node:
 The previous pointer of the first node is NULL

 Last Node:
 The next pointer of the last node is NULL

Difference Between Singly and Doubly Linked List:

Singly Linked List:
 One pointer
 can traverse only forward
 used less memory
 Insertion/Deletion requires previous node

Doubly Linked List:
 Two pointers (prev and next)
 Can traverse forward and backward
 uses more memory
 Easier insertion and deletion

Advantages:
 Bidirectional traversal
 Easy insertion
 Easy Deletion
 Can move forward and backward

Disadvantages:
 Extra memory required for prev pointer
 More pointer manipulation
 Slightly more complex than singly Linked List

Creating Nodes:

 Node* first = new Node();
 Node* second = new Node();
 Node* third = new Node();

Assign Data:

 first->data = 10;
 second->data = 20;
 third->data = 30;

Link Nodes:

 first->prev = NULL;
 first->next = second;

 second->prev = first;
 second->next = third;

 third->prev = second;
 third->next = NULL;

Traversal (Forward):-

Algorithm:
 1. Start from the first node.
 2. Print the current node.
 3. Move to the next node.
 4. Repeat until NULL.

 void display(Node* head)
 {
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
 }

Time Complexity -> O(n)

Traversal (Backward):-

Algorithm:
 1. Go to the last node.
 2. Print the current node.
 3. Move to the previous node.
 4. Repeat until NULL.

 void displayReverse(Node* head)
 {
    Node* temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
 }

Time Complexity -> O(n)

Applications:-

 Browser Back and Forward buttons
 Undo and Redo operations
 Music Playlist
 Image Viewer
 Navigation systems

STACK:-
Astack is a linear data structure that follows the LIFO (Last In First Out) principle

LIFO:The element inserted last is removed first

Example:

        Top
         ↓
      +-----+
      | 30  |  <-- Pop first
      +-----+
      | 20  |
      +-----+
      | 10  |
      +-----+

Basic Operations:-

1.Push
-> Adds an element to the top of the stack
Time Complexity-> O(1)

2.Pop
-> Removws the top element from the stack
Time Complexity-> O(1)

3.Peek(Top)
-> Returns the top element without removing it
Time Complexity-> O(1)

4.isEmpty()
-> Checks whether the stack is empty
Time Complexity-> O(1)

5.isFull()
-> Checks whether the stack is full (Array implementation)
Time Complexity-> O(1)

Applications of Stack:-

• Function Calls (Call Stack)
• Undo / Redo Operations
• Browser Back Button
• Expression Evaluation
• Parentheses Matching
• Backtracking
• Depth First Search (DFS)


Advantages:-

• Easy insertion and deletion
• Fast access to the top element
• Useful in recursion
• Simple implementation

Disadvantages:-

• Access only the top element
• Fixed size when implemented using arrays
• Cannot access middle elements directly

Types of Stack:-

1.Stack using Array
2.Stack using Linked List

Imported terms:

Top: The variable that stores the index of the last inserted element
Overflow: Occurs when we try to push an element into a full stack
Underflow: Occurs when we try to pop an element from an empty stack

Stack Using Array:

 Stack Structure
  struct stuck
  {
     int size;
     int top;
     int* arr;
  };

  size-> Maximum capacity of the stack
  top-> Index of the top element
  arr-> pointer to the array

Creating a stack:

 Stack s;
 s.size = 5;
 s.top = -1;

 s.arr = new int[s.size];

 Initially:
 top = -1

Stack Condition:

 Stack is Empty
 s.top == -1

 Stack is Full
 s.top == s.size - 1

 isEmpty()
 bool isEmpty(Stack s)
 {
    if(s.top == -1)
      return true;

   return false;
 }

 Time Complexity-> O(1)

 isFull()
 bool isFull(stack s)
 {
    if(s.top == s.size - 1)
        return true;

    return false;
 }

 Time Complexity-> O(1)

Applications:

 • Function Calls
 • Browser History
 • Undo / Redo
 • Expression Evaluation
 • Parentheses Matching

Push Operation:
 Push:Push means inserting a new element at the top of the stack

 Before Push

 Top = 2

      30  ← Top
      20
      10

 Push(40)

 After Push

 Top = 3

      40  ← Top
      30
      20
      10

Algorithm:
 1.Check if the stack is full
 2.If full, display "stack overflow"
 3.Increment top
 4.Insert the new element at arr[top]

Function Implementation:
 void push(stack* s, int value)
 {
    if(s->top == s->size -1)
    {
        cout << "Stack overflow";
    }
   else
   {
      s->top++;
      s->arr[s->top] = value;
   }
 }

 Time Complexity-> O(1)

Displaying Stack:

 void display(stack* s)
 {
    for(int i = s->top; i >= 0; i--)
    {
       cout << s->arr[i] << " ";
    }
 }

 Time Complexity-> O(n)

Overflow Condition:

 if(s->top == s->size - 1)
 stack overflow occurs when we try to push an element into a full stack


**
  • Push always inserts at the top.

  • Increase top first, then insert the value.

  Correct Order:

  s->top++;
  s->arr[s->top] = value;

Stack Operation:

1.POP Operation
 pop: pop means removing the top element from the stack

Algorithm:
1.Check if the stack is empty
2.If empty, display "stack Underflow"
3.Store the top element(optional)
4.Decrement top

Function:
 int pop(struct* s)
 {
    if(s->top == -1)
    {
       cout << "Stack Underflow";
       return -1;
    }
    int x = s->arr[s->top];
    s->top--;
    return x;
 }

 Time Complexity-> O(1)

2.PEEK operation
 peek: Returns the element at a given position from the top without removing it

 Formula: Array Index = top - position + 1

 Function:
 int peek(stack* s, int position)
 {
   int index = s->top - position + 1;

   if(index < 0)
   {
      cout << "Invalid Position";
      return -1;
   }
   return s->arr[index];
 }

 Time Complexity-> O(1)

3.Stack TOP
 Returns the topmost element

 Function:
  int stackTop(Stack* s)
  {
     if(s->top == -1)
        return -1;

      return s->arr[s->top];
  }

 Time Complexity-> O(1)

4.Stack Bottom
 Returns the bottom most element

 Function:
  int stackBottom(stack* s)
  {
     if(s->top == -1)
          return -1;

     return s->arr[0];
  }

 Time Complexity -> O(1)

Stack Using Linked List:

 A atack can also be implemented using linked list
 it follow LIFO principle
 unlike an array, a linked list does not have a fixed size
 memory is allocated dynamically when new nodes are created

Node structure:

 struct Node
 {
 int data;
 Node* next;
 };

 data -> stores the value
 next -> stores the address of the next node

Top Pointer:

 Node* top = NULL;
 The top pointer always points to the first node of the linked list
 if top == NULL, the stack is empty

Representation:

 Top
  ↓
 +------+-------+
 | 30   |   •---|----+
 +------+-------+    |
                    ↓
              +------+-------+
              | 20   |   •---|----+
              +------+-------+    |
                                  ↓
                            +------+-------+
                            | 10   | NULL  |
                            +------+-------+

Push Operation:
 Push means inserting a new node at the behinning of the linked list

Algorithm:
 1.Create a new node
 2.store the value
 3.Point newNode->next to top
 4.Update top = newNode

Function:
 void push(int value)
 {
   Node* newNode = new Node();

   newNode->data = value;
   newNode->next = top;
   top = newNode;
 }

Time Complexity -> O(1)

Pop Opeartion:
 Pop  means removing the first node from the linked list

Algorithm:
 1.Check if the stack is empty
 2.Store the top node
 3.Move top to the next node
 4.Delete the old top node
 5.Return the deleted value

Function:
 int pop()
 {
    if(top == NULL)
    {
       cout << "stack Underflow";
       return -1;
    }
    Node* temp = top;
    int x = temp->data;

    top = top->next;
    delete temp;

    return x;
 }

Time complexity -> O(1)

Peek Operation
  Peek returns the value at a given position
  from the top of the stack

Algorithm:
 1.Start from the top node
 2.Move to the required position
 3.Return the node's data

Function:
 int peek(int position)
 {
    Node* temp = top;

    for(int i = 1; temp != NULL && i < position; i++)
    {
       temp = temp->next;
    }
    if(temp != NULL)
      return temp->data;

    return -1;
 }

Time Complexity -> O(n)

Stack Top (Top Element):
 Returns the top element without removing it

Function:
 int stackTop()
 {
    if(top == NULL)
       return -1;

    return top->data;
 }

Time Complexity -> O(1)

Stack Bottom:
 Returns the bottom-most element

Function:
 int stackBottom()
 {
    if(top == NULL)
      return -1;

   Node* temp = top;

   while(temp->next != NULL)
   {
     temp = temp->next;
   }
   return temp->data;
 }

Time Complexity -> O(n)

isEmpty():

Algorithm:
 1.check if top is NULL
 2.If NULL, the stack is empty

Function:
 bool is Empty()
 {
    return top == NULL;
 }

Time Complexity -> O(1)

Advantages
 Dynamic size
 No fixed capacity
 No memory wastage
 push and pop are O(1)

Disadvantages
 Extra memory is required for pointers
 No direct accesss like arrays
 slightly more complex than array implementation

Overflow Condition
 Overflow occurs only when dynamic memory allocation fails

Underflow Condition
 Underflow occurs when pop() is called on an empty stack

**
 • Top always points to the first node
 • Push inserts at the beginning
 • Pop deletes from the beginning
 • No shifting of elements is required
 • Linked List implementation does not have a fixed size

Parenthesis Matching:
 Parenthesis matching is the process of checking whether all opening parentheses have their corresponding closing parentheses in the correct order

 Examples:

 Balanced
 ()
 (())
 (()())

 Not Balanced
 (()
 ())
 )(

Why do  we use stack?
 A stack follows the LIFO Principle
 The last opening parenthesis '(' must be matched with the first closing parenthesis ')'
 Hence, stack is the most suitable data structure

Algorithm:
 1.Traverse the expression from left to right
 2.If the current character is '('
    push it into the stack
 3.If the current character is ')'
    If stack is empty
     Expression is NOT balanced
    Otherwise
     Pop one element from the stack
 4.After traversing the complete expression
    If stack is empty
     Expression is Balanced
    Otherwise
     Expression is NOT Balanced

Function:
 bool isBalanced(string exp)
 {
    stack<char> s;

    for(int i = 0; i < exp.length(); i++)
    {
       if(exp[i] == '(')
       {
          s.push('(');
       }
       else if(exp[i] == ')')
       {
          if(s.empty())
          return false;

          s.pop();
       }
    }
       return s.empty();
 }

Time Complexity -> O(n)
Space Complexity -> O(n)

*/