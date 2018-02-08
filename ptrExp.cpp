#include <iostream>

using namespace std;

int main()
{
  // sizeof types in bytes
  cout<<"size of short is "<<sizeof(short)<<endl;
  cout<<"size of int is "<<sizeof(int)<<endl;
  cout<<"size of long is "<<sizeof(long)<<endl;
  cout<<"size of float is "<<sizeof(float)<<endl;
  cout<<"size of double is "<<sizeof(double)<<endl;
  
  //misc pointer exp
  int i = 1;
  cout<<"address of i is "<<&i<<endl;
  
  int *intPtr;
  intPtr=&i;
  cout<<"intPtr points to address "<<intPtr<<endl;
  cout<<"value of addrress intPtr is "<<sizeof(short)<<endl;
  
  int j=2;
  cout<<"address of j is "<<&j<<endl;
  
  intPtr = intPtr-1; // <=> intPtr--;
  cout<<"intPtr points to address is "<<intPtr<<endl;
  cout<<"value of address intPtr is "<<intPtr<<endl;
  
  return 0;
}
