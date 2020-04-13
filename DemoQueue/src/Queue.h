/*
 * Queue.h
 *
 *  Created on: 13-Apr-2020
 *      Author: sunbeam
 */

#ifndef QUEUE_H_
#define QUEUE_H_

class Queue {
private:
	int front,rear;
	int arr[5];
public:
	Queue();
	Queue(int,int);
	void enqueue(int);
	int dequeue();
	int count();
	int isEmpty();
	int isFull();
	void display();

	virtual ~Queue();
};

#endif /* QUEUE_H_ */
