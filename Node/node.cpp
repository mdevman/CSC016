# include "node.h"
# include <cstddef>
//# include <stddef.h>

Node::Node()
//:next(0), data(0)
{
	next = NULL;
	data = 0;
}


Node::Node(DataType data, Node * next)
{
	this->data = data;
	this->next = next;
}
