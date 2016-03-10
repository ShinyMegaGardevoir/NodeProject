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
	numbers = new CTECList<int>();
}

NodeController::~NodeController()
{

}

void NodeController :: testLists()
{

	numbers->addToFront(3);
	numbers->addToEnd(8);
	numbers->addAtIndex(3, 9);
	cout << "End should be 8 and it is: " << numbers->getEnd() << endl;
	cout << "Front should be 3 and it is: " << numbers->getFront() << endl;
	cout << "At index 3 the value should be 9 and is: " << numbers->getFromIndex(3) << endl;
}


void NodeController :: start() //Le start method
{
/**	arrayTimer.startTimer();
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
**/
	testLists();

}

