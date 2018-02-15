#include<iostream>
using namespace std;

void display(int array[], int size)
{
  for(int i = 0; i < size; i++)
  {
    cout<<array[i]<<endl;
  }
}

void readValues(int array[], int size)
{
  for(int i = 0; i < size; i++)
  {
    cin>>array[i];
  }
}


int main()
{
  const int ArraySize = 7;
  int intArray[ArraySize] = {0};
  cout<<"Please enter a list of "<<ArraySize<<" numbers"<<endl;
  readValues(intArray, ArraySize);
  //
  cout<<"Please enter an int "<<endl;
  int intVar = 0;
  cin>>intVar;
  cout<<"The number you entered is "<<intVar<<endl;
  cout<<"Please enter a float "<<endl;
  float fltVar = 0.0;
  cin>>fltVar;
  cout<<"The number you entered is "<<fltVar<<endl;
  
  return 0;
}
