/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: csad2045
 */

#include "CTECArray.h"
#include <iostream>

using namespace std;

template <class Type>
CTECArray<Type>::CTECArray(int size)
{
	this->size = size;
	head = nullptr;

	if(size <=0) //Checks for the size to make sure it is greater than 0.
	{
		cerr << "Size must be greater than or equal to 1." << endl;
		return;
	}

	for(int index = 0; index < size; index++)
	{
		if(head != nullptr)
		{	//We have more than one ArrayNode
			ArrayNode<Type> nextNode;
			nextNode.setNext(head);
			head = &nextNode;

		}
		else
		{	//This is the first node in the array.
			ArrayNode<Type> first;
			head = &first;

		}
	}
}

template <class Type>
CTECArray<Type>::~CTECArray() //Deconstructs the ArrayNode.
{
	ArrayNode<Type> * deleteMe = head;
	for(int index = 0; index < size; index++)
	{
		if(deleteMe->getNext() != nullptr)
		{
			head = deleteMe->getNext();
			deleteMe->setNext(nullptr);
		}
			delete deleteMe->getNext();
			deleteMe = head;

	}
	delete head;
}

template <class Type>
int CTECArray<Type>:: getSize() //Returns the size as an int.
{
	return this->size;
}


template <class Type>
Type* CTECArray<Type>::get(int position)
{
	//Bounds check for size and negative.
	if(position >= size || position < 0)
	{
		return nullptr;
	}
	else
	{
		ArrayNode<Type> * current = head;
		//Inclusive because I am inside the bounds.
		for(int i = 0; i <= position; i++)
		{
			if(i != position)
			{
				current = current->getNext();
			}
			else
			{
				Type temp = current->getValue(); //Grab the value stored in the Node and shove it in temp.
				return &temp;					//Return a pointer to the value.
			}

		}
	}
}

template <class Type>
void CTECArray<Type>:: set(int position, Type value)
{
		if(position >= size || position < 0)
		{
			cerr << "Error: Outside of bounds." << endl;
		}
		else
		{
			ArrayNode<Type> * current = head;
			//Inclusive because I am inside the bounds.
			for(int i = 0; i <= position; i++)
			{
					if(i != position)
					{
						current = current->getNext();
					}
					else
					{
						return current->setValue(value);
					}
			}
		}

}
