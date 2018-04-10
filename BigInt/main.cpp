
#include "BigInt.h"

#include <iostream>
using namespace std;



int main()
{
  // conversion constructor with string of digit initialization (see QA)
  string str = "1254213456768432";
  BigInt bi5(str);

  // explicit constructor with num of digits
  BigInt bi1(10);
  // copy constructors
  BigInt bi2(bi1);
  BigInt bi3 = bi1;
  // assignment operator
  bi1 = bi2;

  // IO operations
  cin>>bi2;
  cout<<bi1;

  // math operations
  BigInt bi4 = bi1 + bi2 - bi3;

  // relational operations
  if(bi1>bi2) 
    cout<<bi1;
  else
    cout<<bi2;

  return 0;
}

