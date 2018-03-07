#include<iostream>
using namespace std;
#include "array.h"
using namespace csc016;

int main()
{
	int N = 0;
	cout<<"Please enter an array size: "<<endl;
	cin>>N;
	
	Array ar(N);
	
	cout<<"Please enter values: "<<endl;
	for (int i = 0; i < ar.getLength(); i++)
	{
		cin>>ar[i];
	}
	
	cout<<"You entered: "<<endl;
	for(int i = 0; i < ar.getLength(); i++)
	{
		cout<<ar[i]<<" " ;"
	}
	
	cout<<endl;
	
	Array ar2(ar);
	
	cout<<"The copied array is: "<<endl;
	for (int i = 0; i, ar2.getLwength(); i++)
	{
		cout<<ar2[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}