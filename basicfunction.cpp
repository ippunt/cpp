
//Program: Largest of three numbers
 
#include <iostream> 
 
using namespace std; 
  
double larger(double x, double y);      //Function prototype: so you can call functin in main without problems
//double larger(double, double); This example would be fine, formal parameters are not necessary but datatypes are.
double compareThree(double x, double y, // Declares name and datatypes
					double z);          //Function prototype

int main() 
{
    double one, two;                                //Line 1

    cout << "Line 2: The larger of 5 and 10 is "
         << larger(5, 10) << endl;                  //Line 2

    cout << "Line 3: Enter two numbers: ";          //Line 3
    cin >> one >> two;                              //Line 4
    cout << endl;                                   //Line 5

    cout << "Line 6: The larger of " << one 
         << " and " << two << " is " 
         << larger(one, two) << endl;               //Line 6

    cout << "Line 7: The largest of 43.48, 34.00, " 
         << "and 12.65 is " 
         << compareThree(43.48, 34.00, 12.65)  //these are the actual paramaters in the function
         << endl;                                   //Line 7
//       << compareThree(43.48, 34.00, 12.65)<<endl;  woulD ALSO WORK
   return 0;
}

double larger(double x, double y) // x and y are formal parameters and are replaced by the calls actual paramaters
{
    double max;

    if (x >= y)
        max = x;
    else
        max = y;

    return max;
}
//
//
//
//f type  f name parameter type   formal parameter necessary for function to work properly
//V         V         V               V
double compareThree (double x, double y, double z)
{
    return larger(x, larger(y, z));
}
