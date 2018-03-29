/* 
--Node Class
*/
# ifndef NODE_H
# define NODE_H

typedef int DataType;

class Node
{
public:
	Node();
	Node(DataType data, Node * next);
	//~Node();
	
	//data
	DataType data;
	Node *next;
};

# endif // NODE_H

