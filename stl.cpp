//--------------------- STANDARD TEMPLATE LIBRARY --------------------------
/*
  it is a collection of
  ready made classes,
  data structure,
  algorithms

  Main part of STL
   
  Containers---- for store data
  Algorithms----- Oerfirm operations
  Itertors---------  used to accesss data

CONTAINER-- 3 types
A. Sequence -> store data sequentially ex-vector, list, deque
B. Associative -> store data in sorted form ex-set,  map
C. Derived -> made from other containers ex- stack, queue, priority_queue


VECTOR in STL

it is dynamic array
can grow automatically

vector<int> v;

 push_back()-> for add element at end
 v.push_back()

 pop_back()-> remove last element
 v.pop_back()

 size()-> return numbers of elements
 v.size()

 empty()-> check vector empty or not
 v.empty()

//--------------------- ExAMPLE 1-> Basic Vector

 #include <iostream>
 #include <vector>

 using namespace std;

 int main()
 {

     vector<int> v;

     v.push_back(1);
     v.push_back(2);
     v.push_back(3);

     cout << v[0] << endl;
     cout << v[1] << endl;
     cout << v[2] << endl;

     return 0;
 }

 output:
 1
 2
 3

//--------------------------- EXAMPLE 2-> using loop

#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i = 0; i < v.size(); i++)
    {
    cout << v[i] << " ";
    }
      return 0;

}

output;
1 2 3

//------------------------ EXAMPLE 3-> User input in vector

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v;

  int  n;
   cout << "Enter number of elements: ";
   cin >> n;

   for(i =0; i < n; i++)
   {
       int x;
       cin >> x;

       v.push_back(x);
}
    cout << "Vector element are: ";

    for(int i = 0; i < v.size(); i++)
    {
       cout << v[i] << " ";
    }
       return 0;
   }


// ------------------------ EXAMPLE 4-> pop_back()
#include <iostream>
#include <vector>

using namespace std;

int main()
{
   vector<int> v;

     v.push_back(1);
     v.push_back(2);
     v.push_back(3);

     v.pop_back();

     for(inti = 0; i < v.size(); i++)
     {
     
     cout << v[i] << " ";
     }
     return 0;
}

output:
 1 2
 


// ---------------------------------------- EXAMPLE 5-> SUM OF VECTOR ELEMENT
#include <iostream>
#include <vector>

 using namespace std;

 int main()
 {
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    int sum = 0;

    for(int i = 0; i < v.size(); i++)
    {
      sum = sum + v[i];
    }

     cout << "sum = " << sum;

     return 0;
 }

 output:
 sum = 6


 //------------------------------------------- EXAMPLE 6-> check empty number

 #include <iostream>
 #include <vector>

 using namespace std;

 int main()
 {
      vector<int> v;

      if(v.empty())
      {
        cout << "Vector is empty";
     }
      else
     {
      cout << "Vector is not empty";
     }

    return 0;

 }

 output:
 Vector is empty


*/