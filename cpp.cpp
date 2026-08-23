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


*/