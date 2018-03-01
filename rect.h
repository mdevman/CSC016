#include<iostream>

class Rect
{
 public:
    //interface functions
    int area();
    int perim();
    void display();
    
    // get/set functions
    void setWidth(int width) {m_width = width; }
    int getWidth() {return m_width; }
    void setLength(int length) {m_length = length; }
    int getLength() {return m_length; }
    
    //constructors
    Rect();
    Rect(int length, int width);
    
  private:
    int m_width;
    int m_length;
};

//-----Definition of Operator
std::ostream & operator<<(std::ostream & out, Rect & r);
std::istream & operator>>(std::istream & in, Rect & r);
