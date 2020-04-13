/*
 * Queue.cpp
 *
 *  Created on: 13-Apr-2020
 *      Author: sunbeam
 */

#include "Queue.h"
#include <iostream>
using namespace std;


Queue::Queue() {
	this->front=-1;
	this->rear=-1;
	for (int i = 0; i < 5; ++i) {
		arr[i]=0;
	}
}

int Queue::isEmpty()
{
	if(this->front==-1 && this->rear==-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int Queue::isFull()
{
	if(this->rear==4)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Queue::enqueue(int val)
{


	if(isEmpty())
	{
		rear++;
		front++;
		arr[rear]=val;
	}
	else
	{
		rear++;
		arr[rear]=val;
		if(isFull() )
			{
				cerr<<"the queue is full"<<endl;
			}
	}
}

int Queue::dequeue()
{
	int val;
	if(isEmpty())
	{
		cerr<<"the queue is empty"<<endl;
		return 0;
	}
	else if(front==rear)
	{
		val=arr[front];
		arr[front]=0;
		front=-1;
		rear=-1;
		return val;
	}

	else
	{
		val=arr[front];
		arr[front]=0;
		front++;
		return val;
	}
}


void Queue::display()
{
	if(isEmpty())
	{
		cerr<<"the queue is empty"<<endl;
	}
	else
	{
		for (int i = 0; i < rear; ++i) {
			cout<<arr[i]<<"->";
		}
	}
}
int Queue::count()
{
	return this->rear+1;
}





Queue::~Queue() {
	// TODO Auto-generated destructor stub
}

