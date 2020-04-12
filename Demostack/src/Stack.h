/*
 * Stack.h
 *
 *  Created on: 12-Apr-2020
 *      Author: sunbeam
 */

#ifndef STACK_H_
#define STACK_H_

class Stack {
private:
	int top;
	int arr[5];
public:
	Stack();
	Stack(int);
	bool isFull();
	int isEmpty();
	void push(int);
	int pop();
	void display();
	int count();
	void change(int,int);
	int peek(int);
	virtual ~Stack();
};

#endif /* STACK_H_ */
