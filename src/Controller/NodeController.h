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

#include "../Model/Node.cpp"

#include "../Model/ArrayNode.cpp"

#include "../Model/CTECArray.cpp"

#include "../Model/Timer.h"
using namespace std;


class NodeController
{
public:
	NodeController();
	virtual ~NodeController();
	void start();

private:

	CTECArray<int> * notHipsterInts;
	Timer arrayTimer;
};

#endif /* SRC_CONTROLLER_NODECONTROLLER_H_ */
