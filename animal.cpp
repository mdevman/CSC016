#include "animal.h"
#include <iostream>
using namespace std;

void animal::setName(const char name[])
{
  int i = 0;
  while(name[i] != 0)
  {
    m_arrName[i] = name[i];
    i++; 
  }
  m_arrName[i] = 0;
}

void animal::display()
{
  cout<<m_arrName<<endl;
}

void animal::read()
{
  cout<<"Hey, what about a name?"<<endl;
  cin>>m_arrName;
}
