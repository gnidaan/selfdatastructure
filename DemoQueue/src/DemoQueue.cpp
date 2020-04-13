//============================================================================
// Name        : DemoQueue.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include"Queue.h"

int menu()
{
	int ch;
	cout<<"0.Exit"<<endl;
	cout<<"1.Enqueue"<<endl;
	cout<<"2.Dequeue"<<endl;
	cout<<"3.Count"<<endl;
	cout<<"4.Display"<<endl;
	cout<<"Enter your choice"<<endl;
	cin>>ch;
	return ch;

}
int main() {
	Queue q;
	int choice;
	int val;
	while((choice=menu())!=0)
	{
		switch(choice)
		{
		case 1:
			{
			cout<<"enter the value to insert in queue"<<endl;
			cin>>val;
			q.enqueue(val);
			}break;
		case 2:
		{
			val=q.dequeue();
			cout<<"the value is dequeue is="<<val<<endl;

		}break;
		case 3:
		{
			cout<<"the no of present elements in queue is="<<q.count()<<endl;
		}break;
		case 4:
		{
			q.display();
		}break;

		}
	}

	return 0;
}
