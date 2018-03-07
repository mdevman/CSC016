/*
 * Array.h
 *
 *  Created on: Mar 7, 2017
 *  Author: admin
 */

#ifndef ARRAY_H_					//conditional compilation
#define ARRAY_H_

#ifndef NULL
  #define NULL 0
#endif

// remark the line below to stop printing debug messages
//#define USE_PRINT_DEBUG


#ifdef USE_PRINT_DEBUG
#include <iostream>
  #define PRINT_DEBUG_HELPER(txt)\
		std::cout<<__FILE__<<":"<<__LINE__<<": "<< txt;//<<std::endl;
#else
  #define PRINT_DEBUG_HELPER(txt)
#endif


namespace csc016
{

class Array
{
public:
	// explicit size constructor (takes parameter)
	//constructor has same name as the class
	Array(int size);
	// copy constructor, copy existing array into our array, creating object (=)
	Array(const Array &ar);
	// Assignment operator, called after object exists
	Array &operator =(const Array &ar);
	// get array length, inline function
	int getLength() const { return m_dataLength; }
	// overload the subscript operator - const version
	int operator[](unsigned int index) const
	{
		PRINT_DEBUG_HELPER("[Subscript operator const called with index : "<<index<<"]"<<std::endl);
		return m_dataArray[index];
	}
	// overload the subscript operator - non const version
	int &operator[](unsigned int index)			//(&) returning reference
	{
		PRINT_DEBUG_HELPER("[Subscript operator reference called with index : "<<index<<"]"<<std::endl);
		return m_dataArray[index];
	}
	//delete function
	void deleteFunc();
	
    // destructor
	~Array();

private:
	// data
	int *m_dataArray;
	int m_dataLength;

	//
	// private utility functions
	//

	// copy array
	void copy(const Array& ar);
};

} /* namespace csc016 */

#endif /* ARRAY_H_ */