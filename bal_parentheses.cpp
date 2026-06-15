#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
 {
    //string variable to store brackets
    string str;

    // take input from user
    cout <<  "Take input string: ";
    cin >> str;

    // create stack of characters
    stack<char> st;

    // Assume string is balanced initially
    bool balanced = true;

//Traverse complete string
for(int i = 0; i < str.length(); i++)
{

// check for opening brackets    
if(str[i] == '(' || str[i] == '[' || str[i] == '{')
{
    // push opening bracket into stack
   st.push(str[i]);
}

// otherwise closing bracket
else
   {
    // check if stack is empty
     if(st.empty())
     {
        balanced = false;
        break;;
     }

    // check matching brackets
  if(
  (str[i] == ')' && st.top() == '(') ||
    (str[i] == ']' && st.top() == '[') ||
    (str[i] == '}' && st.top() == '{')
    )
  {
    // Remove matching openinng bracket
    st.pop();
  }

  // brackets do not match
  else
  {
    balanced = false;

    break;
  }
   }
}

// If stack still has brackets
if(!st.empty())
{
    balanced = false;
}

// final result
if(balanced)
{
    cout << "Balanced";
}
else
{
    cout << "Not Balanced";
}
return 0;
}


/*------------------------------------------------- BALANCE PARENTHESES -------------------------------------------------

A  string is said to be balance if every opening baracket has a coresponding the closing bracket
Blanced Paranthesis follows the LIFO principle
Examples:
{[()]}:- Balanced 
([)];- not Balanced
The last opening bracket must be closed first (LIFO)


This program demonstrate:-
1.strings:- used to store the input bracket
2.Stack:- used to store openinng bracket
3.LIFO principle:- the most recently opened bracket must be closed first
4.Loops:- used to traverse the string
5.Conditional Statements:- used to check bracket types and matching conditions
6.Boolean Variable:- used to store the final result


Algorithm:-
1.Read the input string.
2.Create an empty stack.
3. Assume the string is balanced.
4. traverse each character of the string.
5.If the character is an opening bracket:-
    push it into the stack
6. If the character is a closing bracket:
   check wheteher  the stack is empty
   if empty, mark as not balanced.
   otherwise compare with the stack top.
7. If bracket match:
   POOP the openinng bracket
8. If bracckets do not match
   Mark as not balanced
9. After the loop check whether the stack is empty
10. Print the final result


Working flow:-

START
↓
Input string
↓
Create empty stack
↓
Traverse string
↓
Opening bracket?
↓ YES
Push into stack
↓
Closing bracket?
↓ YES
Stack empty?
↓ YES → Not Balanced
↓ NO
Check matching brackets
↓
Match found?
↓ YES
Pop from stack
↓ NO
Not Balanced
↓
Continue traversal
↓
Loop ends
↓
Stack empty?
↓ YES → Balanced
↓ NO → Not Balanced
↓
END

Time complexity:- O(n)
Space complexity:- O(n)

Important Stack Function:-
push():- adds an element to the top of the stack
Example:-
st.push('(');

pop():- Removws the top element from the stack
st,pop();

empty():- check whether the stack is empty
st.empty();

true:- stack is empty
false:- stack contains elements







*/