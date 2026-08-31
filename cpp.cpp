/* 
Introduction to C++:
 C++ is a general purpose programming language used to develop different types of software and applicationns
 C++ is an extensionn of the C Programming language and supports both procedural and object-oriented programming

Features of C++:
 Fast and efficient
 Supports Object-Oriented Programming(OOP)
 Supports procedural programming
 Portable
 Provides low-level memory control
 Rich Standard Library
 Used for developing high-Performance applications

Where is C++ Used?
 C++ os commomly used to:
 Game development
 Operating  system
 System software
 Desktop applications
 Embedded systems
 Compilers
 High-Performance applications

Compiler:
 A compiler converts source code written by the programmer into machinne code that the computer can excute
 C++ Source Code
       ↓ 
    Compiler 
       ↓ 
   Machine Code 
       ↓ 
    Program
    
C++ File Extension:
 C++ source files generally use:
 .cpp
 program.cpp
 student.cpp

Basic Structure of a C++ Program:
 Basic C++ Program
 #include <iostream>
 using namespace std;

 int main()
 {
   cout << "hello world";
   return 0;
 }

1.#include <iostream>
 #include is a preprocessor directive
 It tells the preprocessor to include the iostream header file in the program
 iostream provides input/optput features such as:
 cout -> output
 cin -> input

2.Header File
 A header file contains declarations and functionality that can be used in a C++ program

Example:
 #include <iostream>
 Here:
 iostream -> Header file

3.Using namespace std;
 std is the standard namespace
Using:
 using namespace std;

allows us to write:
 cout
 cin

Instead of:
 std:cout
 std:cin

4.Main() Function
 int main()
 {
    // code
 }

 main() is the entry point of a C++ program
 Program execution starts from the main() function

5.int
 int main()
 {
    // statements
 }

 Curly braces define the body/blockof the function
 The statements inside { } belong to main()

7.Cout
 cout << "Hello world";
 cout is used to display output on the screen
 The << operator is called the insertion operator

Example:
 cout << "Hello";
 cout << 10;

8.Semicolon;
 A semicolon marks the end of a statement
Example:
 cout << "Hello";
 return 0;
 Most C++ statements end with ;

9.return 0;
 return 0;
 it returns 0 from the main() function
 0 generally indicated that the program finished successfully

10.Comments
 Comments are notes written inside the program for understanding the code

Single line comment
 // This is a comment

Multi-line commentt

/*  This is a multi-line comment 
*/

