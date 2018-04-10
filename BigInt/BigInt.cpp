#include "BigInt.h"

#include <iostream>
using namespace std;


BigInt::BigInt(const std::string &str)
{
   allocateDigitArray(str.size(),false);
   for(unsigned int i=0;i<str.size();i++)
   {
     m_digitArray[i] = str[i]-'0';
   }
}

BigInt::BigInt(unsigned int numOfDigits)
{
   allocateDigitArray(numOfDigits,true);
}

BigInt::BigInt(const BigInt &bi)
{
   ///////////////////////
   // code below, is just so it won't crash until you implement the body ...
   ///////////////////////
   m_digitArray = NULL;
   m_digitArraySize = 0;
   ///////////////////////
   cout<<"Error: Missing constructor body"<<endl;
}

BigInt &BigInt::operator =(const BigInt &bi)
{
   cout<<"Error: Missing operator= body"<<endl;
   return *this;
}

void BigInt::allocateDigitArray(unsigned int numOfDigits, bool init)
{
   m_digitArraySize = numOfDigits;
   m_digitArray = new char[m_digitArraySize];
   if(init)
   {
     for(int i=0;i<getSize();i++)
     this->operator [](i) = 0; // all three methods are equivalent
     //(*this)[i] = 0;         // all three methods are equivalent
     //m_digitArray[i] = 0;    // all three methods are equivalent
   }
}

void BigInt::freeDigitArray()
{
    // use 0 or NULL or nullptr in std11
    // include <cstddef> for NULL definition
    if(m_digitArray!=NULL)
    {
       m_digitArraySize = 0;
       delete []m_digitArray;
    }
}

bool BigInt::operator>(const BigInt& rhs) const
{
  cout<<"Error: Missing operator> body"<<endl;
  return false;
}

BigInt BigInt::operator + (const BigInt &rhs) const
{
  BigInt res;
  
  for(int i=0;i<rhs.getSize();i++)
  {
    res[i] = this->m_digitArray[i] + rhs[i];
  }

  return res;
}

BigInt BigInt::operator - (const BigInt &rhs) const
{
  BigInt res;
  //...
  return res;
}

BigInt::~BigInt()
{
  freeDigitArray();
}


std::ostream &operator<<(std::ostream &os, const BigInt &bi)
{
  os<<"Error: Missing function body"<<std::endl;
  return os;
}

std::istream &operator>>(std::istream &is, BigInt &bi)
{
  std::cout<<"Error: Missing function body"<<endl;
  return is;
}



