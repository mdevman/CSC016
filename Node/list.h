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
	void deleteByVal(DataType data);
	void deleteByPosition(int pos);
	void deleteNode(Node prevPtr, Node tempPtr, Node first);
	void insert(int pos, DataType data);

private:
	Node * first;
	Node * last;
	Node * prev;
	Node * curr;
	
	
};


#endif // LIST_H
