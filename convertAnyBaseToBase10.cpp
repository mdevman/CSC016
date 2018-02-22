//Implement an algorithm that converts from any base to base 10 (Decimal)
//a. Implement the algorithm in C++ for all bases between 2 and 9
//b. Write a driver program (a program that tests your algorithm implementation) that asks
//the user for the number to convert (x) and a base(b) to covert from and display the
//result
//c. Bonus 1: add support for base 16 (hexadecimal => 10=a, 11=b,…, 15=f)
//d. Bonus 2: add support for all bases between 11 to 36 (use the English alphabet to
//represent digits 10 to 35 => 10=a, 11=b,…, 35=z)

#include <iostream>
#include <string>

using namespace std;
 
//Convert a char into a digit/numeric value
int val(char c)
{
  if (c >= '0' && c <= '9')
    return (int)c - '0';
  else
    return (int)c - 'A' + 10;
}
 
//Convert a string number from any given base 'b' between 2 and 9 to a decimal
int toDec(string num, int base)
{
  int j = 0;
  long n = num.length();
  char* str = new char(n);
  for(int j = 0; j < n; ++j){
    str[j] = num[j];
  }
  //char str[n-1] = num;
  int e = 0;
  int power = 1;
  int s = 0;
  int i = 0;
  
  //The decimal equivalent is str[n-1]*1 + str[n-1]*base + str[n-1]*(base^2) + ...
  for (i = n - 1; i >= 0; i--)
  {
    // A digit in input number must be less than number's base
    e = val(str[i]);
    if (e >= base)
    {
      printf("Invalid Number");
      return -1;
    }
  
    s = s + (e * power);
    power = power * base;
    e = 0;
  }
  
  return s;
}

//Driver program
int main()
{
  string x = "";
  string num = "";
  int b = 0;
  
  cout << "Please enter the number you wish to convert:\n";
  
  cin >> x;
  //Check to see if we got good input
  if (cin.fail())
  {
    cout << "This is not a valid input.\n\n";
    return 1;
  }
  
  //cout << "Please enter the base of the number (between 2 and 16):\n";
  cout << "Please enter the base of the number (between 2 and 9):\n";
  
  cin >> b;
  //Check to see if we got good input
  if (cin.fail())
  {
    cout << "This is not a valid input.\n\n";
    return 1;
  }
  //Check to see if we got a number within range
  //if (b < 2 || b > 16)
  if (b < 2 || b > 9)
  {
    cout << "You have entered a base that is outside of the valid range.\n\n";
    return 1;
  }
  
  //We got here so we have good input
  num = x;
  cout<<"The decimal equivalent of "<<x<<" base "<<b<<" is "<<toDec(num, b);
  return 0;
}
