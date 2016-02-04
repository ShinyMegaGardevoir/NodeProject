/*
 * ArrayNode.h
 *
 *  Created on: Jan 29, 2016
 *      Author: csad2045
 */

#ifndef SRC_MODEL_ARRAYNODE_H_
#define SRC_MODEL_ARRAYNODE_H_

#include "Node.h"
template <class Type>
class ArrayNode : public Node<Type> {
public:
	ArrayNode();
	ArrayNode(Type value);
	ArrayNode(Type value, ArrayNode * next);
	virtual ~ArrayNode();
	ArrayNode * getNext();
	void setNext(ArrayNode * next);

private:
	ArrayNode * next;

};

#endif /* SRC_MODEL_ARRAYNODE_H_ */
