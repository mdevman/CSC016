#include <iostream>
using namespace std;

int main()
{
  int sizeOfInteger = sizeof(int);
  cout<<"size of int = "<<sizeOfInteger<<endl;

  short sizeOfShort = sizeof(short);
  cout<<"size of short = "<<sizeOfShort<<endl;

  long sizeOfLong = sizeof(long);
  cout<<"size of long = "<<sizeOfLong<<endl;
  
  int j = 0;
  //int k = ++j;
  int k = j++;
  cout<<"k="<<k<<endl;
  return 0;
  
  //int number = 1;
  //short number = 1;
  unsigned short number = 1;
//for (int i = 1; i <= 65; i++)
for (int i = 1; i <= 32800; i++)
    {
    cout<<number<<endl;
    //number = number * 2;
    number = number + 1;
    //number = number + 2;
    //number *= 2;
    }
}
