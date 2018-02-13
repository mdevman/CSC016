#include <iostream>
using namespace std;

void swapByVal(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
  
}

//This still creates variables in memory locations
void swapByPtrC(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
  
}

//This creates aliases to the existing variable locations
//This swaps the values back to their origianl locations, 
//  since swapByPtrC swapped them
void swapByRefCPP(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
  
}

void swapMyFunc(int &refToA, int &refToB)
{
  int tempVal = refToA;
  refToA = refToB;
  refToB = tempVal;
  
}

/*
//This would kick an error, since we are using the const
void swapByRefCPP(const int &a, const int &b)
{
  int temp = a;
  a = b;
  b = temp;
  
}
*/

int main()
{
  int a = 1;
  int b = 2;
  swapByVal(a, b);
  cout<<"After swapByVal a, b = "<<a<<","<<b<<endl; //No swap happens
  swapByPtrC(&a, &b);
  cout<<"After swapByPtrC a, b = "<<a<<","<<b<<endl;  //swaps a and b
  swapByRefCPP(a, b);
  cout<<"After swapByRefCPP a, b = "<<a<<","<<b<<endl;  //swaps a and b back to their original positions in memory
  int intI = 100;
  int intJ = 200;
  swapMyFunc(intI, intJ);
  cout<<"After swapMyFunc intI, intJ = "<<intI<<","<<intJ<<endl;  
  return 0;
}
