#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#include <cstdlib>

template <class T>
void display(string title, const vector<T> &vec)
{
  cout<<title<<endl;
  cout<<"---------------"<<endl;
  for(int i=0;i<vec.size();i++)
    cout<<vec[i]<<endl;
  cout<<"---------------"<<endl;
}

class Rock
{
  public:
    Rock(int hardness=0) { m_hardness = hardness; }
    bool operator<(const Rock &rrhs) const
    { return m_hardness<rrhs.m_hardness; }
    bool operator>(const Rock &rrhs) const
    { return !operator<(rrhs); }
    int getHardness() const { return m_hardness; }
  private:
    int m_hardness;
};


ostream &operator<<(ostream &out,const Rock &r) 
{
  out<<r.getHardness();
  return out;
}

//void bubbleSort(vector<Rock> &vec )
template <class T>
void bubbleSort(vector<T> &vec )
{
	//rockTemp = new Rock;
	bool blSwap = false;
	
	for (int j = vec.size() - 1; j > 0; j--)
	{
		blSwap = false;
		for (int i = 0; i < j; i++)
		{
			if (vec[i] > vec[i + 1])
			{
				//Rock rockTemp = vec[i + 1];
				T rockTemp = vec[i + 1];
				vec[i + 1] = vec[i];
				vec[i] = rockTemp;
				blSwap = true;
			}
		}
		
		if (!blSwap)
		{
			break;
		}
	}
}

int main()
{
  /* initialize random seed: */
  srand (time(NULL));
  const int N = 20;
  vector<Rock> rockVec;
  for(int i=0;i<N;i++)
  {
    int rnum = rand() % 100 + 1;
    Rock rockTemp(rnum);
    rockVec.push_back(rockTemp);
  }
  display("unsorted rock list",rockVec);
  //sort(rockVec.begin(),rockVec.end());
  bubbleSort(rockVec);
  display("sorted rock list",rockVec);

  ////////////////////  
  vector<float> vec;
  for(int i=0;i<N;i++)
  {
    int rnum = rand() % 100 + 1;
    vec.push_back(rnum/100.0);
  }
  display("unsorted list",vec);
  sort(vec.begin(),vec.end());
  display("sorted list",vec);
  return 0;  
}
