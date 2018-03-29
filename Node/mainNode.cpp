# include <iostream>
using namespace std;
# include "list.h"

int main()
{
	List l1;
	
	l1.insert(1);
	l1.insert(2);
	l1.insert(3);
	l1.display();
	
	cout << "After insert" << endl;
	
	l1.deleteByVal(3);
	l1.display();
	l1.deleteByVal(1);
	l1.display();
	l1.deleteByVal(2);
	l1.display();
	
	cout << "After deleteByVal" << endl;
	
	//Reload to test delete by position
	l1.insert(1);
	l1.insert(2);
	l1.insert(3);
	l1.display();
	
	cout << "After second insert" << endl;
	
	l1.deleteByPosition(3);
	l1.display();
	l1.deleteByPosition(2);
	l1.display();
	l1.deleteByPosition(1);
	l1.display();
	
	cout << "After deleteByPosition" << endl;
	
	//Test delete by position 2
	l1.insert(1);
	l1.insert(2);
	l1.insert(3);
	l1.display();
	
	cout << "After third insert" << endl;
	
	l1.deleteByPosition(1);
	l1.display();
	l1.deleteByPosition(1);
	l1.display();
	l1.deleteByPosition(1);
	l1.display();
	
	cout << "After deleteByPosition second" << endl;
	
	//Test delete by position 3
	l1.insert(1);
	l1.insert(2);
	l1.insert(3);
	l1.display();
	
	cout << "After fourth insert" << endl;
	
	l1.deleteByPosition(0);
	l1.display();
	l1.deleteByPosition(5);
	l1.display();
	l1.deleteByPosition(3);
	l1.display();
	l1.deleteByPosition(1);
	l1.display();
	
	cout << "After deleteByPosition third" << endl;
	
	l1.insert(1, 1);
	l1.insert(2, 2);
	l1.insert(3, 3);
	l1.display();
	
	cout << "After insert by position" << endl;
}

