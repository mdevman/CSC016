#include <iostream>
#include <vector>
using namespace std;

int main()
{
	const int N = 10;
	
	vector <int> v1;
	
	//cout << v1.size() << endl;
	
	v1.reserve(N);
	
	v1.resize(N);
	
	cout << "v1.size == " << v1.size() << endl;
	
	
	for (int i = 0; i < N; i++)
	{
		cout << "i == " << i << " ";
		cout << "v1.size == " << v1.size();
		cout << "Capacity == " << v1.capacity() << endl;
		
		v1.push_back(i);
	}
	
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	
	cout << endl;
}
