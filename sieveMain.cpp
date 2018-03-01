#include  "sieve.h"
#include <iostream>
using namespace std;

/*
In mathematics, the sieve of Eratosthenes is a simple, ancient algorithm for finding all prime numbers up to any given limit.

It does so by iteratively marking as composite (i.e., not prime) the multiples of each prime, starting with the first prime number, 2. The multiples of a given prime are generated as a sequence of numbers starting from that prime, with constant difference between them that is equal to that prime.[1] This is the sieve's key distinction from using trial division to sequentially test each candidate number for divisibility by each prime
*/

int main()
{
  int intBegin = 0;
  int intEnd = 0;
  int i = 0;

	//Get the range of numbers from user
  cout<<"To start we need the range of the numbers to process."<<endl;
  cout<<"Please enter the beginning number: "<<endl;
  cin>>intBegin;
  cout<<"Please enter the ending number: "<<endl;
  cin>>intEnd;

	//Load those numbers into an array
  //Instantiate the class/array
  //sieveArr s;
  sieveArr s(intBegin, intEnd);
  cout<<"Begin: " <<s.getBegin()<<endl;
  cout<<"End: " <<s.getEnd()<<endl;
  cout<<"Size: " <<s.getSize()<<endl;
  s.loadArray();

	//Loop through the numbers in the array
	
  //for (int i = s.getBegin ; i <= s.getEnd ; i++)
  for (int i = 0 ; i <= s.getSize() ; i++)
  {
    //cout<<s.intArrSieve[i]<<endl;
    //Determine if the current number is a prime number
    //Only have to check up the current number's square root
    if (s.isPrime(s.intArrSieve[i]))
    {
      //Loop through the rest of the array and discard any numbers that are divisible by this number
      for (int j = i + 1 ; j <= s.getSize() ; j++)
      {
        //cout<<"After j "<<s.intArrSieve[j]<<endl;
        if (s.intArrSieve[i] > 0)
        {
          if (s.intArrSieve[j] % s.intArrSieve[i] == 0)
          {
            s.intArrSieve[j] = 0;
          }
        }
      }

    }
  }
  
  //Loop through the array and print non zero elements
  for (int i = s.getMin() - 2 ; i <= s.getSize() ; i++)
  {
    //cout<<s.intArrSieve[i]<<endl;
    if (s.intArrSieve[i] != 0)
    {
      cout<<s.intArrSieve[i]<<endl;
    }
  }
}
