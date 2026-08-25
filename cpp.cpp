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
 
Main loops:
 for loop
 while loop
 do-while loop
 






















*/
