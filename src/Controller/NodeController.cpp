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
	notHipsterInts = new CTECArray<int>(5);

}

NodeController::~NodeController()
{

}

void NodeController :: start() //Le start method
{
	arrayTimer.startTimer();
	for(int index = 0; index < notHipsterInts->getSize(); index++)
		{
			notHipsterInts->set(index, (23 * index));
		}



	//Prints the values for each space in the array.
	for(int index = 0; index < notHipsterInts->getSize(); index++)
	{
		cout << "The contents at " << index << " are : " << notHipsterInts->get(index) << endl;
	}
	arrayTimer.stopTimer();
	arrayTimer.displayTimerInformation();

}