/*
What is a Variable?
 A Variable is a named memory location used to store data
Example:
 int age = 20;
 Here:
 int -> Data Type
 age -> Variable name
 20 -> value
 The value stored in a variable can be changed during program execution

Declaring a Variable:
 Declaration  means telling the compiler the data type and name of aa variable
Syntax:
 data_type variable_name;

Example:
 int age;
 float marks;
 char grade;

Initializing a Variable:
 Initialization means assigning a value to a variable when it is created
Example:
int age = 20;
float marks = 85.5;
char grade = 'A';

Declaration + Initalization:
 Both can be done together
 int age = 20;
 Or separately:
 int age;
 age = 20;

Changing the value of a variable
 A variable's value can be changed
 int  age  = 20;
 age = 21;
 cout << age;
Output: 21

Rules for Naming Variables
A variable name:
 Can contain letters, digit and underscore_
 Cannot start with a digit
 Cannot contain spaces
 Cannot use C++ keywords
 Is Case-sensitive

Case Sensitivity:
 C++ is case-sensitive
 These are different variables:
 int age;
 int Age;
 int AGE;

Why Use Comments?
Comments help to:
 Explain the code
 Make code easier to understand
 Improve code readability
 Remenber the purpose of a section of code

Variable Scope & Data Types:

    Variable Scope
          ↓
     ┌────┴────┐
     ↓         ↓
    Local     Global
     ↓         ↓
    Inside    Outside
    function  all functions
    Data Types
        ↓
     ┌───┼────┬────┬────┐
     ↓   ↓    ↓    ↓    ↓
    int float double char bool

Variable Scope
 Scope means the region of a program where a variable can be accessed or used

 There are two important types:
 1.Local Vaiable
 2.Global Variable


Local Variable

 A variable declared inside a function or block is called a local variable

Example:
 int main()
 {
   int age = 20;
   cout << age;
   return 0;
 }
Here, age is a local variable because it is declared inside main()
 Can be accessed only inside the block/function where it is declared
 Created when the block/function starts executing
 Destroyed when the vlock/function ends

Global Variable
 A variable declared outside all functions is called  a global variable

Example:
 #include <iostream>
 using namespace std;

 int age = 20;

 int main()
 {
   cout << age;
   return 0;
 }

 Here, age is a global variable
 Declared outside all functions
 Can be accessed by multiple functions in the program
 Exists throughout the execution of the program

Data Types in C++
 A data type specifies what type of data a variable can store
Example:
 int age = 20;
 Here, int tells the compiler that age stores an integer value

Basic Data Types

int -> Used to store whole numbers
 int age = 20;
 int marks = 90;

float -> Used to store decimal numbers
 float price = 99.5;

double -> Used to store decimal numbers with greater precision than float
 double pi = 3.141592;

Char -> Used to sstore a single character
 char grade = 'A';
 Character values are written inside single quotes

bool -> Used to store a Boolean value
 it can have:
 true
 false

Example:
 bool isPassed = true;

void -> void represents no value
 it is commomly used with functions thaqt do not retirn a value
Example:
 void display()
 {
   cout << "Hello";
 }

Basic Input/Output
 cout is used to display output on the screen
Syntax:
 cout << value;

Insertion Operator(<<)
 The << operator is called the insertion operator
 It is used with cout to send data to the output stream
Example:
 cout << "Age: " << age;

Input -> cin is used to take input from the user
Syntax:
 cin >> variable;
 The >> operator is called the extraction operator

endl -> endl is used to move the cursor to the next line

\n -> \n is another way to move to a new line

Header Files:
 A header file contains declarations and functionality that can be used in a C++ program
 Header files are included using the #include directive
Example:
 #include <iostream>
 Here:
 #include -> Preprocessor directive
 iostream -> Header file

Common Header Files:
<iostream> -> used for input and output
 Provides 
 cin
 cout

<cmath> -> Provides mathematical functions

<string> -> Used for working  with strings

Operators:
 An operator is a symbol used to perform an operation on values or variables

Arithmetic Operators
 Used to perform mathematical operations
 +  -> Addition
 -  -> Subtraction
 *  -> Multiplication
 /  -> Division
 %  -> Modulus(remainder)

Relational Operators
 Used to compare two values
 ==  -> Equal to
 !=  -> Not equal to
 >   -> Greater than
 <   -> Less than
 >=  -> Greater than or equal to
 <=  -> Less than or equal to
 The result is generally
 True represented as 1
 False repressented as 0

Logical Operators
 Used to combine or modify conditions
 &&  -> Logical AND True only when both conditions are true
 ||  -> Logical OR True when at least one condition is true
 !   -> Logical NOT Reverse the result

Assignment Operators
 Used to assign values to variables
Basic assignment
 int a = 10;
 = assigns 10 to a
Compound Assignment
 Operator	Example	   Equivalent to
 +=	      a += 5	   a = a + 5
 -=	      a -= 5	   a = a - 5
 *=	      a *= 5	   a = a * 5
 /=	      a /= 5	   a = a / 5
 %=	      a %= 5	   a = a % 5

Increment and Decrement Operators

Increment ++
 Increase a value by 1
 int a = 5;
 a++;

Decrement --
 Decrease a value by 1
 int a = 5;
 a--;

Pre-Increment and Post-Increment

Pre-Increment
 ++a;
 First increase the value, then uses it

Post-Increment
 a++;
 First uses the current value, then increases it

Similarly:
 --a;  -> Pre-decrement
 1--;  -> Post-decrement

Conditional / Ternary Operator:
 The ternary operator is a short form of if-else
Syntax:
 condition ? value if true : value if false;
Example:
 int age = 20;
 string result = (age >= 18) ? "Adult" : "Minor";

sizeof Operator
 sizeof gives the size of a data type or variable in bytes
Example:
 int a;
 cout << sizeof(a);
 The exact size of a type can depend on the C++ inplementation

Reference Variable:
 A reference variable is another name(alias) for an existing variable
 It does not create a separate variable
Syntax:
 data_type &reference_name = original_variable;

Example:
 int a = 10;
 int &ref = a;

 cout << a << endl;
 cout << ref << endl;
Output:
 10
 10
Here:
 a -> Original variable
 ref -> Reference (another name of a)

Changing Value Through Reference
 A reference and the  original variable refer to the same variable
Example:
 int a = 10;
 int &ref = a;
 ref = 20;
 cout << a;
Output:
 20
 Because ref is another name for a

Important Points About Reference Variables
 A reference is an alias for an existing variable
 It must be initialized when declared
 It cannot normally be made to refer to a different variable after initialization
 Changing the reference changes the original variable
 Both refer to the same underlying object
Example:
 int a = 10;
 int b = 20;

 int &ref = a;
 ref = b;
 This does not make ref refer to b
 Instead, it assigns the value of b to a
 After this:
 a = 20
 b = 20
 ref -> a

Typecasting:
 Typecasting means converting a value from one data type to another data type
Example:
 int a = 10;
 float b = (float)a;
 Here,the int value is converted to float

Types of Typecasting:
 There are two basic forms you should remember at this stage
1.Implicit Typecasting
2. Explicit Typecasting

Implicit Typecasting
 Implicit typecasting happens automatically by the compiler
Example:
 int a = 10;
 float b = a;
Here:
 int -> float
 The compiler automatically converts the integer value into a floating-point value

Explicit Typecasting
 Explicit typecasting is performed manually by the programmer
Example:
 float a = 10.5;
 int b = (int)a;
Now:
 a = 10.5
 b = 10
 The decimal part is discarded when converting to int

C-style Typecasting:
Syntax:
 (type) value;

Example:
 float x = 10.5;
 int y = (int)x;

Output:
 10

Another example:
 int a = 5;
 int b = 2;

 float result = (float)a / b;
 cout << result;
Output: 2.5

Why (float) is important here
 without conversion: 5 / 2
 both operands are integers, so integer division gives: 2

 with:
 (float)5 / 2
 the calculation is performed using floating-point arithmetic: 2.5

Static cast:
 Modern C++ provides a clearer way to perform explicit conversions:
 static_cast<new_type>(value)
Example:
 float x = 10.5;
 int y = static_cast<int>(x);
Here:
 float -> int

Constants:
 A constant is a value that cannot be changed after it has been initialized
 the constant keyword is used to create a constant
Syntax:
 const data_type variable_name = value;
Example:
 const int x = 10;
 cout << x;
 Once x is declared as const, its value cannot be changed
 const int x = 10;
 x = 20; // Error
 Use const when a value  should remain unchanged throughout the program
Example:
 const float PI = 3.14159;

Manipulators
 Manipulators are used to control the formatting of input and output
 Common manipulators include:
 endl;
 setw
 setprecision
 fixed
 The <iomanip> header is used for manipulators such as setw  and setprecision
 #include <iomanip>

endl -> endl moves the cursor to the next line

setprecision()
 setprecision() controls the number of digit shown in floating-poinnt output
 it is available through <iomanip>
Example:
 #include <iomanip>
 double pi = 3.14159265;
 cout << setprecision(4) << pi;

Fixed
 Fixed is used with setprecision() to specify the number of digit after the decimal point

setprecision(2)
 without fixed -> controls significant digits in the formatted output

fixed << setprecision(2)
 shows 2 digits after the decimal point

Operator Precedence
 Operator precedence determines the order in which operators are evaluated in an expression
 Multiplication has higher precedence than addition

Parentheses()
 Parentheses can be used to change the normal order of evaluation
Example:
 int result = (10 + 5) * 2;
 first add  then multiply

Basic Operator precedence
  Highest 
    ↓ 
  ( )        Parentheses 
  ++ --      Increment / Decrement 
  * / %      Multiplication / Division / Modulus 
  + -        Addition / Subtraction 
  < > <= >=  Relational 
  == !=      Equality 
  &&         Logical AND 
  ||         Logical OR 
  = += -= ... Assignment 
    ↓ 
  Lowest

Associativity
 When operators have the same precedence, associativity determines the direction in which they  are evaluated

 10 + 5 * 2 = 20
 (10 + 5) * 2 = 30

Control Structure:
 Control structures control the flow/order in which statements are executed in a program
Main types:

Control Structures
       |
       ├── Sequence
       ├── Selection
       └── Iteration

Sequence Structure
 In a sequence structure, the statements are executed one after another in order
 Statement 1 
     ↓ 
 Statement 2 
     ↓ 
 Statement 3 
     ↓ 
 Statement 4

Selection Structure
 Selection allows a program to make decision based on a condition
 Common selection statements:
 if
 if-else
 else-if
 switch-case

if Statement
 The if statement executes a block of code only when the condition is true
Syntax:
 if(condition)
 {
    // statements
 }

if-else Statement
 if-else is used when therre are two possible outcomes
Syntax:
 if(condition)
 {
   // if condition is true
 }
  else
  {
   // if condition is false
  }

else-if Ladder
 An else-if ladder is used when there are multiple conditions
Syntax:
 if(condition1)
 {
  // statements
 }
 else if(condition2)
 {
  // statements
 }
 else-if(conditionn3)
 {
  // statements
 }
 else
 {
  // default statements
 }
  Once  a true condition is found, its block executes and the remaining else-if condition are skipped

Nested if
 An if statement can be placed inside another if statement
 This is called a nested if
Syntax:
 if()
 {
  if()
 }

Switch-Case
 switch-case is used when we want to choose one option from multiple fixed choices based on the value of an expression
Syntax:
 switch(expresssion)
 {
    case value1:
      // statements
      break;

    case value2;
      // statements
      break;

    default:
      // statements
 }

break
 break is used to exit the switch statement
Example:
 case 1:
   cout << "One";
   break;
After executing the case, break prevents execution from continuing into the next cases
If break is omitted, execution can continue

default
 default executes when none of the casess match

Ternary Operator
 The ternary operator is anoother way to write a simple if-else
Syntax:
 condition ? value is true : value is false;

Iteration Structure
 Iteration means repeating a block of code
 Loops are used for iteration
 
Loops:
 A loop is used to execute a block of code repeatedly as long as a given condition is satisfied
 Loops help avoid writing the same code multiple times

Types of Loops 
 for loop
 while loop
 do-while loop

for Loop
 A for loop is generally used when we know how many times we want to execute a block of code
Syntax:
 for(initialization; condition; update)
 {
  // statements
 }

Working:
  Initialization
        ↓
     Condition
        ↓
     Statements
        ↓
       Update
        ↓
     Condition
        ↓
      Repeat

while Loop
 A while loop executes a block of code as long as the condition is true
Syntax:
 while(condition)
 {
  // statements
 }

 The condition is checked before executing the loop body
 Therefore, while is called an entry-controlled loop

do-while Loop
 A do-while loop executes the loop body at least once, even if the condition is false
Syntax:
 do
 {
  // statements
 }
  while(condition);

  The condition is checked after executing the loop body
  Therefore, do-while is called an exit-controlled loop

Difference Between for, while and do-while

 Feature	           for	                       while	                            do-while

Condition            Before	                   Before	                               After
checked	

Minimum               0	                           0	                                 1
executions	

Best used when 	   Number of iterations      Number of iterations                 Code must execute 
                   is known		               is uncertain                          at least once

Type	             Entry-controlled	        Entry-controlled	                   Exit-controlled

Infinite Loop
 An infinite loop is a loop that never ends because its condition always remains true

break Statement
 break is used to immediately terminate a loop
Example:
 for(int i = 1; i <= 10; i++)
 {
   if(i == 5)
   {
    break;
   }
    cout << i << " ";
 }
 when i becomes 5, the loop stops



continue Statement
 continue skips the current iteration and moves to the next iteration
Example:
 for(int i = 0; i <= 5; i++)
 {
  if(i == 3)
  {
   continue;
  }
   cout << i << " ";
 }
  when i == 3, that iteration is skipped

Output: 0 1 2 4 5

Nested Loops
 A loop inside another loop is called a nested loop
Example:
 for(int i = 1; i <= 3; i++)
 {
  for(int j = 1; j <= 2; j++)
  {
   cout << i << " " << j << endl;
  }
 }
 The inner loop executes completely for every iteration of the outer loop
 Nested loops are commonly used for:
 Patterns
 2D arrays
 Matrices
 Some searching/sorting problems

 break -> stops the loop
 continue -> skips one iteration

Pointers:
 A pointer is a variable that stores the memory address of another variable
Example:
 int a = 10;
 int* ptr = &a;
Here:
 a -> normal integer variable
 &a -> address of variable a
 ptr -> pointer variable
 ptr stores the address of a

Pointer Syntax:
 data_type* pointer_name;
Example:
 int* ptr;
 This means ptr is a pointer that can store the address of an int variable

Address-of Operator &
 The & operator is used to get the memory address of a variable
Exammple:
 int a = 10;
 cout << &a;
 This prints the memory address of a

Dereference Operator *
 The * operator is  used to access the value stored at the address held by a pointer
Example:
 int a = 10;
 int* ptr = &a;
 cout << *ptr;
Here:
 ptr -> address of a
 *ptr -> value of a

Example of pointer
 int a = 10;
 int* ptr = &a;

 cout <<"Value of a:" << a << endl;
 cout <<"Address of a:" << &a << endl;
 cout <<"Value stored in ptr:" << ptr << endl;
 cout <<"Value using ptr:" << *ptr  << endl;

 a -> value
 &a -> address of a
 ptr -> address stored in pointer
 *ptr -> value at that address

Changing Value Using Pointer
 A pointer can be used to change of the original variable
Example:
 int a = 10;
 int* ptr = &a;
 *ptr = 20;
 cout << a;
Output:
 20
 Because ptr points to a, changing *ptr changesa

Pointer and Memory
 Conceptually:
 variable

         a
    +-------+
    |  10   |
    +-------+
      1000        ← memory address
    
    
Pointer:

       ptr
    +-------+
    | 1000  |
    +-------+

Therefore:

    ptr  → 1000
    *ptr → 10

Pointer to Pointer
 A pointer can also store the address of another pointer
Example:
 int a = 10;
 int* ptr = &a;
 int** pptr = &ptr;
Here:
 a -> stores 10
 ptr -> stores address of a
 pptr -> stores address of ptr

Accessing the value:
 cout << *8pptr;

Output:
 10

NULL/nullptr Pointer
 A pointer that does not point to a valid object can be initialized with nullptr
Example:
 int* ptr = nullptr;
 nullptr means the pointer currently points to nothing
 Always avoid dereferencing a null pointer
 // Wrong
 cout << *ptr;
 because ptr does not point to a valid integer

Pointer with Arrays
 The name of an array can act like a pointer to its first element in many expressions
Example:
 int arr[] = {10, 20, 30};
 int* ptr = arr;
 cout << *ptr;
Output:
 10
 pointer arithmetic can be used to access array elements
 cout << *(ptr + 1);
Output:
 20

Pointer Arithmetic
 Pointers can be incremented or decremented
Example:
 int arr[] = {10, 20, 30};
 int* ptr = arr;
 cout << *ptr << endl;
 ptr++;
 cout << *ptr << endl;
Output
 10
 20
 When ptr++ is performed, the pointer moves to the next element of its type

Why Do We Use Pointers?
 Pointers are useful for:
 Dynamic memory allocation
 Arrays
 Passing data efficiently
 Linked lists
 Trees
 Graphs
 Dynamic data structures
 Direct memory access
 Pointers are especially important in DSA because structure such as linked lists and trees use pointers to connect nodes

Relation Between Array and Pointer
 The name of an array represents the address of its  first element in most expressions
Examplr=e:
 int arr[] = {10, 20. 30, 40};
 int* ptr = arr;
Here:
 arr -> address of arr[0]
 ptr -> address of arr[0]
 *ptr -> value of arr[0]

Accessing Array Elements Using Pointer
 int arr[] ={10, 20, 30};
 int* ptr = arr;

 cout << *ptr << endl;
 cout << *(ptr + 1) << endl;
 cout << *(ptr + 2) << endl;
Here:
 *ptr -> arr[0]
 *(ptr + 1) -> arr[1]
 *(ptr + 2) -> arr[2]

Array Indexing and pointer Arithmetic
 The following equivalent:
 arr[i] = *(arr + i)
Example:
 int arer[] = (10, 20, 30 ,40);
 cout << arr[2] << endl;
 cout << *(arr + 2) << endl;
Both give:
 30

Pointer Increment
 When a pointer is incremented, it moves tothe next element of the array
Example:
 int arr[] = {10, 20, 30};
 int * ptr = arr;
 cout << *ptr << endl;
 ptr++;
 cout << *ptr << endl;
Output:
 10
 20

Pointer Decrement
 Ptr-- moves the pointer to the previous element
Example:
 int arr[] = {10, 20, 30};
 int* ptr = &arr[2];
 cout << *ptr << endl;
 ptr--;
 cout << *ptr <, endl;
Output:
 30
 20

Pointer Arithmetic Operations
 For a pointer ptr:
 ptr + 1 -> next element
 ptr - 1 -> previous element
 ptr + n -> n element forward
 ptr - n -> n element backward

Pointer Arithmetic Depends on Data Type
 The amount by which a pointer moves depend on the data type of the pointer
Example:
 int* ptr;
 ptr++;
 moves to the next int element
 The compiler automatically moves the pointer by the size of the data type

Traversing an Array Using Pointer
Example:
 int arr[] = {10, 20, 30, 40, 50};
 int* ptrr = arr;
 for(int i = 0; i < 5; i++)
 {
  cout << *(ptr + i) << " ";
 }

Pointer Difference
 Two pointers pointinng to elements of the same array can be subtracted
Example:
 int arr[] = {10, 20, 30, 40, 50};
 int* p1 = &arr[1];
 int* p2 = &arr[4];
 cout << p2 - p1;
Output:
 3

Structure
 A structure (struct) is a user-defined data type thatallows us to group different types pf data under one frame
Syntax:
 struct structureName
 {
  data_type member1;  
  data_type member2;  
  data_type member3;  
 };

Creating Structure Variables
 struct student
 {
  string name;
  int age;
  float marks;
 };

 int main()
 {
  student s1;
  s1.name = " ";
  s1.age = ;
  s1.marks =  ;

  cout << s1.name << endl;  
  cout << s1.age << endl;  
  cout << s1.marks << endl;  
 }

Accessing Members
 The dot (.) operator is used to access structure members
 s1.name
 s1.age
 s1.marks

Structure Initialization
 A sttructure can also be initialized while creating the variable
 student s1 = {"name", age, marks};
 The values are assigned according to the order of members in the structure

Array of Structures
 We can create an array containing multiple structure objects
Example:
 struct student
 {
  string name;
  int age;
 };

 student students[3];
 Now students can store information about 3 students

Structure with Pointer
 A pointer can also point to a structure
Example:
 Student s1;
 Student* ptr = &s1;
 Members can be accessed using:
 ptr->name
 ptr->age
 The -> operator is used when accessing structure members through a pointer

 Normal structure object -> .
 Structure pointer -> ->

Example:
 s1.age 
 ptr->age

Union
 A union is similar to a structure, but all mmembers share the same memory location
Syntax:
 union Data
 {
  int i;
  float f;
  char c;
 };

Structure -> seperate memory
Union -> shared memory

Enum
 enum stands for enumeration
 An enum is a user-defined type that consists of a set of named integral constants
Syntax:
 enum Day
 {
  Monday,
  Tuesday,
  Wednesday,
  Thursday,
  Friday
 };
 Enums make code more readable by giving meaningful names to related values

Default Values inEnum
 By default enum values start from 0
Example:
 enum Day
 {
  Monday,
  Tuesday,
  Wednesday
 };
Conceptually
 Monday -> 0
 Tuesday -> 1
 Wednesday -> 2

Assigning Custom Values to Enum
 We can also assign our own values
Example:
 enum Status
 {
  Success = 1,
  Failed = 0
 };

Here:
 Success -> 1
 Failed -> 0

Why Use Structures?
 Structures are useful when we need to store different types of information belongingto one entity
Example:
 A student has:
 Name
 Age
 Marks
 Roll Number
Instead of creating unrelated variables, we can group them
 struct Student
 {
  string name;
  int age;
  float marks;
  int rollNo;
 };

Why Use Union?
 Union is useful when different members share the same memory and we need only one of those values at a time
 This can help save memory in appropiate situations

Why Use Enum?
 Enums make program easier to read
 Instead of:
 int day = 2;
 we can write:
 Day day = Tuesday;
 The second version is more meaningful and readable

Functions
 A function is a block of code that performs a specific task

Functions helps us:
 Avoid repeating code
 Make programs easier to understand
 Make code reusable
 Divide a large program into smaller parts

Syntax:
 return_type function_name(parameters)
 {
   // function body
 }

Example:
 int add(int a, int b)
 {
  return a + b;
 }
Here:
 int -> return type
 add -> function name
 a, b -> parameters
 return a + b -> value returned by function

Function Call
 A function is executed when we call it
Example:
 int result =  add(10, 20);
 cout << result;

Parameter
 A variable written in the function definition is called a parameter
 int add(int a, int b)
 Here a and b are parameters

Argument
 The actual value passed when calling the function are called argument
 add(10, 20)
 Here 10 and 20 are arguments

 Function definition -> parameter
 Function call -> argument

Return Statement
 The return statement sends a value back to the place where the function was called
Example:
 int square(int n)
 {
  return n * n;
 }
Function call:
 cout << square(6)

void Function
 A function with void as its return type does not return a value
Example:
 void greet()
 {
  cout << "Good morning";
 }
Calling:
 greet();

Function with No Parameters
 A function can have no parameters
Example:
 void message()
 {
  cout << "Hello World";
 }
Call:
 message();

Function with Parameters
 A function can accept values through parameters
Example:
 void greet(string name)
 {
  cout << "Hello" << name;
 }
Call:
 greet("shyam");

Function with Parameter and Return Value
Example:
 int multiply(int a, int b)
 {
  return a * b;
 }
Call:
 int result = multiply(5, 6);
 cout << result;

Function Prototype
 A function prototype tells the compiler about a function before the function is actually defined
 it specifies:
 Return type
 Function name
 Parameter types
Syntax:
 return_type function_name(parameter_types);
Example:
 int add(int, int);
 This is the function prototype

Why Do We Need a Function Prototype?
 Normally, needs to know about a function before it is called
Example:
 #include <iostream>
 using namespace std;
 int add(int, int);    // Finction prototype
 int main()
 {
  cout << add(10, 20);
 }

 int add(int a, int b)
 {
  rteurn a  + b;
 }
Here, the prototype tells the compiler
 There is a function named add that takes two int values and return as int
 Therefore, main() can call it before its full definition appears

Function Declaration / Prototype
 int add(int, int);
 it tells the compiler about the function

Function Definition
 int add(int a, int b)
 {
  return a + b;
 }
 it contains the actual implementation of the function

Passing Values to a function
 By default, ordinary parameters are passed by value
Example:
 void change(int x)
 {
  x = 100;
 }

 int main()
 {
   int a = 10;
  change(a);
  cout << a;
 }
Output:
 10
 The function receives a copy of a, so changing x does not change the original a

Advantages of Functions
 Code Resuability -> Same function can be called multiple times
 Reduces code repetition -> Write the logic once
 Easy Debugging -> Problems can be isolated inside functions
 Better Organization -> Large programs can be divided into smaller tasks
 Easy Maintenance -> Changes can be made in one place

Call by Value
 In call by value, a copy of the actual value is passed to the function
 Any changes made to the parameter do not affect the original variable
Example:
 void change(int x)
 {
  x = 100;
 }

 int main()
 {
   int a =  10;
   change(a);
   cout << a;
 }
Output:
 10
Here:
 a = 10 
  ↓ 
 copy of a is passed to x 
  ↓ 
 x = 100 
  ↓ 
 original a remains 10

Call by Reference
 In call bu reference, the function parameter becomes a reference (alias) to the original variable
 Therefore, changes made inside the function affect the original variable
Example:
 void change(int &x)
 {
   x = 100;
 }

 int main()
 {
   int a = 10;
   change(a);
   cout << a;
 }
Output:
 100
Here:
 a = 10 
  ↓ 
 x refers to a 
  ↓ 
 x = 100 
  ↓ 
 a also becomes 100

Swapping Two Numbers
Call by Value
 void swap(int a, int b)
 {
   int temp = a;
   a = b;
   b = temp;
 }

 The original values are not swapped because the function works on copies

Call by Reference
 void swap(int &a, int &b)
 {
   int temp = a;
   a = b;
   b = temp;
 }

Here original value are swap

Call by Reference and Reference Variables
 The & in a function parameter creates a reference to the original variable
Example:
 void change(int &x)
 {
   x = 50;
 }

 Here x is a reference variable
 So:
 x -> another name(alias) of the original variable

WHen to Use Call by  Reference
Call by refernce is useful when:
 We want a functionn to modify the original variable
 We want to avoid making unnecessary copies of large objects
 We need to return/change multiple values through parameters
 
Inline Function
 An inline function is a function where the compiler may replace the function call with the actual function code to reduce function-call overhead
Syntax:
 inline return_type function_name(parameters)
 {
   // function body
 }

 Use the inline keyword before the function
 It is mainly useful for small and frequently called functions
 inline is a request to the compiler; the compiler may ignore it
 It is not a gurantee that the function will be expanded inline

Inline -> useful for small functions

Default Arguments
 A default argument is a value automatically used by a function when the caller does not provide that argument
Example:
 int sum(int a, int b = 10)
 {
    return a + b;
 }
Now:
 cout << sum(5);
Output:
 15
 Because b was not provided, its default value 10 is used
 If we provide both arguments:
 cout << sum(5, 20);
Output:
 25
Here, the provided value 20 replaces the default value

Default arguments should generally be specified from Right to Left
Correct:
 int sum(int a, int b = 10, int c = 20);

Incorrect:
 int sum(int a = 10, int b);
 
 Because a non-default parameter cannot follow a default parameter in the same parameter list

Constant Arguments
 A constant argument can be passed using the const keyword so that the function modify that parameter
Example:
 void display(const int x)
 {
  cout << x;
 }

 x = 20;  Inside the function, this is not allowed
 because x is constant

Example with const Reference
 A common and useful form is:
 void display(const int &x)
 {
  cout << x;
 }
Here:
 & -> reference
 const -> cannot modify the original value through x
Example:
  int a = 10;
  display(a);
  The function can read a, but cannot modify it through x

Normal Parameter
 void change(int x)
 {
  x = 20;
 }
 The parameter can be changed inside the function

Constant Parameter
 void change(const int x)
 {
  x = 20; // Error
 }
 The parameter cannot be modified inside the function

Recursion
 Recursion is a technique in ehich a function calls itself to soolve a problem
 A function that calls itself is called a recursive function

Structure:
 return_type function_name()
 {
  // Base Case

  // Recursive Call
  function_name();
 }

Base Case
 The base case is the conndition that stops the  recursive function 
 Without a base case, the function would continue calling itself indefinitely
Example:
 if(n == 0)
   return;

 Every recursive function should have a condition that eventually stops the recursion

Recursive Case
 The recursive case is the part where the function calls itself with a smaller or simpler problem
Example:
 countDown(n - 1);
 Here the problem becomes smaller because n decrease by 1

Base Case -> STOP
Recursive Case -> CALL AGAIN

Factorial Using Recursion
 int factorial(int n)
 {
  if(n == 0 || n == 1)
   return 1;

   return n * factorial(n - 1);
 }
 cout << factorial(5);

Recursion and Call Stack
 Every Function call is stored  in the call stack
 Recursive calls use stack memory

Fibonacci Using Recursion
 The Fibonacci sequence starts with:
 0 1 1 2 3 5 8 13 

 Each number is the sum of the previous two numbers
Recursive Function:
 int fibonacci(int n)
 {
  if(n == 0)
   return 0;

  if(n == 1)
   return 1;

  return fibonacci(n - 1) + fibonacci(n - 2);
 }

Advantages of Recursion
 Makes some problems easier to express
 Useful for problems that naturally break into smaller subproblems
 Commonly used in:
 Trees
 Graphs
 Divide and conwuer
 Backtracking
 Searching and Sorting algorithms

Disadvantages of Recursion
 Uses additional stack memory
 Can be slower because of repeated function calls
 Incorrect or missing base cases can cause infinite recursion
 Too many recursive calls can cause stack overflow

Function Overloading
 Function overloading means defining multiple function with the same name but with different parameters
 The compiler decides which funcction to call based on the arguments passed

How Function Overloading Works
 The compiler identifies an overloaded function using its parameter list
The parameter list can differ by:
 Number of parameters
 Type of parameters
 Order of parameters

Different Number of Parameters
 int add(int a, int b)
 {
   return a + b;
 }

 int add(int a, int b, int c)
 {
  return a + b + c;
 }

Different Data Types
 Functions can have same name but different parameter types
 innt square(int x)
 {
   return x * x;
 }

 double square(double x)
 {
  return x * x;
 }

Different Order of Parameters
 The order of parameter types can also be different
 void display(int x, double y)
 {
  cout << "int, double";
 }

 void display(double x, int y)
 {
  cout << "double, int";
 }

Return Type Alone Cannot Overload a Function
 int add(int a, int b)
 {
  return a + b;
 }

 double add(int a, int b)
 {
  return a + b;
 }

 Both functions have the same:
 Function name
 Parameter types
 Number of parameters
 Only the return type is different
Function overloading cannot be done using return type alone

Function Overloading and Compiler
 Function Overloadinng is an example of compile-time polymorphism
 The compiler determines which function should be called during compilation
Example:
 add(10, 20);
Compiler sees:
 add(int, int)
 and selects the matching function

Advantages of Function Overloading
 Same funcion name can be used for similar operations
 Improves code readability
 Makes code easier to understand
 Supports compile-time polymorphism
 Avoids using many different function names for similar tasks

Object-Oriented Programming
 OOP is a programming approach based on objects and classes
 It helps organize programs by combining data and functions into a single unit
Main Concepts of OOP:
 Class
 Object
 Encapsulation
 Abstraction
 Inheritance
 Polymorphism

Class
 A class is a user defined data type that acts as a blueprint for creating objects
 A class can contain:
 Data members
 Member functions

Syntax:
 class className
 {
   // Data members
   // Member functuions
 };

Object
 An object is an instance of a class
 Objects are created from a class and can access the members of that class
Example:
 student s1;
Here:
 student -> class
 s1 -> object;
 We can create multiple objects from the same class
 student s1;
 student s2;
 student s3;

Class and Object Example
 #include <iostream>
 using namespace std;

 class student
 {
 public:
  string name;
  int age;

  void display()
  {
   cout << name << " " << age << endl;
  }
 };

 int main()
 {
  student s1;

  s1.name ="Shyam";
  s1.age = 20;

  s1.display();

  return 0;
 }

Accessing Class Members
 The dot(.) operator is used to access public members of an object
 s1.name
 s1.age 
 are accessed using the . operator

Data Members
Variables declared inside a class are called data members
 name -> Data memeber
 age -> Data member

Member Functions
 Functions declared inside a class are called member functions 
 display() is a member function

Public Access Specifier
 Public members can be accessed from outside the class using an object
 Used when direct access is required
 class Student
 {
 public:
     int age;
 };
Then:
 Student s1;
 s1.age = 20;
 This is allowed because age is public

Private Access Specifier
 private members can be accessed only from within the class
 Used to hide/Protect data
 class Student
 {
 private:
     int age;
 };
 This is not allowed outside the class:
 Student s1;
 s1.age = 20;   // Error

Encapsulation
 Encapsulation means wrapping data and functions together inside a class and controlling access to the data
 class BankAccount
 {
 private:
     int balance;

 public:
     void setBalance(int b)
     {
         balance = b;
     }
 
     int getBalance()
     {
         return balance;
     }
 };

Here the data balance is protected using private, and it is accessed through public functions
 
Why Use Classes and Objects
 Classes and objects help us:
 Organize code
 Combine data and functions
 Protect data using access control
 Reuse code
 Represent real-world entities

Access Modifiers
 Access modifier control the accessibility of members of a class
 Main access modifiers
 public
 private
 protected

 Public -> can be accessed from outside the class
 Private -> cannot be accessed directly from outside the class

Default Access in class
 If no access modifier is specified in a class, the members are private by default
 class Student
 {
     int age;
 };
This is the same as:
 class Student
{
 private:
     int age;
 };

Class vs Struct
 There is an important difference in their default access
 class -> private by default
 struct -> public by default
 class A
 {
     int x;       // private
 };
 struct B
 {
     int x;       // public
 };

Private Member Functions
 Members function can also be private
 class Demo
 {
 private:
   void show()
   {
     cout << "Hello";
   }
 public:
   void display()
   {
    show();
   }
 };
 A private function cannot be called directly from outside the class
 Demo d;
 d.show(); // Error 
 d.display(); // Allowed

Why Use  Private Members?
 Private members help:
 Hide data from outside code
 Protect data from direct modification
 Provide controlled access through public functions
 Implement encapsulation

Nesting of Member Functions
 When one member function calls another member function of the same class, it is called  nesting of member functions
Example:
 class student
 {
 private:
   int age;

   void checkAge()
   {
     if(age >= 18)
      cout << "Adult";

     else
      cout << "Minor";
   }

  public:
      void setAge(int a)
      {
        age = a;
        checkAge();
      }
 };
Here:
 setAge()
   ↓
 checkAge()

 setAge() calls another member function checkAge()
 This is called nesting of member functions

Example:
 class Demo
 {
   void function1()
   {
     function2();
   }

   void function2()
   {
     cout << "Hello";
   }
 };
 Here function1() calls function2()
 We dont need to use an object to call function2() from inside the same class

Nested Member Function With Public and Private
 A public member function can call a private member function of the same class
Example:
 class Student
 {
 Private:
   void show()
   {
     cout << "Private function";
   }

  public:
    void dissplay()
    {
      show();
    }
 };

 student s1;
 s1.display();   // Allowed
 s1.show   // Error

 The outside code cannot directly call show() but display() can call it because both functions belong to the same class

Why Use Nesting Member Functions?
 Nesting helps to:
 Break a large task into smaller functions
 Keep helper functions private
 Improve code organization
 Hide internal implementation details
 Make the program easier to maintain

Memory Allocation for Objects
 When an object of class is created, memory is allocated for its data members
Example:
  class student
  {
  public:
    int age;
    int marks;
  };

  int main()
  {
   student s1;
  }
Here s1 is an object of student

Each Object Has Its Own Data
 If multiple objects are created, each object gets its own copy of the non-static data members

Member Functions and Objects
 Member functions are associated with the class, while the objects memory mainly stores its data members
 For each object:
 Object
   ↓
 Data members -> stored separately for each object
 Member functions -> not a separate copy of the function code for every object

Array as a Data Member
 An array can be declared inside a class as a data member
Example:
 class student
 {
 public:
  int marks[5];
 };
 Here marks is an array belonging to each Student object

Array with Multiple Objects
 Each object gets its own array

Initializing an Array in a class
 You can assign values to the array using the object
 student s1;
 s1.marks[0] = 90;
 s2.marks[1] = 55;
 s3.marks[2] = 40;

 Accessing an array element:
 cout << s1.marks[1];

Array of Objects
 We can also create an array whose elements are objects
Example:
 class student
 {
 public:
    int age;
 };

 int main()
 {
  student students[3];
  students[0].age = 12;
  students[1].age = 20;
  students[2].age = 30;
 }
Here:
   students
      ↓
 [Student] [Student] [Student]
     0         1         2

 Each element is a separate Student object

Accessing Array of Objects
 Use the index followed by the dot operator

 students[0].age = 20;
 students[1].age = 21;

 cout << students[0].age;
Pattern:
 array[index].member

Example: 
 students[0].age

**
 Suppose:
 class student
 {
 public:
    int age;
    int marks[3];
 };

 Then each object contains its own:
 Student object
 ├── age
 ├── marks[0]
 ├── marks[1]
 └── marks[2]
 If we create:
 Student s1;
 Student s2;
 both objects have their own age and marks data

Static Data Member
 A static data member is a data member that is shared by all objects of a class
 Unlike a normal data member only one copy of a static data member exists for the entire class

Normal Data Member:
 Object 1 -> separate copy ─┐ 
 Object 2 -> separate copy ─┼→One shared variable Object 
 Object 3 -> separate copy ─┘

Syntax:
 Inside the class:
 class student
 {
 public:
    static int count;
 };
 The static data member must be defined outside the class
 int student::count = 0;

Example:
 #include <iostream>
 using namespace std;

 class student
 {
 public:
     static int count;
     student()
     {
       count++;
     }
 };

 int student:: count = 0;
 
 int main()
 {
   student s1;
   student s2;
   student s3;
   cout << student::count;
   return 0;
 }

Explanation:
 When each object is created, the constructor increases count
 s1 created -> count = 1
 s2 created -> count = 2
 s3 created -> count = 3
 All three objects share the same count

Accessing Static Data Member
 A static data member can be accessed using the class name and scope resolution operator ::
Syntax:
 className::staticMember
Example:
 cout << student::count;
Here:
 student -> class name
 ::      -> Scope resolution operator
 count   -> Static data member

 Normal Data Member              VS          Static Data Member
 Separate copy for each object	             One shared copy for all objects
 Belongs to individual object	               Belongs to the class
 Each object can have a different value	     All objects share the same value
 Accessed using object	                     Can be accessed using class name

Static Member Function
 A static member function is a member function that belongs to the class rather than a particular object
 It can be called using the class name
Syntax:
 static return_type functionName()
 {
   // code
 }

Example:
 class Student
 {
 public:
     static int count;
 
     static void showCount()
     {
         cout << count;
     }
 };

 int Student::count = 0;

 Calling the function:

 Student::showCount();

 We don't need to create an object to call a static member function

Important rule of Static Member Function
 A static member function cannot directly access non-static data members
Example:

class Student
{
public:
    int age;
    static int count;

    static void display()
    {
        cout << count;   // Allowed
        // cout << age;  // Error
    }
};

Why?
Because age belongs to a particular object, while the static function belongs to the class
 
Static Function Can Access Static Members
 A static member funnction can directly access static data members
Example:
 class student
 {
 public:
   static int count;
   static void display()
   {
    cout << count;
   }
 };
 int student::count = 10;
Then:
 student::display();
Output: 10

Calling Static Function
 Static members functions can be called using:
 className::functionName();
Example:
 student::showcount();
 They can also be called through an object, but using the class name is clearer and preferred

Why Use Static Members?
 Static members are useful when a value or function should be shared among all objects
Examples:
 Counting number of objects
 Maintaining a common value
 Storing class-level information
 Utility/helper functions that dont need object data

Array of Objects
 An array of objects is an array in which each element  is an object of the same class
Syntax:
className objectArray[size];
Example:
 class student
 {
 public:
     string name;
     int age;
 };
 int main()
 {
   student students[3];
 }
Here:
 student -> class
 students -> array of objects
 3 -> Number of objects

The array contains:
 students[0] -> student object
 students[1] -> student object
 students[2] -> student object

Accessing Members of an Object Array
 Use the index operator [] and dot operator .
Example:
 students[0].name ="shyam";
 students[0].age = 30;
Pattern:
 array[index].member
Example:
 students[0].age

Passing Object as Function Argument
 An  object can be passed to a function as an argument just like a normal variable
Example:
 class Student
 {
 public:
   int age;
 };

 void display(student s)
 {
  cout << s.age;
 }
Calling the function:
 student s1;
 s1.age = 20;
 display(s1);
Here:
 s1
  ↓
 passed to display()
  ↓
 parameter s receives the object

Passing an object by Reference
 An object can also be passed by reference
Syntax:
 void display(student &s)
 {
  cout << s.age;
 }
Calling:
 display(s1);
 Here s refers to the original object instead of creating a separate object copy
 This is useful when we want to avoid unnecessary copying

Array of Objects passed to a function
 An array of objects can be passed to a function
Example:
 void display(student students[], int n)
 {
  for(int i = 0; i < n; i++)
  {
   cout << students[i].name << endl; 
  }
 }
Calling:
 student students[3];
 display(students, 3);
 The function receives the array of student objects

Object as Function Return Value
 A function can also return an object
Example:
 student createStudent()
 {
  student s;
  s.age = 20;
  return s;
 }
Calling:
 student s1 = createStudent();
 Here the function returns a student object

Friend Function
 A friend function is a function that is not a  member of a class, but it is allowed to access the class's private and protected members
 It is declared inside the class using the keyword friend

Syntax:
 class className
 {
 private:
    int data;

 public:
    friend void functionName(className obj);
 };
 The function is declared with the friend keyword inside the class

Example:
 #include <iostream>
 using namespace std;
 class student
 {
 private:
     int age;

 public:
     student()
     {
      age = 20;
     }
     friend void display(student s);
 };
 void display(student s)
 {
  cout << s.age;
 }

 int main()
 {
   student s1;
   display(s1);
   return 0;
 }

 Normally, age is private and cannot be accessed outside the class
 But display() is declared as a friend, so it can access age

 A friend function is not a member funnction of the class
Example:
 friend void display(student s);

 display() is declared inside the class, but it is not a member of studeent
 Therefore, it is called normally
 display(s1);
 s1.display();  // Wrong

Friend Function Can Access Private Data
Normally:
 class student
 {
 private:
    int age;
 };
 This is not allowed
 Void display(student s)
 {
  cout << s.age;    // Error
 }
 But after declaring:
 friend void display(student s);
 it becomes allowed
 void display(student s)
 {
  cout << s.age;   // Allowed
 }

Friend Function with Two Classes
 A friend function can access private data from more than one class
Example:
 class A
 {
 private:
   int x = 10;
   friend void add(A, B);
 };

 class B
 {
 private:
   int y = 20;
   friend void add(A, B);
 };
 void add(A a, B b)
 {
  cout << a.x + b.y;
 }

 Here add() can access:
 A::x -> private
 B::y -> private
 because it is declared as a friend in both classes

Friend Function  vs Member Funnction
 Member Function	                          Friend Function
 Belongs to the class	                      Does not belong to the class
 Called using object	                        Called like a normal function
 Can directly access class members	          Can access private/protected members if declared friend
 Uses this pointer                         	Does not have a this pointer

 Member function: s1.display();
 Friend function: display(s1);

Properties
 Declared usinng the friend keyword
 Not a member of the class
 Can access private members
 Can access protected members
 Called like a normal function
 Does not use the . operator  to call it
 A friend function does not have a this pointer

Why Use Friend Function
 Friend functions are useful when:
 A function needs access to private data
 A function needs to work with private data of multiple classes
 We want a non-member function to have special access to a class

Friend Class
 A friend class is a class whose members function can access the private and protected members of another class
 A class is declared as a friend usinng the friend keyword

Syntax:
 class A
 {
   friend class B;
 };
 Here, class B is a friend of class A
 Therefore, the member functions of B can access the private and PrOtected members of A

Example:
 class student
 {
 private:
    int age = 20;
    friend class Teacher;
 };

 class Teacher
 {
 public:
    void display(student s)
    {
     cout << s.age;
    }
 };

 int main()
 {
  student s1;
  Teacher t1;
  t1.display(s1);
  return 0;
 }
 Normally age is private, so it cannot be accessed outside student 
 But Teacher is declared as a friend class:
 friend class Teacher;
 Therefore, Teacher can access student's private data

 Friendship gives special access to another class
 Student 
  ↓ 
 private data
  ↓ 
 Teacher is friend
  ↓ 
 Teacher can access private data

 Friend Class is Not Mutual
 If class A is a friend of class B, it does not automatically mean that class B is a friend of class A
Example:
 class A
 {
  friend class B;
 };
This Means
 B -> can access private members of A
 A -> cannot automatically access private members of B
 Friendship must be explicitly declared

Friend Function Vs Friend Class
Friend Function
 Only one particular function gets special access
 friend void display(student s);

Friend Class
 All member functions of the friend class get special access 
 friend class Teacher;

Member Friend Function
 Sometimes we dont want to make an entire class a friend
 Instead, we can make only one member function of another class a friend
 This is called a member friend function
Example:
 class student;
 class Teacher
 {
 public:
    void display(student s);
 };
 class student
 {
 private;
    int age = 20;
    friend void Teacher::display(student s);
 };
 void Teacher::display(student s)
 {
  cout << s.age;
 }

 int main()
 {
  student s1;
  Teacher t1;
  t1.display(s1);
  return 0;
 }
Output:
 20
Here only:
 Teacher::display()
 is given access to the private members of student
 Other member functions of Teacher do not automatically get access

Friend Class VS Member Friend Function
 Friend Class	                                   Member Friend Function
Entire class gets access	                       Only one member function gets access
Declared using friend class       	             Declared using friend with function
More access is given	                           More controlled access
All member functions can access private data	   Only the specified function can access private data

Why Use Friend Classes?
 Friend classess can be useful when two classes need to work closely together
For example:
 Student ↔ Teacher 
 BankAccount ↔ Bank
 Engine ↔ Car
 Only class may need special access to the private data of another class

Properties
 Friendship is given using the friend keyword
 A friend can access private and protected members
 Friend class is not a member of the other class
 Friendship is not automatically mutual
 Friendship is not inherited
 You can make an entire class a friend
 You can also make only one member function a friend

Friend Function with Two Classes
 A friend function can be declared as a friend of multiple classes
 This allow the same function to access private members of both classes
Example:
 class Y;
 class X    // Forward declaration
 {
 private:
   int data = 10;

 public:
   friend void add(X, Y);
 };

 class Y
 {
 private:
   int num = 20;

 public:
   friend void add(X, Y);
 };
 void add(X o1, Y o2)
 {
  cout << o1.data + o2.num;
 }
Output:
 30
Here:
 X -> private data = 10
 Y -> private num = 20
           ↓
     add(X,Y)
         ↓
 Friend of both classes
 Therefore, add() can access:

 o1.data
 o2.num

 even though both are private

Forward Declaration
 When a class is used before its complete definition, we can declare it beforehand
Syntax:
 class Y;
 This is called a forward declaration
 It tells the compiler:
 Class Y exists and its complete definition will be provided later
Example:
 class Y;
 class x
 {
   friend void add(X, Y);
 };
 class Y
 {
  // complete definition
 }
Why is it needed?
 In:
 friend void add(X, Y);
 the compiler needs to know that Y is a valid class
 So we write:
 class Y;
 before defining class X

Friend Function Accessinng Multiple Classes
 If a function is deeclared as a friend in both classes:
 class X
 {
  friend void add(X, Y);
 };
 class Y
 {
  friend void add(X, Y);
 };
then:
 void add(X o1, Y o2)
 {
  cout << o1.data;
  cout << o2.num;
 }
 is allowed
 Being a friend of X does not automatically make the function a friend of Y
 It must be declared separately in Y
 It must be declared separately in Y

Properties of Friend Function
Friend function is not a member
 display(s1); Correct
 s1.display();  Wrong for a friend function

It can access private members
 cout << s1.age;
 is allowed if display() is declared as  a friend

It accesses members through objects
 A friend function is not inside the class, so it uses:
 object.member
For Example:
 o1.data
 o2.num

It can be a friend of multiple classes
 class X ──┐ 
           ├──→ friend function
 Class Y ──┘

Forward Declaration vs Definition
Forward Declaration:
 class Y;
 Only tells the compiler that the class exists.
 Class Definition:
 class Y
 {
    int num;
 };
 Actually defines the class and its members

Constructor
 A constructor is a special member function of a class that is automatically called when an object is created
 It is mainly used to initialize the data members of an object
Example:
 class student
 {
 public:
     student()
     {
       cout << "Constructor called;"
     }
 };
 int main()
 {
  student s1;
 }
  when s1 is created, the constructor is automatically called
Output:
 constructor called

Syntax:
 class cclassName
 {
 public:
   className()
   {
     // initialization
   }
 };
 The constructor name must be the same as the class name
Example:
 class student
 {
 public:
   student()
   {
    cout << "Hello";
   }
 };
Here:
 student -> class name
 student() -> constructor

Properties
 Constructor has the same name as the class
 It is called automatically when an object is created
 It has no return type, not even void
 It is mainly used to initialized objects
 Constructors can be overloaded
 A constructor can have parameters
 Constructors are normally placed in the public section when objects need to create them from outside the class

Constructor Has No Return Type
Correct:
 class student
 {
 public:
     student()
     {
      cout << "Hello";
     }
 };
Wrong:
 void student()
 {
   // This is not a constructor
 }
 A constructor does not have a return type

Default Constructor
 A constructor that takes no arguments is called a default constructor
Example:
 class student
 {
 public:
    student()
    {
      cout << "Default constructor";
    }
 };
Creating an object:
 student s1;
 The constructor is automatically called

Parameterized Constructor
 A constructor that takes one or more parameters is called a parameterized constructor
Example:
 class student
 {
 public:
      int age;
      student(int a)
      {
       age = a;
      }
 };
 Creating an object:
 student s1(20);
Here:
 20 -> passed to constructor
 a -> receives 20
 age -> becomes 20

Example of Parameterized Constructor
 #include <iostream>
 using namespace std;
 class student
 {
 public:
     string name;
     int age;

     student(string n, int a)
     {
      name = n;
      age = a;
     }
      void display()
      {
       cout << name << " " << age;
      }
 };

 int main()
 {
  student s1("sahil", 30);
  s1.display();
  return 0;
 }
Output:
 sahil 20

Constructor Initialize Objects
Without a constructor: 
 student s1;
 s1.name = "Rahul";
 s1.age = 20;

With a parameterized constructor
 student s1("Rahul", 20);

 The constructor initializes the object when it is created

Multiple Objects with Constructor
 A constructor is called separately for every object
Example:
 class student
 {
 public:
      student()
      {
        cout << "constructor called\n";
      }
 };
 int main()
 {
   student s1;
   student s2;
   student s3;
 }
Output:
 Constructor called
 Constructor called
 Constructor called

So:
 s1 created → constructor called
 s2 created → constructor called
 s3 created → constructor called

Default Constructor           vs         Parameterized Constructor
 Takes no arguments                       Takes one or more arguments
 Student s1;                              Student s1(20);
 Uses predefined/default values           Uses values supplied by the programmer
 student()                                Student(int age)

Constructor Overloading
 Constructor overloading means having multiple constructors in the same class with different parameter lists
 The compiler selects the appropiate constructor based on the arguments passed while creating an object
 This is called constructor overloading
Example:
 class student
 {
 public:
    student()
    {
     cout << "Default constructor\n";
    }

    student(int age)
    {
     cout << "Age = " << age;
    }
 };

 Now:
 student s1;
 calls the default constructor
 student s2(20);
 calls the parameterized constructor
 The compiler chooses the constructor based on the arguments

Different way of Overloading Constructors
 Constructor can differ by:
 Number of parameters
 Types of parameters
 Order of different parameter types
Example:
 classs student
 {
 public:
  student()
  {
  }

  student(int age)
  {
  }

  student(int age, int marks)
  {
  }

  student(string name)
  {
  }
 };
 Each constructor has a different parameter list

Constructor Selection
 The compiler automatically chooses the constructor that matches the arguments
 Student s1;           // Studemt()
 Student s2(20);       // Student(int)
 Student s3(20, 90);   // Student(int, int)

Important Rules
 Constructor must have the same name as the class
 Constructor have no return type
 Constructor can be overloaded
 Overloaded constructors must have different parameter lists
 The compiler selects the constructor according to the arguments
 Constructor overloading allows objects to be initialized in different ways
 
Constructor                  VS            Normal Member Function
 Same name as class                   	    Can have any valid name
 No return type	                            Has a return type
 Called automatically	                      Usually called explicitly
 Used mainly for initialization	            Performs operations
 Called when object is created	            Called when required

Example:
 student s1;
 constructor is automatically called
But:
 s1.display();
 requires an explicit function call

Constructor with this Pointer
 A constructor can use the this pointer when parameter names are the same as data names
Example:
 class student
 {
 private:
     int age;

 public:
   student(int age)
   {
    this->age = age;
   }
 };
Here:
 this->age -> class data member
 age -> -> constructor parameter

Constructor Initialization List
  A constructor can also initialize data members using an initializer list
Example:
 class student
 {
 private:
        int age;

 public:
     student(int a) : age(a)
     {
     }
 };
Here:
 student s1(20);
 initializes age to 20
 Initializer lists are commonly used in modern C++

Constructor Called Automatically
Example:
 class student
 {
 public:
    student()
    {
     cout << "object created";
    } 
 };

 int main()
 {
  student s1;
 }
 We do not write:
 s1.student();
 The constructor is automatically called when:
 student s1;
 is executed


 */
