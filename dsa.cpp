/*                        DSA
Introduction-> Data structure + algorithms
Data structure--> waay of storing data like
array
linkedlist
staack
queue
tree
graph
Algorithm-> step by step procedure to solve a problem
ex-> finding largesst number in a array

Important of DSA
makes program faster
uses les memory
immproves problem solvinng skills
help for coding interview

TIME COMPLEXITY
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

BIG O NOTATION
big o represents worst case complexity
some common complexity->
O(1)-> Constant Time
O(log n)-> Logarithmic Time
O(n)-> Linear time
O(n log n)-> Efficient sorting
O(n2)-> Nested Loops

Asymptotic Notations
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
           
ARRAY AND ABSTRACT DATA TYPE

Array is collection of element of same data types stored in contiguous memory locations

Characteristics:-
stores same type of data
stored in contiguous memory
index start from 0
fixed size
Advantages:-
fast access using index
easy to traverse
less memory overhead

Disadvantages
Fixed size
insertion is costly
deletion is costly
memory may be wasted

Abstract Data Type
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








*/