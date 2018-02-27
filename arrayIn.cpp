#include <cassert>

void read(IntArray theArray, int capacity, int numValues)

/*-------------------------------------------------------------------------
Input values into an array of integers from the keyboard.

Preconditions: 0 <= numValues < capacity, which is the capacity of theArray.
Postcondition: numValues integers entered from the keyboard 
    have been stored in the first NumValues positions of theArray

-------------------------------------------------------------------------/*
{
    assert (numValues >= 0 && numValues <= capacity);

    for (int i = 0; i < nurnValues; i++) 
        cin » theArray[i] ; 
}
