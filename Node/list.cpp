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

void List::deleteByVal(DataType data)
{
	Node * tempPtr = first;
	Node * prevPtr = first;
	
	while (tempPtr != NULL)
	{
		if (tempPtr->data == data)
		{
			//Possible function call
			//deleteNode(prevPtr, tempPtr, first);			
			
			//Does first point to the current Node
			//  then first needs to be changed to point to the next
			if (tempPtr == first)
			{
				first = tempPtr->next;
				break;
			}
			//Does the current Node's next points to Null
			//  change the previous Node's next to point to Null
			else if (tempPtr->next == NULL)
			{
				//prevPtr->next = 0;
				prevPtr->next = NULL;
				break;
			}			
			//Else we are in middle of list
			// change the previous Node's next to be the current Node's next
			else
			{			
				prevPtr->next = tempPtr->next;
				break;
			}
		}
		
		//
		prevPtr = tempPtr;
		tempPtr = tempPtr->next;
	}
	
	//Does the current Node's next points to Null
	//  change the previous Node's next to point to Null
	//if (tempPtr->data == data) && (tempPtr->next = NULL)
	//If I am on the last node, check to see if the data matches
	/*
	if (tempPtr->data == data)
	{
		//prevPtr->next = 0;
		prevPtr->next = NULL;
	}
	*/
	
	delete tempPtr;
	//delete prevPtr;
}

void List::deleteByPosition(int pos)
{
	Node * tempPtr = first;
	Node * prevPtr = first;
	
	//The user will give us a number associated to the position, but the list is zero based...
	int intEndPos = pos - 1;
	
	//Check to see if the user has entered a bad position
	if (intEndPos < 0)
	{
		//delete tempPtr;
		return;
	}
	
	for (int i = 0; i <= intEndPos; i++)
	{
		//if we have looped to the pos minus 1, then delete the node
		if (i == intEndPos)
		{	
			//Does first point to the current Node
			//  then first needs to be changed to point to the next
			if (tempPtr == first)
			{
				first = tempPtr->next;
				//cout << "In tempPtr == first" << endl;
				break;
			}
			//Does the current Node's next points to Null
			//  change the previous Node's next to point to Null
			else if (tempPtr->next == NULL)
			{
				//prevPtr->next = 0;
				prevPtr->next = NULL;
				//cout << "tempPtr->next == NULL" << endl;
				break;
			}			
			//Else we are in middle of list
			// change the previous Node's next to be the current Node's next
			else
			{			
				prevPtr->next = tempPtr->next;
				//cout << "ELSE" << endl;
				break;
			}
		}
		
		//if we get to the node whose next points to null break, did not find Node at position
		if (tempPtr->next == NULL)
		{
			//break;
			//cout << "ELSE" << endl;
			//delete tempPtr;
			return;
		}
		
		prevPtr = tempPtr;
		tempPtr = tempPtr->next;
	}
	
	//delete tempPtr;
}

/*
void deleteNode(Node prevPtr, Node tempPtr, Node first)
{			
	//Does first point to the current Node
	//  then first needs to be changed to point to the next
	if (tempPtr == first)
	{
		first = tempPtr->next;
		break;
	}
	//Does the current Node's next points to Null
	//  change the previous Node's next to point to Null
	else if (tempPtr->next == NULL)
	{
		//prevPtr->next = 0;
		prevPtr->next = NULL;
		break;
	}			
	//Else we are in middle of list
	// change the previous Node's next to be the current Node's next
	else
	{			
		prevPtr->next = tempPtr->next;
		break;
	}
}
*/

void List::insert(int pos, DataType data)
{
	//Initial insert code
	//Node * tempPtr = new Node(data, first);
	//first = tempPtr;
	
	//See if the list is empty
	if (first == NULL)
	{
		//cout << "list is empty" << endl;
		Node * tempPtr = new Node(data, first);
		first = tempPtr;
		return;
	}	

	Node * tempPtr = first;
	Node * prevPtr = first;
	
	//The user will give us a number associated to the position, but the list is zero based...
	int intEndPos = pos - 1;
	
	//Check to see if the user has entered a bad position
	if (intEndPos < 0)
	{
		return;
	}
	
	for (int i = 0; i <= intEndPos; i++)
	{
		//if we have looped to the pos minus 1, then delete the node
		if (i == intEndPos)
		{	
			//Does first point to the current Node and next point to NULL and inserting into zeroth position
			//  then first needs to be changed to point to the current and current next need to point to first
			if (tempPtr == first && tempPtr->next == NULL && intEndPos == 0)
			{
				//cout << "In tempPtr == first and next is null and endpos = 0" << endl;
				Node * newPtr = new Node(data, NULL);
				tempPtr->next = newPtr;
				//first = newPtr;
				break;
			}
			//Does first point to the current Node and next point to NULL and inserting into first position
			//  then first needs to be changed to point to the current and current next need to point to first
			else if (tempPtr == first && tempPtr->next == NULL && intEndPos == 1)
			{
				//cout << "In tempPtr == first anbd next is null and endpos = 1" << endl;
				Node * newPtr = new Node(data, first);
				first = newPtr;
				break;
			}
			//Does first point to NULL, the list is empty
			//  then first needs to be changed to point to the current and current next need to point to first
			else if (first == NULL)
			{
				//cout << "first == NULL" << endl;
				Node * newPtr = new Node(data, first);
				first = newPtr;
				break;
			}
			//Does tempPtr == first, insert in front
			//  then first needs to be changed to point to the current and current next need to point to first
			else if (tempPtr == first)
			{
				//cout << "tempPtr == first" << endl;
				Node * newPtr = new Node(data, tempPtr->next);
				tempPtr->next = newPtr;
				first = newPtr;
				break;
			}		
			//Else we are in middle of list
			// change the previous Node's next to be the current Node's next
			else
			{			
				//cout << "ELSE in loop" << endl;
				Node * newPtr = new Node(data, tempPtr->next);
				tempPtr->next = newPtr;
				//first = newPtr;
				break;
			}
		}
		
		//if we get to the node whose next points to null break, did not find Node at position
		if (tempPtr->next == NULL)
		{
			//cout << "ELSE" << endl;
			//delete tempPtr;
			//return;
			continue;
		}
		
		prevPtr = tempPtr;
		tempPtr = tempPtr->next;
	}
	
	//delete tempPtr;
	
}
