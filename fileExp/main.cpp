
#include <iostream>
#include <fstream>
#include <cassert>
#include <string>

using namespace std;

int main()
{
  ofstream fout;
  fout.open("test_file.txt", ofstream::app);
  assert(fout.is_open());
  fout<<"Hello world !!!!";
  fout.close();
  
  ifstream fin;
  fin.open("test_file.txt");
  assert(fin.is_open());
  cout<<"the contents of the file is: ";
  while(!fin.eof())
  {
    string str;
    fin>>str;
    cout<<str<<" ";
  }
  
  cout<<endl;

  fin.close();
  
  return 0;
}

