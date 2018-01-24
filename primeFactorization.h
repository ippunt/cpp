#ifndef primeFactorization_H
#define primeFactorization_H

#include "integerManipulation.h"
using namespace std;
class primeFactorization: public integerManipulation
{
public:

void factorization(int n){
      //Function to output the prime factorization of num 
      //Postcondition: Prime factorization of num is printed;
 // Print the number of 2s that divide n
    while (n%2 == 0)
    {
        printf("%d ", 2);
        n = n/2;
    }

    // n must be odd at this point.  So we can skip 
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
            printf("%d ", i);
            n = n/i;
        }
    }

    // This condition is to handle the case when n 
    // is a prime number greater than 2
    if (n > 2)
        printf ("%d ", n);
}
void setnum(){
cout << "Enter an integer between 2 and 270,000,000,000,000: ";
cin >> n;
}
int getnum(){
return n;
}
  //  primeFactorization(long long n = 0);
      //Constructor with a default parameter.
      //The instance variables of the base class are set according 
      //to the parameters and the array first125000Primes is 
      //created.
     //Postcondition: num = n; revNum = 0; evenscount = 0;
      //    oddsCount = 0; zerosCount = 0;
      //    first125000Primes = first 125000 prime numbers.      

private:
int n;
    long long first125000Primes[125000];

    void primeFact(long long num, long long list[], int length,
                   int firstPrimeFactIndex);
    void first125000PrimeNum(long long list[], int length);
      //Function to determine and store the first 125000 prime 
      //integers.
      //Postcondition: The first 125000 prime numbers are  
    //      determined and stored in the array first125000Primes;

    void primeTest(long long num, long long list[], int length,
                   bool& primeNum, int& firstPrimeFactIndex);
    bool isPrime(long long number);
};

#endif
