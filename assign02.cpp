#include<iostream>
#include"primeFactorization.h"
using namespace std;
int main()
{
primeFactorization number;
long long num;
cout << "Enter a number between 2 and 2.7x10^14";
cin >> num;
cout << endl;
number.setNum(num);
number.factorization();
return 0;
