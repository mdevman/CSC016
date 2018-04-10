/* clock example: frequency of primes */
#include <iostream>      /* printf */
#include <time.h>       /* clock_t, clock, CLOCKS_PER_SEC */
#include <math.h>       /* sqrt */
#include <vector>
using namespace std;

int main ()
{
  time_t begin = clock();
//measure...
vector<int> intVec;
for (int i = 0; i < 100000; i++)
{
	//intVec.push_back(i);  //very efficient
	intVec.insert(intVec.begin(), i);  //very inefficient
}
time_t end = clock();
time_t elapsed = end - begin;
cout << "Clocks: " << elapsed << endl;
cout << "Duration: " << (double) elapsed / CLOCKS_PER_SEC << endl;

  return 0;
}
