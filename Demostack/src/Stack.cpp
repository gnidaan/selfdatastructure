/*
 * Stack.cpp
 *
 *  Created on: 12-Apr-2020
 *      Author: sunbeam
 */

#include "Stack.h"
#include <iostream>
using namespace std;



Stack::Stack() {
	this->top=-1;
	for(int i=0;i<5;i++)
	{
		arr[i]=0;
	}
}
Stack::Stack(int size)
{
	this->arr[size];
	for(int i=0;i<5;i++)
		{
			arr[i]=0;
		}
}


bool Stack::isFull()
{
	if(this->top==4)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int Stack::isEmpty()
{
	if(this->top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void Stack::push(int value)
{
	if(isFull())
	{

		throw 1;
	}
	else
	{
		top++;
		arr[top]=value;
	}
}

int Stack::pop()
{
	int value;
	if(isEmpty())
		{

			throw 1.1f;
		}
		else
		{
			value=arr[top];
			arr[top]=0;
			top--;
			return value;
		}
}

int Stack::count()
{
	return top+1;
}

int Stack::peek(int pos)
{
	if(pos>4)
	{

		throw 'a';
	}

	else
	{
		if(pos!=0){
		return arr[pos];
		}
		else
		{
			throw 2.2;
		}
	}
}

void Stack::change(int pos,int val)
{
	if(pos>4)
		{
			throw 'b';
		}

		else
		{
			if(isEmpty())
			{
				throw 1.1f;
			}
			else if(pos>top)
			{
				cerr<<"the position is already popped"<<endl;
			}
			else{
			arr[pos]=val;
		}
		}
}

void Stack::display()
{
	if(isEmpty())
	{
		throw 1.1f;
	}
	else
	{
		for (int i = top; i >= 0; --i) {
			cout<<arr[i]<<"->";
		}
	}
}

Stack::~Stack() {
	// TODO Auto-generated destructor stub
}

