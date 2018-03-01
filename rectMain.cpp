#include<iostream>
using namespace std;
#include "rect.h"

int main()
{
  Rect r1;
  r1.setWidth(500);
  r1.setLength(2);
  r1.display();
  
  Rect r2(10,20);
  //r2.display();
  cout<<r2;
  cout<<"Please enter a rectangle:";
  cin>>r1;
  cout<<r1;
  
  return 0;
}
