/*
 * NodeController.h
 *
 *  Created on: Jan 29, 2016
 *      Author: csad2045
 */

#ifndef SRC_CONTROLLER_NODECONTROLLER_H_
#define SRC_CONTROLLER_NODECONTROLLER_H_

#include <iostream>
#include <string>
#include "../Model/Node.h"
#include "../Model/Node.cpp"

#include "../Model/ArrayNode.h"
#include "../Model/ArrayNode.cpp"

using namespace std;


class NodeController
{
public:
	NodeController();
	virtual ~NodeController();
	void start();

private:
	Node<int> intNode;
	ArrayNode<string> stringArrayNode;
};

#endif /* SRC_CONTROLLER_NODECONTROLLER_H_ */
