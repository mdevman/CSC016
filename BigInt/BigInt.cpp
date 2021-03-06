#include "BigInt.h"
//#include <stdlib.h>
#include <iostream>
using namespace std;


BigInt::BigInt(const std::string &str)
{
   //cout<<"In constructor body for str"<<endl;
	m_String = str;
   allocateDigitArray(str.size(),false);
   //cout<<"In constructor body for str, after allocate"<<endl;
   initializeDigitArray(str.size(), true);
   //cout<<"In constructor body for str after initialize"<<endl;
}

BigInt::BigInt(unsigned int numOfDigits, const std::string &str)
{
   //cout<<"In default constructor body"<<endl;
	m_String = str;
   allocateDigitArray(numOfDigits, false);
   initializeDigitArray(str.size(), true);
}

BigInt::BigInt(const BigInt &bi)
{
   m_digitArraySize = bi.m_digitArraySize;
   m_isPositive = bi.m_isPositive;
   //m_digitArray = bi->m_digitArray;
   allocateDigitArray(m_digitArraySize, false);
   for(unsigned int i = 0; i < m_digitArraySize; i++)
   {
     m_digitArray[i] = bi.m_digitArray[i];
   }
}

BigInt &BigInt::operator =(const BigInt &bi)
{
   //cout<<"Error: Missing operator= body"<<endl;
	
   m_digitArraySize = bi.m_digitArraySize;
   m_isPositive = bi.m_isPositive;
   //m_digitArray = bi->m_digitArray;
   allocateDigitArray(m_digitArraySize, false);
   for(unsigned int i = 0; i < m_digitArraySize; i++)
   {
     m_digitArray[i] = bi.m_digitArray[i];
   }
	
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

void BigInt::initializeDigitArray(unsigned int numOfDigits, bool blHasString)
{
	m_numDigits = 0;
   //cout<<"In initialize"<<endl;
	if (blHasString)
	{
   		//cout<<"Has String"<<endl;
	   for(unsigned int i = 0; i < numOfDigits; i++)
	   {
   		//cout<<"In For"<<endl;
		if (i == 0)
		{
			if (m_String[i] == '-')
			{
				m_isPositive = false;
				break;
			} 
			else
			{
				m_isPositive = true;
			}
		}
		if (isdigit(m_String[i]))
		{
		 	m_digitArray[i] = m_String[i];
			m_numDigits = m_numDigits + 1;
		}
		   //cout<<"m_isPositive  = "<< m_isPositive <<endl;
		   //cout<<"m_digitArray[i] = "<< m_digitArray[i] <<endl;
		   //cout<<"i = "<< i <<endl;
		   //cout<<"numOfDigits = "<< numOfDigits <<endl;
	   }
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
	int bigEnd = 0;
	int smallEnd = 0;
	int resEnd = 0;
	int rhsEnd = rhs.getNumDigits() - 1;
	int lhsEnd = this->m_numDigits - 1;
	int intWhichOne = 0;
	int intNum1 = 0;
	int intNum2 = 0;
	int intTotal = 0;
	
	if (rhsEnd > lhsEnd)
	{
		bigEnd = rhsEnd;
		smallEnd = lhsEnd;
		intWhichOne = 1;
	}
	else if (rhsEnd < lhsEnd)
	{
		bigEnd = lhsEnd;
		smallEnd = rhsEnd;
		intWhichOne = 2;
	}
	else
	{
		//Same size
		smallEnd = bigEnd = lhsEnd;
	}
	
	resEnd = bigEnd + 1;
	int intCarry = 0;
	BigInt res(resEnd);
	resEnd = resEnd - 1;
	
	//cout<<"bigEnd = " << bigEnd << endl;
	//cout<<"smallEnd = " << smallEnd << endl;
	//cout<<"resEnd = " << resEnd << endl;
	//cout<<"rhsEnd = " << rhsEnd << endl;
	//cout<<"lhsEnd = " << lhsEnd << endl;
	//cout<<"intWhichOne = " << intWhichOne << endl;
	//cout<<"rhs.m_isPositive = " << rhs.m_isPositive << endl;
	//cout<<"this->m_isPositive = " << this->m_isPositive << endl;
	
	if (!rhs.m_isPositive && this->m_isPositive) 
	{
	
	}
	else if (rhs.m_isPositive && !this->m_isPositive)
	{
	
	}
	else
	{
		for (int i = smallEnd; i >= 0; i--)
		{	
			//Can't change the members of the array
			//intNum1 = atoi(this->m_digitArray[lhsEnd]);
			//intNum2 = atoi(rhs[rhsEnd]);
			intNum1 = this->m_digitArray[lhsEnd];
			intNum1 = intNum1 - 48;
			intNum2 = rhs[rhsEnd];
			intNum2 = intNum2 - 48;
			
			//res[resEnd] = atoi(this->m_digitArray[lhsEnd]) + atoi(rhs[rhsEnd]) + intCarry;
			//res[resEnd] = intNum1 + intNum2 + intCarry;
			intTotal = intNum1 + intNum2 + intCarry;
			
			//if (this->m_digitArray[lhsEnd] + rhs[rhsEnd])
			if (intTotal > 9)
			{
				//res[resEnd] = char(intTotal - 10);
				res[resEnd] = '0' + (intTotal - 10);
				intCarry = 1;
			}
			else
			{
				//res[resEnd] = char(intTotal);
				res[resEnd] = '0' + intTotal;
				intCarry = 0;
			}
			
			cout<<"rhs[rhsEnd] = " << intNum2 << endl;	
			cout<<"rhsEnd = " << rhsEnd << endl;		
			cout<<"this->m_digitArray[lhsEnd] = " << intNum1 << endl;	
			cout<<"lhsEnd = " << lhsEnd << endl;	
			cout << "Total = " << intTotal << endl;
			cout<<"res[resEnd] = " << res[resEnd] << endl;
			cout<<"resEnd = " << resEnd << endl;	

			resEnd = resEnd - 1;
			lhsEnd = lhsEnd - 1;
			rhsEnd = rhsEnd - 1;
		}
		
		switch(intWhichOne)
		{
			case 0 : res[0] = intCarry;
							//cout<<"which 0 resEnd = " << resEnd << endl;
							cout<<"res[resEnd] = " << res[resEnd] << endl;
					
			case 1 : for (int j = rhsEnd; j >= 0; j--)
						{
							res[resEnd] = rhs[rhsEnd] + intCarry;
							//cout<<"which 1 resEnd = " << resEnd << endl;
							cout<<"res[resEnd] = " << res[resEnd] << endl;
							resEnd = resEnd - 1;
							rhsEnd = rhsEnd - 1;
							intCarry = 0;
						}
					
			case 2 : for (int j = lhsEnd; j >= 0; j--)
						{
							res[resEnd] = this->m_digitArray[lhsEnd] + intCarry;
							//cout<<"which 2 resEnd = " << resEnd << endl;
							cout<<"res[resEnd] = " << res[resEnd] << endl;
							resEnd = resEnd - 1;
							lhsEnd = lhsEnd - 1;
							intCarry = 0;
						}
		}
	}
	
	res.displayArray();
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
  //os<<"Error: Missing function body"<<std::endl;
	for (int i = 0; i< bi.getSize(); i++)
	{
		//is>>strDigits;
		os<<bi[i];
	}
	os<<endl;
  return os;
}

std::istream &operator>>(std::istream &is, BigInt &bi)
{
	//std::string strDigits;
  //std::cout<<"Error: Missing function body"<<endl;
	for (int i = 0; i< bi.getSize(); i++)
	{
		//is>>strDigits;
		is>>bi[i];
		bi.setNumDigits(i + 1);
	}
	//std::cout<<strDigits<<endl;
	//BigInt bigTemp(bi.getSize(), strDigits);
	//bi = bigTemp;
  return is;
}

void BigInt::displayArray()
{
	for (int i = 0; i < m_digitArraySize; i++)
	{
		cout << m_digitArray[i];
	}
	cout << endl;
}


void BigInt::setNumDigits(int numDigits)
{
	m_numDigits = numDigits;
}



