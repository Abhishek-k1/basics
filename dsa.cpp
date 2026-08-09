/*--------------------------------------------------- DSA ---------------------------------------------------------------
Introduction-> Data structure + algorithms
Data structure-> way of storing data like
array
linked List
stack
queue
tree
graph
Algorithm-> step by step procedure to solve a problem
Ex-> Finding the largest number in an array

Importance of DSA:-
Makes program faster
Uses less memory
Improves problem solvinng skills
Helps for coding interviews

TIME COMPLEXITY:-
time complexity tells how much work an algorithm performs as the input size increases
It does not measure seconds
It measure number of operations
Ex->
 for(int i = 0; i < n; i++)
 {
 cout << i;
 }

 Loop runs n times
 Time Complexity = O(n)

BIG O NOTATION:-
big o represents worst case complexity
some common complexity->
O(1)-> Constant Time
O(log n)-> Logarithmic Time
O(n)-> Linear time
O(n log n)-> Efficient sorting
O(n*n)-> Nested Loops

Asymptotic Notations:-
1.Big O(O)-> Worst Case
2.Big Omega(Ω)-> Best case
3.Big theta(Θ)-> Average Case / Tight Bound

Best case, Worst case and Average case
Example-> Linear Search
Array:- 10 20 30 40 50
IF searching for 10: found immediately
                 Best Case Ω(1)
IF searching for 50: worst case O(n)
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
Complexity = O(5n)
           = O(n)

ARRAY AND ABSTRACT DATA TYPE:-
Array is collection of element of same data types stored in contiguous memory locations

Characteristics
Stores elements of the same data type
Stored in contiguous memory
Index starts from 0
Fixed size

Advantages
fast access using index
easy to traverse
less memory overhead
Arrays provide direct (random) access using an index

Disadvantages
Fixed size
insertion is costly
deletion is costly
memory may be wasted

Abstract Data Type:-
ADT defines what operations can be performed on data but does not specify how those operations are implemented
ADT tells: what can be done, not how it is implemented

Array as an ADT
Array ADT-> array ADT is a logical representation of an array that defines
Size of the array
total number of elements
operations that can be performed
1.Traversal-> visit every element of an array one by one
2.Insertion-> add a new element at a specific position
3.Deletion-> Remove an element from array
4.Searching-> Finding an element in array
5.Updating-> change value of existing element

Representation of array ADT
1.Pointer to array
2.Total size of array
3.Number of used elements

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
-> Binary Search work only on a sorted array

Time Complexity:
 Traversal      -> O(n)

 Insertion      -> O(n)

 Deletion       -> O(n)

 Linear Search  -> O(n)

 Binary Search  -> O(log n)

 Updating       -> O(1)


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
A stack is a linear data structure that follows the LIFO (Last In First Out) principle

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

 Stack Structure:
  struct stack
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
 bool isFull(Stack s)
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
 void push(Stack* s, int value)
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
 int pop(Stack* s)
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
 int peek(Stack* s, int position)
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
  int stackBottom(Stack* s)
  {
     if(s->top == -1)
          return -1;

     return s->arr[0];
  }

 Time Complexity -> O(1)

Stack Using Linked List:

 A stack can also be implemented using linked list
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
 // Stores the value of the node int peek(int position)
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
 bool isEmpty()
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

Multiple Parenthesis Matching:
 Multiple Parenthesis matching is the process of checking whether all types of parentheses are balanced and properly nested

 Type of Parentheses:
 ()
 {}
 []

 Balanced
 ()
 {}
 []
 ({[]})
 [({})]

 Not Balanced
 (]
 ([)]
 {[}
 ((]

Matching Rules:

 '(' matches ')'

 '{' matches '}'

 '[' matches ']'

Algorithm:
 1.Traverse the expression from left to right
 2.If thecurrent character is an opening bracket
    ('(', '{', '[')
    push it into the stack
 3.If the current character is a closing bracket
    (')', '}', ']')

   -> If the stack is empty
      Expression is NOT Balanced
   -> Otherwise,
      Compare the top element with the current closing bracket
   -> If they do not match,
      Expression is NOT Balanced
   -> Otherwise
      Pop the stack
 4.After traversing the complete expression
   -> If the stack is empty
      Expression is Balanced
   -> Otherwise
      Expression is NOT Balanced

Function:
 bool isBalanced(string exp)
 {
    stack<char> s;

    for(char ch : exp)
    {
       if(ch == '(' || ch == '{' || ch == '[')
       {
           s.push(ch);
       }
       else if(ch == ')' || ch == '}' || ch == ']')
       {
           if(s.empty())
               return false;

          char top = s.top();

          if((top == '(' && ch == ')') ||
             (top == '{' && ch == '}') ||
             (top == '[' && ch == ']'))
            {
              s.pop();
            }
          else
          {
             return false;
          }
       }
    }
       return s.empty();
 }

Time Complexity -> O(n)

Space Complexity -> O(n)

INFIX, PREFIX AND POSTFIX:

Expression:
 An expression is a combination of operands and operators that represent a computation
 Example:

 A + B
 5 * 3
 (A + B) * C

Operand:
 The value on which operations are performed

 Examples:
 A, B, 5, 10

Operator:
 A symbol that performs an operatopn

Examples:
 +, -, *, /, %

Types of Expressions:

 Infix   -> A + B
 The operator is written between the operands

 Prefix  -> +AB
 The operator is written before the operands

 Postfix -> AB+
 The operator is written after the operands

Applications
 • Compiler Design
 • Expression Evaluation
 • Stack Implementation
 • Calculator Software

**
 • Infix is human-readable.
 • Prefix and Postfix do not require parentheses.
 • Prefix and Postfix are evaluated using Stack.

Infix to Postfix:
 Infix to prefix is the process of converting an infix expression into an equivalent postfix expression using a stack

Example:
 Infix   : A+B
 Postfix : AB+

 Infix   : (A+B)*C
 Postfix : AB+C*

Why convert Infix to Postfix?

 • Postfix expressions do not require parentheses
 • Easy for computers to evaluate
 • Eliminates ambiguity due to operator precedence
 • Used in compiler design and expression evaluation

Operator Precedence

 Highest

 ()          Parentheses

 *  /        Multiplication, Division

 +  -        Addition, Subtraction

 Lowest

Algorithm:

 1.Traverse the infix expression from left to right
 2.If the current character is an operand,
   add it directly to the postfix expression.
 3.If the current character is an opening
   parenthesis '(',
   push it into the stack.
 4.If the current character is a closing
   parenthesis ')',
   pop operators until '(' is found.
 5.If the current character is an operator,
   pop operators from the stack while they
   have higher or equal precedence.
   Then push the current operator.
 6.After traversal,
   pop all remaining operators from the stack.

Function:
 int precedence(char op)
 {
    if(op == '*' || op == '/')
      return 2;

    if(op == '+' || op == '-')
   return 1;

   return 0;
 }

Conversion Function:
 string infixToPostfix(string exp)
 {
   stack<char> s;
   string postfix = "";

   for(char ch : exp)
   {
      if(isalnum(ch))
      {
         postfix += ch;
      }
      else if(ch == '(')
      {
        s.push(ch);
      }
      else if(ch == ')')
      {
         while(!s.empty() && s.top() != '(')
         {
            postfix += s.top();
            s.pop();
         }
            s.pop();
         }
         else
            {
          while(!s.empty() && precedence(s.top()) >= precedence(ch))
          {
            postfix += s.top();
            s.pop();
          }
            s.push(ch);
            }
         }
      while(!s.empty())
      {

         postfix += s.top();
         s.pop();
      }

      return postfix;
   }
   
Example

 Infix

 A+B*C

 Process

 A  -> Output

 +  -> Push

 B  -> Output

 *  -> Push

 C  -> Output

 Pop *

 Pop +

 Postfix

 ABC*+
Time complexity -> O(n)

Queue:

 A Queue is a linear data structure that follows the FIFO (First In First Out) principlee

 The element inserted first is removed first

Examples:
 • Queue at a ticket counter
 • Queue in a bank
 • Printer queue

FIFO Principle:

 Insertion  --->  [10] [20] [30]  --->  Deletion

 First inserted = First removed

Basic OPerations:
 1.Enqueue
   Insert an element at the rear of the queue

 2.Dequeue
   Remove an element from the front of the queue

 3.Peek (Front)
   Returns the front element without removing it

 4.isEmpty()
   Checks whether the queue is empty

 5.isFull()
   Checks whether the queue is full
   (only in array implementation)

Queue Repersentation:
 Front ---> [10] [20] [30] <--- Rear

 Insertion takes place at the Rear

 Deletion takes place from the Front

Advantages:
  Follows FIFO order
  Easy insertion and deletion
  Useful for scheduling tasks
  Efficient for buffering operations

Disadvantages:
 No direct access to middle elements
 Array implementation has fixed size
 Simple array implementation may waste space after deletions

Applications
 CPU Scheduling
 Printer Queue
 Keyboard Buffer
 Breadth First Search (BFS)
 Network Packet Scheduling
 Call Center Systems

Queue Implementation using array:

 A queue can be implemented using array

 It requires
 Array
 Front
 Rear
 Size

Structure:
 struct Queue
 {
   int size;
   int front;
   int rear;
   int* arr;
 };

Initialization
 
 Queue q;

 q.size = 5;
 q.front = -1;
 q.rear = -1;
 q.arr =  new int[q.size];

Intially
 Front = -1
 Rear = -1

Why Front and Rear:
 Front:- Points to thefirst element of the queue

 Rear:- Points to the last inserted element

Overflow Condition:
 Queue is full when
 rear == size - 1

Underflow Condition:
 Queue is Empty when
 front == rear
 (Initially both are -1)

Advantages:
 Simple implementation
 Fast insertion and deletion
 Direct access using array index

Disadvantages:
 Fixed size
 Memory may be wasted after deletion
 Cannot reuse free space in a simple array queue

Queue Operations:
 The basic operations performed on a queue are:
 
 1.Enqueue
 2.Dequeue
 3.Peek(Front)
 4.isEmpty()
 5.isFull()

1.Enqueue
 Enqueue means inserting a new element at the rear of the queue

Algorithm:
 1.Check whether the queue is full
 2.If full, Queue overflow
 3.Otherwise,
     Increment Rear
 4.Insert the new element

Function:
 void enqueue(Queue &q, int value)
 {
    if(q.rear == q.size - 1)
    {
       cout << "Queue Overflow";
       return;
    }

    if(q.front == -1)
       q.front = 0;

    q.rear++
    q.arr[q.rear] = value;
 }

Time Complexity -> O(1)

2.Dequeue
 Dequeue means removing the front element from the queue

Algorithm:
 1.Check whether the queue is empty
 2.If empty, queue underflow
 3.Store the front element
 4.Move front one position ahead
 5.Return the deleted element

Function:

 int dequeue(Queue &q)
 {
   if(q.front == -1 || q.front > q.rear)
   {
       cout << "Queue Underflow";
       return -1;
   }

   int value = q.arr[q.front];
   q.front++;

   return value;
 }

Time complexity -> O(1)

3.Peek (Front)
 Peek returns the front element without removing it

Function:
 int peek(Queue &q)
 {
    if(q.front == -1 || q.front > q.rear)
    {
       cout << "Queue is Empty";
       return -1;
    }

    return q.arr[q.front];
 }

Time Complexity -> O(1)

4.isEmpty()
 A queue is empty when
 front == -1 || front > rear

Function:
 bool isEmpty(Queue &q)
 {
    return (q.front == -1 || q.front > q.rear);
 }

Time Complexity -> O(1)

5.isFull()
 A queue is full when
 rear == size - 1

Function:
 bool isFull(Queue &q)
 {
    return (q.rear == q.size - 1);
 }

Time complexity -> O(1)

**
 Insertion always takes place at Rear.
 Deletion always takes place from Front.
 Queue follows FIFO.
 Overflow occurs when Rear reaches the last index.
 Underflow occurs when the queue is empty.

Circular Queue:
 A Circular Queue is a linear data structure in which
 the last position is connected to the first position,
 forming a circle

 It follows the FIFO (First In First Out) principle

Why do we need a Circular Queue:
 In a simple array queue,the space freed after deletion be reused

Solution:
 A Circular Queue reuse the empty spaces by moving Rear back to the beginning when it reaches the last index

 This is called Wrap Around

Representaion:
Initial
 Front = -1
 Rear = -1
 
After Enqueue:
 Front ---> [10] [20] [30] <--- Rear

After Dequeue:
 Front ---> [30] [ ] [ ] <--- Rear

After More Enqueue:
 Rear moves to the beginning
 when the end of the array is reached

Front and Rear Movement:
 Next Position
 (index + 1) % size

Example:
 size = 5
 Rear = 4
 Next Rear
 (4 + 1) % 5 = 0

Full Condition:
 (front == (rear + 1) % size)

Advantages:
 Efficient memory utilization
 Reuses deleted spaces
 No unnecessary space wastage
 Enqueue and Dequeue are efficient

Disadvantages:
 Slightly more complex than a simple queue.
 Requires modular arithmetic

Applications:
 CPU Scheduling
 Circular Buffer
 Keyboard Buffer
 Printer Queue
 Network Packet Buffer
 Multimedia Streaming
 
Circular Queue Operations:
 The basic operations of a circular queue are:
 1.Enqueue
 2.Dequeue
 3.Peek(Front)
 4.isEmpty()
 5.ifFull()

Structure:
 struct Queue
 {
   int size;
   int front;
   int rear;
   int *arrr;
 };

Initialization:
 Queue q;
 q.size = 5;
 q.front = -1;
 q.rear = -1;
 q.arr = new int[q.size];

1.Enqueue:
 Enqueue means inserting an element at the rear

Algorithm:
 1.Check whether the queue is full
 2.If full, print Queue Overflow
 3.If queue is empty,
    set front = rear = 0
 4.Otherwise,
    rear = (rear + 1) % size
 5.Insert the element

Function:
 void enqueue(Queue &q, int value)
 {
    if((q,rear + 1) % q.size == q.front)
    {
      cout << "Queue Overflow";
      return;
    }

    if(q.front == -1)
    {
       q.front = 0;
       q.rear = 0;
    }
    else
    {
    q.rear = (q.rear + 1) % q.size;
    }

    q.arr[q.rear] = value;
 }

Time Complexity -> O(1)

2.Dequeue:
 Dequeue means removing the front element

Algorithm:
 1.Check whether thw queue is empty
 2.Store the front element
 3.If only one element exists,
    set front = rear = -1
 4.Otherwise,
    move front using
    (front + 1) % size
 5.Return deleted element

Function:
 int dequeue(Queue &q)
 {
    if(q,front == -1)
    {
      cout << 'Queue Underflow";
      return -1;
    }
    
    int value = q.arr[q.front];

    if(q.front == 1.rear)
    {
        q.front = -1;
        q.rear = -1;
    }
    else
    {
        q.front = (q.front + 1) % q.size;
    }
    return value;
 }

Time complexity -> O(1)

3.Peek
 Peek returns the front element

Function:
 int peek(Queue &q)
 {
    if(q.front == -1)
    {
       cout << "Queue is Empty";
       return -1;
    }
      
    return q.arr[q.front];
 }

Time Complexity -> O(1)

4.isEmpty()

Function:
 bool is Empty(Queue &q)
 {
    return (q.front == -1);
 }

Time Complexity -> O(1)

5.isFull()

Function:
 bool isFull(Queue &q)
 {
   return ((q.rear + 1) % q.size == q.front);
 }

Time Complexity -> O(1)

***
Important Formula:
 Next Index
 (index + 1) % size

Important points:
 Circular Queue follows FIFO
 Rear moves using modulo (%)
 Empty spaces are reused
 No memory wastage like a simple queue
 Overflow occurs when
   (rear + 1) % size == front
   
Queue Using Linked List:
 A Queue can be implemented using a linked list
 ir follows the FIFO (First In First Out) principle
 Insertionn is performed at the rear
 Deletion is performed from the front

Node Structure:
 struct Node
 {
    int data;
    Node* next; 
 };

Queue Representation:
 struct Queue
 {
    Node* front;
    Mode* rear;
 };

Initially:
 front = NULL
 rear = NULL

Enqueue:
 Enqueue means inserting a new node at the rear

Algorithm:
 1.Create a new node
 2.Store the value
 3.If the queue is empty,
   set front = rear = newNode
 4.Otherwise,
   rear->next = newNode
 5.Update rear = newNode

Function:
 void enqueue(Queue &q, int value)
 {
   Node* newNode = new Node();
   newNode->data = value;
   newNode->next = NULL;

   if(q.front == NULL)
   {
     q.front = newNode;
     q.rear = newNode;
   }
 }

Time Complexity -> O(1)

Dequeue
 Dequeue means removing the front node

Algorithm:
 1.Check whether the queue is empty
 2.Store the front node
 3.Move front to the next node
 4.Delete the old front node
 5.If front becomes NULL,
    set rear = NULL

Function:
 void dequeue(Queue &q)
 {
   if(q.front == NULL)
   {
      cout << "Queue Underflow";
      return;
   }

   Node* temp = q.front;
   q.front = q.front->next;

   if(q.front == NULL)
   {
     q.rear = NULL;
   }

   delete temp;
 }

Time Complexity -> O(1)

Peek:
 Peek returns the front element

Function:
 int peek(Queue &q)
 {
   if(qq.front == NULL)
   {
      cout << "Queue is Empty";
      return -1;
   }

   return q.front->data;
 }

Time Complexity -> O(1)

isEmpty:

Function:
 bool isEmpty(Queue &q)
 {
    return (q.front == NULL);
 }

Time Complexity -> O(1)

Advantages:
 Dynamic size
 No fixed capacity
 No memory wastage
 Enqueue and Dequeue take O(1)

Disadvantages:
 Extra memory required for pointers
 No direct access to elements

Double-Ended Queue (Deque)
 A Deque is a linear data structure in which inserttion and deletion can be performed in ehich 
 insertion and deletion can be performed from both and the rear

 Deque follows a flexible insertion and deletion mechanism

Operations:
 1.Insert Front
  Insert an element at the front

 2.Insert Rear
  Insert an element at the rear

 3.Delete Front
  Remove the rear element

 4.Delete Rear
  Remove the rear element

 5.Peek Front
  Returns the front element

 6.Peek Rear
  Returns the rear element

 7.isEmpty()
  Checks whether the deque is empty

 8.ifFull()
  Checks whether the deque is full 
  (only in array implementation)

Types of Deque
1.Input Restricted Deque
 Insertion is allowed only at one end
 Deletion is allowed from both ends

2.Output Restricted Deque
 Insertion is allowed from both ends
 Deletion is allowed only from one end

Advantages
 Insertion from both ends
 Deletion from both ends
 More flexible than a Queue
 Efficient implementation using arrays or linked lists

Disadvantages
 More complex than a simple Queue
 Array implementation has fixed size
 Slightly harder to implement

Applications
 Browser History
 Undo / Redo Operations
 Sliding Window Problems
 Job Scheduling
 Palindrome Checking
 Cache Implementation

Time Complexity:
 Insert Front -> O(1)
 
 Insert Rear  -> O(1)
 
 Delete Front -> O(1)
 
 Delete Rear  -> O(1)
 
 Peek Front   -> O(1)
 
 Peek Rear    -> O(1)
 
Sorting Algorithms:
 Sorting is the process of arranging data in a specific order

The two common orders are:
 Ascending order -> small to Large
 Descending order -> Large to Small
 
Why do we need Sorting?
 Makes searching faster
 Organize data
 Improves efficiency of algorithms
 Required in many applications like databases and searching

Types Of Sorting
1.Internal Sorting
 All data fits into the main memory (RAM)
Examples:
 Bubble sort
 Selection sort
 Insertion sort
 Merge sort
 Quick sort

2.External Sorting
 Data is too large to fit into RAM
 uses secondary storage such as Hard Disk or SSD

Stable Sorting:
 A sorting algorithm is stable if equal elements remain in the same 
 relative order after sorting

Example:
 Before Sorting
 30A 20 30B

 After Stable Sorting
 20 30A 30B

Unstable Sorting
 Equal elements may change their relative order

Example:
 Before Sorting
 30A 20 30B

 After Sorting
 20 30B 30A

Adaptive Sorting
 An adaptive sorting algorithm performs faster when the input is already partially sorted

Example:
 Insertion Sort

Non-Adaptive Sorting
 The algorithm performs almost the same amount of work regardless of whether the array is sorted or not

Example:
 Selection Sort

Applications:
 Searching
 Database Management
 Data Analysis
 Report Generation
 Compiler Design
 
Criteria for analysis of sorting Algorithms

1.Time Complexity
 Time Complexity tells how much time a sorting algorithm takes to sort the data

 Cases:
 Best Case
 Average Case
 Worst Case

2.Space Complexity
 Space  Complexity  tells how much extra memory is required by the sorting algorithm

3.Stability
 A stable sorting algorithm preserves the relative order of equal elements after sorting

4.Adaptiveness
 An adaptive sorting algorithm performs faster if the array is already sorted or nearly sorted

Bubble Sort:
 Bubble sort is a simple sorting algorithm that repeatedly compares adjacent elements and swaps them if they are in the wrong order
 After each pass, the largest element moves to the end of the array in ascending order

Algorithm:
1.Start from the first element
2.Compare two adjacent elements
3.If the first element is greater than the second element, swap them
4.Continue comparing adjacent elements
5.After one complete pass, the largest element reaches the end
6.Repeat the process for the remaining elements
7.Stop when the array is completely sorted

 void bubbleSort(int arr[], int n)
 {
   for(int i = 0; i < n - 1; i++)
   {
      bool swapped = false;

      for(int j = 0; j < n - i - 1; j++)
      {
         if(arr[j] > arr[j + 1])
         {
           int temp = arr[j];
           arr[j] = arr[j + 1];
           arr[j + 1] = temp;

           swapped = true;
         }
      }
         if(swapped == false)
         break;
   }
 }

Time Complexity-> Best Case -> O(n)
               -> Average Case -> O(n*n)
               -> Wrost Case -> O(n*n)

Space Complexity -> O(1)

Properties of Bubble Sort:
 Stable
 Adaptive (when optimized using swapped)
 In-Place

Insertion Sort:
 Insertion Sort is a sorting algorithm that builds the sorted array one element ata time
 It Works similar to arranging playing cards in your hand

Algorithm
1.Start from the second element
2.Store the current element in key
3.Compare key wwith elements before it
4.Shift elements greater than key one position to the right
5.Insert key at its correct position
6.Repeat until the entire array is sorted

 Void insertionSort(int arrr[], int n)
 {
   for(int i = 1; i < n; i++)
   {
      int key = arr[i];
      int j = i - 1;

      while(j >= 0 && arr[j] > key)
      {
          arr[j + 1] = arr[j];
          j--;
      }
          arr[j + 1] = key;
   }
 }
 
 int main()
 {
    int arr[] = {5, 3, 8, 4, 2};
    int n = 5;

    insertionSort(arr, n);

    cout << "Sorted Array: ";

    for(int i = 0; i < n; i++)
    {
       cout << arr[i] << " ";
    }

    return 0;
 }

Time Complexity -> Best Case -> O(n)
                -> Average Case -> O(n*n)
                -> Worst Case -> O(n*n)

Space Complexity -> O(1)

Properties:
 Stable
 Adaptivve
 In-Place

Bubble Sort ->  swaps adjacent elements
Insertion Sort -> shifts elements and inserts key at the correct position
 */
