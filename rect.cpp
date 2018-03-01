#include  "rect.h"
#include<iostream>
using namespace std;

istream & operator>>(istream & in, Rect & r)
{
  int width, length;
  in>>width>>length;
  r.setWidth(width);
  r.setLength(length);
  return in;
}

ostream & operator<<(ostream & out, Rect & r)
{
  out<<"Width: "<<r.getWidth()<<", Length: "<<r.getLength()<<", Area: " <<r.area()<<", Perimeter: "<<r.perim()<<endl;
}


int Rect::area()
{
  return m_width * m_length;
}

int Rect::perim()
{
  return m_width*2 + m_length*2;
}

void Rect::display()
{
  cout<<"The area is: "<<area()<<endl;
}

Rect::Rect()
{
  m_width = 0;
  m_length = 0;
}

Rect::Rect(int width, int length)
{
  m_width = width;
  m_length = length;
}
