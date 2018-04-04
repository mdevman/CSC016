#include<iostream>
using namespace std;
#include "templateExp.h"

int main()
{
	//cout << add(1,2) << endl;
	//cout << add(1.3,3.4) << endl;
	cout << add < int, float, double>(1,3.4) << endl;
	
	Array <int> arr;
	//arr[0] = 1;
	
	for (unsigned int i = 0; i < arr.getLength(); i++)
	{
		arr[i] = i * 10;
	}
	
	arr.display();
	
	Array <float> arr2;
	
	for (unsigned int i = 0; i < arr2.getLength(); i++)
	{
		arr2[i] = i * 2.5;
	}
	
	arr2.display();
}