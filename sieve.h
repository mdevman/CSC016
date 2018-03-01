/*
In mathematics, the sieve of Eratosthenes is a simple, ancient algorithm for finding all prime numbers up to any given limit.

It does so by iteratively marking as composite (i.e., not prime) the multiples of each prime, starting with the first prime number, 2. The multiples of a given prime are generated as a sequence of numbers starting from that prime, with constant difference between them that is equal to that prime.[1] This is the sieve's key distinction from using trial division to sequentially test each candidate number for divisibility by each prime
*/

//Need to figure out if the number is a prime number

class sieveArr
{
  public:
    //constructors
    sieveArr();
    sieveArr(int begin, int end);

    void loadArray();
    void findPrime();

    //const int maxSize = 1000;
    int *intArrSieve;
    
    bool isPrime(int intNum);
    
    int getBegin()
    {
      return m_begin;
    }
    
    int getEnd()
    {
      return m_end;
    }
    
    int getSize()
    {
      return m_size;
    }
    
    int getMin()
    {
      return m_min;
    }
    
  private:
    int m_min;
    int m_begin;
    int m_end;
    int m_size;
};
