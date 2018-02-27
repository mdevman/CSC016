#include <iostream>
using namespace std;
#include "animal.h"

int main()
{
  animal a;
  a.setName("dog");
  a.display();
  a.read();
  cout<<"you entered:"<<endl;
  a.display();
  return 0;
}
