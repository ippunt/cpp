#ifndef primeFactorization_H
#define primeFactorization_H

#include "integerManipulation.h"

class primeFactorization: public integerManipulation
{
public:

       void factorization();
      //Function to output the prime factorization of num 
      //Postcondition: Prime factorization of num is printed;

       void primeFactorization(long long n = 0);
      //Constructor with a default parameter.
      //The instance variables of the base class are set according 
      //to the parameters and the array first125000Primes is 
      //created.
      //Postcondition: num = n; revNum = 0; evenscount = 0;
      //    oddsCount = 0; zerosCount = 0;
      //    first125000Primes = first 125000 prime numbers.      
        primeFactorization::primeFactorization(long long n) : integerManipulaiton(n)
        {
                first125000PrimeNum(first125000Primes, 125000);
        }//end constructor
        void primefactorization::factorization()
        {
                long long original = integerManipulaiton::getNum();
                first125000PrimeNum(first125000Primes, 125000);
                if(first125000PrimeNum[0] == original)
                cout << original << "is a prime number.",
                else
                cout << original << "is not a prime number.";
                cout << "Its factorization is." << endl;
                cout << original << "=";
                for (int i =0,i < 125000, i++)
                if(first125000Primes[] !=-1)
                {
                        cout << first125000Primes[];
                        if(i != 125000-1 && first125000Primes[i+1] != -1)
                                cout <<"*";
                        else
                        break;
                }//end for
                cout << endl;
        }// end factorization function
        void primeFactorization::first125000PrimeNum(long long list[], int length)
        {
                for(int i=0, i < length, i++)
                        list[]=-1;
                long long number= integerManipulaiton::getNum();
                int index = 0;
                for(long long i = 2, i <= number, i++)
                {
                        while (number % i ==0)
                        {
                                list[index] = i;
                                index++;
                                number=number / i;
                        }//end while
                }//end for
        }//end of first125000PrimeNum function
private:
    long long first125000Primes[125000];

    void primeFact(long long num, long long list[], int length,
                   int firstPrimeFactIndex);
    void first125000PrimeNum(long long list[], int length);
      //Function to determine and store the first 125000 prime 
      //integers.
      //Postcondition: The first 125000 prime numbers are  
      //    determined and stored in the array first125000Primes;

    void primeTest(long long num, long long list[], int length,
                   bool& primeNum, int& firstPrimeFactIndex);
    bool isPrime(long long number);
};

#endif
