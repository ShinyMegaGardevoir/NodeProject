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
	this->value = nullptr;

}

template <class Type>
CTECList<Type>::~CTECList()
{
	// TODO Auto-generated destructor stub
}

template <class Type>
int CTECList<Type>::getSize() //
{
	return this->size;
}

template <class Type>
Type CTECList<Type>::getFront() //
{
	assert(size >= 0);
	return this->head;

}

template <class Type>
Type CTECList<Type>::getEnd() //
{
	assert(size >= 0);
	ArrayNode<Type> * current = head;
	for(int i = 0; i < size; i++)
	{
		current = current->getNext();
		if(i == size-1)
		{
			return current->getValue();
		}
	}

}

template <class Type>
Type CTECList<Type>::getFromIndex(int index) //
{
	//Bounds check for size and negative.

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
			return current->getValue();
		}

	}

}

template <class Type>
Type CTECList<Type>::removeFromFront() //
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
void CTECList<Type>::calculateSize() //
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
		count++;
		while(counterPointer->getNext() != nullptr)
		{
			counterPointer = counterPointer->getNext();
			count++;

		}

		this->size = count;
	}


}


template <class Type>
Type CTECList<Type>::removeFromEnd() //
{
	assert(size > 0);
	Type valueToRemove;
	if(size == 1)
	{
		valueToRemove = removeFromFront();
		end = nullptr;
	}
	else
	{
	ArrayNode<Type> * current = head;
	//Loop over Size
	for(int index = 0; index < size-1; index ++)
	{
		current = current->getNext();
	}

/**	Does the same thing as looping over size, just another way of doing it.
	ArrayNode<Type> * pointer = head;
	while(pointer->getNext()->getNext() != nullptr)
	{
		pointer = pointer->getNext();
	}
**/

	valueToRemove = current->getNext()->getValue();
	end = current;
	delete current->getNext();
	}

	this->calculateSize();
	return valueToRemove();
}

template <class Type>
Type CTECList<Type>::removeFromIndex(int index) //
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
				ArrayNode<Type> * newHead = new ArrayNode<Type>();
				newHead = head;
				for(int spot = 0; spot < index+1; spot++)
				{

					if(spot == index)
					{
						//Delete what head is pointing to
						delete this->head;
						//Set head to new head
						this->head = newHead;

					}
					else
					{
						head = spot;
					}
				}
				this->calculateSize();
			}

			return thingToRemove;
}

template <class Type>
Type CTECList<Type>::set(int index, const Type& value) //
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
void CTECList<Type>::addToFront(const Type& value) //
{

	ArrayNode<Type> * newNode; //pointer to the new node
	newNode = new ArrayNode<Type>; //creates the new node
	newNode->setValue(value); //sets the new node value to the value
	newNode->link = head; //links the new node to the first one
	head = newNode; //moves the head to the new node

	this->calculateSize();

}

template <class Type>
void CTECList<Type>::addToEnd(const Type& value)
{
	ArrayNode<Type> * newNode; //creates a pointer to the new node
	newNode = new ArrayNode<Type>; //creates the new node
	newNode->setValue(value); //sets the value of the new node to the value
	newNode->link = nullptr; //the new node links to null

	if(head == nullptr) //runs if the head is null (meaning the size is 0)
	{
		head = newNode;
		end = newNode;

	}
	else
	{
		end->link = newNode; //links the last node to the new node
		end = newNode; //makes new node the new end
	}

	this->calculateSize();
}

template <class Type>
void CTECList<Type>::addAtIndex(int index, const Type& value)
{
	assert(index < size && index >= 0);
	ArrayNode<Type> * newNode;
	ArrayNode<Type> * previous;
	ArrayNode<Type> * current;
	newNode = new ArrayNode<Type>;



	newNode->setValue(value);
	newNode->link = nullptr;

	if(head == nullptr)
	{
		head = newNode;
		end = newNode;
		newNode->link = nullptr;
	}
	else
	{
		current = head;


		while(current != nullptr)
		{
			if(current == index)
			{
				previous->link = newNode;
				newNode->link = current;
			}
			else
			{
				previous = current;
				current = current->link;
			}
		}

		if (current == head)
		{
			newNode->link = head;
			head = newNode;
		}
		else
		{
			previous->link = newNode;
			newNode->link = current;

			if(current == nullptr)
			{
				end = newNode;
			}
		}
	}

	this->calculateSize();



}

