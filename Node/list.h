/*
-- List Class
*/

# ifndef LIST_H
# define LIST_H

# include "node.h"

class List
{
public:
	List();
	void insert(DataType data);
	void pushFront(DataType data);
	void pushEnd(DataType data);
	void pushAt(DataType data);
	void display();

private:
	Node * first;
	Node * last;
	
	
};


#endif // LIST_H
