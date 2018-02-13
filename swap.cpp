#include <iostream>
using namespace std;

void swapByVal(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
  
}

int main()
{
  int a = 1;
  int b = 2;
  swapByVal(a, b);
  cout<<"After swapByVal a, b = "<<a<<","<<b<<endl;
  return 0;
}
