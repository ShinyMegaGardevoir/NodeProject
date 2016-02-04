/*
 * NodeController.cpp
 *
 *  Created on: Jan 29, 2016
 *      Author: csad2045
 */

#include "NodeController.h"
#include <iostream>
//using namespace std;

NodeController::NodeController()
{
	this->intNode.setValue(5);
	this->stringArrayNode.setValue("Words");
//	this->otherArrayNode.setValue("linked node");
//	stringArrayNode.setNext(&otherArrayNode);

}

NodeController::~NodeController() {
	// TODO Auto-generated destructor stub
}

void NodeController :: start()
{
	cout << intNode.getValue() << endl;
	cout << stringArrayNode.getValue() << endl;
	cout << (*stringArrayNode.getNext()).getValue() << endl;
}

