/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: csad2045
 */

#include "CTECList.h"

template <class Type>
CTECList<Type>::CTECList()
{
	this->size = 0;
	this->head = nullptr;
	this->end = nullptr;

}

template <class Type>
CTECList<Type>::~CTECList()
{
	// TODO Auto-generated destructor stub
}

template <class Type>
int CTECList<Type>::getSize()
{
	return this->size;
}

template <class Type>
Type CTECList<Type>::getFront()
{

}

template <class Type>
Type CTECList<Type>::getEnd()
{

}

template <class Type>
Type CTECList<Type>::getFromIndex(int index)
{

}

template <class Type>
Type CTECList<Type>::removeFromFront()
{
	assert(this->size > 0);

	Type thingToRemove;
	//create a pointer that is after head
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = this->head->getNext();
	//Delete what head is pointing to
	delete this->head;
	//Set head to new head
	this->head = newHead;

	this->calculateSize();
	return thingToRemove;


}

template <class Type>
void CTECList<Type>::calculateSize()
{
	assert(size >= 0);


	ArrayNode<Type> * counterPointer = head;
	int count = 0;
	if(counterPointer == nullptr)
	{
		this->size = 0;
		return;
	}
	else
	{
		count++
		while(counterPointer->getNext() != nullptr)
		{
			counterPointer = counterPointer->getNext();
			count++;

		}

		this->size = count;
	}


}


template <class Type>
Type CTECList<Type>::removeFromEnd()
{
	Type valueToRemove;
	//Loop over Size
	for(int index = 0; index < size; index ++)
	{

	}
	this->calculateSize();
	return valueToRemove();
}

template <class Type>
Type CTECList<Type>::removeFromIndex(int index)
{
	assert(this->size > 0);
	assert(index >= 0 && index < size);

			Type thingToRemove;
			ArrayNode<Type> * previous, deleteMe, newNext;
			if(index == 0)
			{
				thingToRemove = removeFromFront();
			}
			else if(index == size - 1)
			{
				thingToRemove = removeFromEnd();
			}
			else
			{
				for(int spot = 0; spot < index+1; spot++)
				{

				}
				this->calculateSize();
			}

			return thingToRemove;
}

template <class Type>
Type CTECList<Type>::set(int index, const Type& value)
{
	assert(index < size && index >= 0);

		ArrayNode<Type> * current = head;
		//Inclusive because I am inside the bounds.
		for (int i = 0; i <= index; i++)
		{
			if (i != index)
			{
				current = current->getNext();
			}
			else
			{
				return current->setValue(value);
			}
		}


}

template <class Type>
void CTECList<Type>::addToFront(const Type& value)
{

}

template <class Type>
void CTECList<Type>::addToEnd(const Type& value)
{

}

template <class Type>
void CTECList<Type>::addAtIndex(int index, const Type& value)
{

}

