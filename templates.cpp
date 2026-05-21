/*--------------- Templates------------
templates means write code one, use it for many data types

Problem without templates
for int:
        int maximum(int p, int q)
         {
         return (p > q) ? p : q;
         }

for float:
         float maximum(float p, float q)
         {
           return (p > q) ? p : q;
         }

for double:
        double maximum(double p, double q)
        {
          return (p > q) ? p : q;
        }

so  template solve these condition

In templates:
        template <class T>

        T maximum(T p, T q)
        {
         return (p > q) ? p : q;
        }

Example:
#include <iostream>
using namespace std;

template <class T>

T maximum(T p, T q)
{
    return (p > q) ? p  :  q;
}

int main()
{
   cout << maximum(5, 8) << endl;
   cout << maximum(7.5, 9.2) << endl;

   return 0;
}
 
*/
/*------------- function templates --------------
Generic function


#include <iostream>
using namespace std;

template <class T>

T maxmium(T p, T q)
{
    return (p > q) ? p : q;
}

int main()
{
    cout << maxmium(2, 6) << endl;

    cout << maxmium(2.5, 4.2) << endl;

    return 0;
}

*/

/*--------- Templates with Multiple Parameters ---------
Multiple datatypes


#include <iostream>
using namespace std;

template <class T1, class T2>

void display(T1 p, T2 q)
{
     cout << p << " " << q;
}

int main()
{
display(11, 7.5);

return 0;
}

*/

/* -------- class Templates ------------
Generic classes


#include <iostream>
using namespace std;

template <class T>

class Number
{
    T data;

public:
    Number(T a)
    {

        data  = a;
    }

    void display()
    {
        cout << data;
    }
};

int main()
{
    Number<int> obj1(8);

    Number<float> obj2(6.6);

    obj1.display();

    cout << endl;

    obj2.display();

    cout << endl;

    return 0;

}
*/

/*---------- Default parameters in templates ---------
Default datatype


#include <iostream>
using namespace std;

template <class T = int>

class Test
{
    T data;

public:

   Test(T a)
   {
      data = a;
   }

   void show()
   {
      cout << data;
   }
};

int main()
{
   Test<> obj1(8);

   Test<float> obj2(8.6);

   obj1.show();

   cout << endl;

   obj2.show();

   return 0;
}
*/




