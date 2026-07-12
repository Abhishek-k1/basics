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
 linked list elements are not stored in contigous memory

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
             Head store address of first node
 Last Node-> The last node points to NULL
            This indicates the end of the linked list

Advantages of Linked List
 Dynamic Size-> can grow and shrink during execution
 Easy Insertion-> No shifting required
 Easy Deletion-> no shifting required
 Better Memory Utilizarion-> meomory allocated when needed

Disadvantages of Linked LIst
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

Insertion:
 Insertion means adding a new mode into a linked list

Tyoe of Insertion:-

1.Insertion at Beginninng
 Node* newNode =  new Node();
 newNode->data = 5;
 newNode->next = head;
 head = newNode;

Time complexity-> O(1)

2.Insertion at End
 Node* newNode = new Node();

 newNode->data = 40;
 newNode->next = NULL;

 Node* temp = head;

 while(temp->next != NULL)
 {
    temp = temp->next;
 }

 temp->next = newNode;
 
Time complexity-> O(n)

3.Insertion at a given position
 Node* newNode = new Node();

 newNode->data = 25;

 Node* temp = head;

 for(int i =1; i < position - 1; i++)
 {
    temp = temp->next;
 }

 newNode->next = temp->next;
 temp->next = newnode;

Time complexity-> O(n)

4.Insertion after a given node
 Node* newNode = new Node();

 newNode->data = 25;

 newNode->next = temp->next;
 temp->next = newNode;

Time complexity-> O(1)

**Always connect the new node first, then update the privous node
correct order:
 newNode->next = temp->next;
 temp->next = newNode;
*/