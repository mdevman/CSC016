# include "list.h"
# include <cstddef>
# include <iostream>
using namespace std;
//# include <stddef.h>

List::List()
//:next(0), data(0)
{
	first = NULL;
}

/*
List::List(DataType data, Node * next)
{
	this->data = data;
	this->next = next;
}
*/

void List::insert(DataType data)
{
	Node * tempPtr = new Node(data, first);
	first = tempPtr;
}

void List::pushFront(DataType data)
{
	Node * tempPtr = new Node(data, first);
	first = tempPtr;
}

void List::pushEnd(DataType data)
{
	Node * tempPtr = new Node(data, last);
	first = tempPtr;
}

void List::pushAt(DataType data)
{
	Node * tempPtr = new Node(data, first);
	first = tempPtr;
}

void List::display()
{
	Node * tempPtr = first;
	while (tempPtr != NULL)
	{
		cout<<tempPtr->data<<" ";
		tempPtr = tempPtr->next;
	}
	cout<<endl;
}
