#include  "sieve.h"
#include<iostream>
using namespace std;

sieveArr::sieveArr()
{
  m_min = 2;
  m_begin = 2;
  m_end = 100;
  m_size = 99;
  intArrSieve = 0;
}

sieveArr::sieveArr(int begin, int end)
{
  //m_begin = begin;
  m_min = begin;
  m_begin = 2;
  m_end = end;
  //m_size = (end + 1) - m_min;
  m_size = end - 2;
}

void sieveArr::loadArray()
{
  //sieveArr::intArrSieve[m_size];
  intArrSieve = new int[m_size];
  
  for (int i = 0 ; i <= m_end ; i++)
  {
    //sieveArr::intArrSieve[i] = i;
    intArrSieve[i] = i + 2;
  }
}

bool sieveArr::isPrime(int intNum)
{
  for(int intDevisor = 2; intDevisor <= intNum - 1; intDevisor++)
  {
    if(intNum % intDevisor == 0)
    {
      return false;
    }
    return true;
  }
}
