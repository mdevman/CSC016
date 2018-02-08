#include <iostream>
using namespace std;

int main()
{
  int *iPtr = 0;
  //int *iPtr = new int;
  //int *iPtr = new int[10];
  cout<<iPtr<<endl;
  //cout<<*iPtr<<endl;
  //iPtr = (int *)3000;
  //cout<<iPtr<<endl;
  //*iPtr = 3;
  
  const int AllocSize = 1000;
  const int MegaByte = 1024 * 1024;
  long byteCout = 0;
  
  while(1)
  {
    iPtr = new int[AllocSize];
    byteCout += (AllocSize * sizeof(int));
    cout<<((float)byteCout/MegaByte)<<endl;
  }
  
  return 0;
}
