#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
int base;
int num;
//InVal num_c;
  num = 0;
  base = 0;
  
  cout << "Please enter the number you wish to convert:\n";
  
  cin >> num;
  
  if (cin.fail())
  {
    cout << "This is not a valid input.\n\n";
    return 1;
  }
  
  cout << "Please enter the base you wish to convert to:\n";
  
  cin >> base;
  
  if (cin.fail())
  {
    cout << "This is not a valid input.\n\n";
    return 1;
  }
  
  if (base < 2 || base > 9)
  {
    cout << "You have entered a base that is outside of\n"<< "the valid range.\n\n";
    return 1;
  }
  
  num_c.init_val(num,10);
  
  cout << "Your number is: ";
  \\num_c.PrintAsBase(base);
  \\PrintAsBase(int out_base)
  string digits("0123456789ABCDEF");
  bool is_neg = num < 0;
  string result;
  int in_num = num;
  int in_base = out_base;
  
  for (; in_num; in_num /= in_base)
  {
    result.insert(result.begin(), digits[abs(in_num % in_base)]);
  }
  
  if (is_neg)
  {
    result.insert(result.begin(), '-');
  }
  
  cout << result << '\n';
  
}