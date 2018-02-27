const int MaxNameSize = 30;

class animal
{
public:
  void setName(const char name[]);
  void display();
  void read();
  // data
  char m_arrName[MaxNameSize];
};



