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

int
 Used to store whole numbers
 int age = 20;
 int marks = 90;

float
 Used to store decimal numbers
 float price = 99.5;

double
 Used to store decimal numbers with greater precision than float
 double pi = 3.141592;

Char
 Used to sstore a single character
 char grade = 'A';
 Character values are written inside single quotes

bool
 Used to store a Boolean value
 it can have:
 true
 false

Example:
 bool isPassed = true;

void
 void represents no value
 it is commomly used with functions thaqt do not retirn a value
Example:
 void display()
 {
   cout << "Hello";
 }



*/