/*
 * CTECArray.h
 *
 *  Created on: Feb 2, 2016
 *      Author: Christina Sadlier
 */

#ifndef MODEL_CTECARRAY_H_
#define MODEL_CTECARRAY_H_

#include "ArrayNode.h"

template <class Type>
class CTECArray {
public:
	CTECArray(int size);
	virtual ~CTECArray();
	int getSize();
	Type* get(int position);
	void set(int position, Type value);

private:
	int size;
	ArrayNode<Type> * head;
};

#endif /* MODEL_CTECARRAY_H_ */
