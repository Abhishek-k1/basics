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