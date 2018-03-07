#include "array.h"			//in the same folder

namespace csc016
{
	
	// copy constructor, copy existing array into our array, creating object (=)
	Array::Array(const Array &ar)
	{
		m_dataArray = NULL;
		m_dataLength = 0;
		copy(ar);
	}
	
	//delete function
	void Array::deleteFunc()
	{
		if (m_dataArray != NULL)
		{
			delete [] m_dataArray;
			m_dataArray = NULL;
		}
	}
	
	// copy array
	void Array::copy(const Array & ar)
	{
		deleteFunc();										// 1. check if memory is allocated.  If so, free memory
		m_dataArray = new int[ar.getLength()];				// 2. Allocate new size == ar.getLength(), m_dataLength = ar.getLength
		m_dataLength = ar.getLength();
		for (i = 0; i < ar.getLength(); i++)				// 3. Loop other elements of ar and copy into m_dataArray (Our Assignment)
		{
			
		}
	}
	
	//explicit size constructor
	Array::Array(int size)
	{
		PRINT_DEBUG_HELPER("In constructor");
		m_dataArray = new int[size];
		m_dataLength = size;
	}
	
	//destructor
	Array::~Array()
	{
		PRINT_DEBUG_HELPER("In destructor");
		deleteFunc();
	}
	
}	// namespace csc016