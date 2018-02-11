#include <iostream>
using namespace std;
const float MyConstantValue = 9.9;

int testFunc1()
{
 return MyConstantValue * 2;
}

int testFunc2(int val)
{
 return val*testFunc1();
}

int testFunc3(int y)
{
 int x = 4;
 return testFunc2(x)*testFunc2(y);
}

int main()
{
 cout<<"!!!Hello Errors!!!"<<endl;
 int result = testFunc3(10);
 cout<<"Result="<<result<<endl;
 return 0;
}