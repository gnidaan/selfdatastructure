//============================================================================
// Name        : Demostack.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Stack.h"

int menu()
{
	int ch;
	cout<<"\n0.Exit"<<endl;
	cout<<"1.Push"<<endl;
	cout<<"2.Pop"<<endl;
	cout<<"3.Peek"<<endl;
	cout<<"4.Change"<<endl;
	cout<<"5.Count"<<endl;
	cout<<"6.Display"<<endl;
	cout<<"Enter the choice"<<endl;
	cin>>ch;
	return ch;
}
int main() {

	int choice;
	Stack s;
	int value;
	A:
	try
	{
	while((choice=menu())!=0)
	{
		switch(choice)
		{
			case 1:
			{
				cout<<"enter the value to push"<<endl;
				cin>>value;
				s.push(value);
			}break;
			case 2:
			{
				cout<<"the pop value is ="<<s.pop()<<endl;
			}break;
			case 3:
			{
				int pos;
				cout<<"enter the position for getting element"<<endl;
				cin>>pos;
				cout<<"the peek element is="<<s.peek(pos)<<endl;
			}break;
			case 4:
			{
				int pos,val;
				cout<<"enter the position and value of that postion to change"<<endl;
				cin>>pos>>val;
				s.change(pos,val);
				cout<<"operation is successful"<<endl;
			}break;
			case 5:
			{
				cout<<"the number of element in stack is="<<s.count()<<endl;
			}break;
			case 6:
			{
				s.display();
			}break;
		}
	}
}
	catch(int e)
	{
		cerr<<"The stack is Full"<<endl;
		goto A;
	}
	catch(float e)
		{
			cerr<<"The stack is Empty"<<endl;
			goto A;
		}
	catch(char a)
	{
		cerr<<"out of range"<<endl;
		goto A;
	}
	catch(double d)
	{
		cerr<<"there is no element"<<endl;
		goto A;
	}
	return 0;
}
