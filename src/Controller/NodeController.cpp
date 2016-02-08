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

//	this->intNode.setValue(5);
//	this->stringArrayNode.setValue("Words");
//	this->otherArrayNode.setValue("linked node");
//	stringArrayNode.setNext(&otherArrayNode);
	myStringArray = new CTECArray<string>(5); //Sets myStringArray to an array with 5 slots.
}

NodeController::~NodeController()
{

}

void NodeController :: start() //Le start method
{
//	cout << intNode.getValue() << endl;
//	cout << stringArrayNode.getValue() << endl;
//	cout << (*stringArrayNode.getNext()).getValue() << endl;
	string first = "first";
	string second = "not first";
	string third = "tres";
	string fourth = "not fifth";
	string fifth = "fifth";

	//Sets the values for each of the spaces in the array.
	myStringArray->set(0, first);
	cout << myStringArray->get(0) << endl;
	myStringArray->set(1, second);
	myStringArray->set(2, third);
	myStringArray->set(3, fourth);
	myStringArray->set(4, fifth);

	//Prints the values for each space in the array.
	for(int index = 0; index < myStringArray->getSize(); index++)
	{
		cout << "The contents at " << index << " are : " << myStringArray->get(index) << endl;
	}

}

