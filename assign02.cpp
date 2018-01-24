#include<iostream>
# include <stdio.h>
# include <math.h>
#include"primeFactorization.h"
using namespace std;
int main()
{
primeFactorization number;// create class
number.setnum();// ask user info and set variable
cout <<"Your numbers factorization is"<<endl;
number.factorization(number.getnum());// return factorization
cout << endl;
return 0;
}
