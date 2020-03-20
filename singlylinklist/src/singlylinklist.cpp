//============================================================================
// Name        : singlylinklist.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class node
{
public:
	int key,data;
	node* next;
public:
	node()
	{
		this->key=0;
		this->data=0;
		this->next=NULL;
	}
	node(int k,int d)
	{
		this->key=k;
		this->data=d;
	}
};

class singlylist
{
public:
	node* head;
	singlylist()
	{
		this->head=NULL;
	}
	singlylist(node* n)
	{
		this->head=n;
	}

	node* isnodeexist(int k)
	{
		node *tmp=NULL;
		node *trav=head;
		while(trav!=NULL)
		{
			if(trav->key==k)
			{
				tmp=trav;
			}
			trav=trav->next;
		}
		return tmp;
	}
	void appendnode(node *n)
	{
		if(isnodeexist(n->key)!=NULL)
		{
			cout<<"node exist with key value ="<<n->key<<endl;
		}
		else
		{

			if(head==NULL)
			{
				head=n;
				cout<<"node appended successfully"<<endl;
			}
			else
			{
				node *trav=head;
				while(trav->next!=NULL)
				{
					trav=trav->next;
				}
				trav->next=n;
				cout<<"node appended successfully"<<endl;
			}
		}
	}

	void prependnode(node *n)
	{
		if(isnodeexist(n->key)!=NULL)
		{
			cout<<"the key exist ="<<n->key<<endl;
		}
		else
		{
			n->next=head;
			head=n;
			cout<<"prepend successfully"<<endl;
		}
	}

	void insertafternode(int k,node *n)
	{
		node *tmp;
		tmp=isnodeexist(k);
		if(tmp==NULL)
		{
			cout<<"no node exist with key value"<<endl;
		}
		else
		{
			if(isnodeexist(n->key)!=NULL)
			{
				cout<<"duplicate key exist"<<endl;

			}
			else
			{
				n->next=tmp->next;
				tmp->next=n;
				cout<<"node inserted successfully"<<endl;
			}
		}
	}

	void deletenode(int k)
	{
		if(head==NULL)
		{
			cout<<"Singly list is already Empty,cant delete"<<endl;
		}
		else if(head!=NULL)
		{
			if(head->key==k)
			{
				head=head->next;
				cout<<"node unlinked with key value: "<<k<<endl;
			}
			else
			{
				node *tmp=NULL;
				node *prev=head;
				node *currentptr=head->next;
				while(currentptr!=NULL)
				{
					if(currentptr->key==k)
					{
						tmp=currentptr;
						currentptr=NULL;
					}
					else
					{
						prev=prev->next;
						currentptr=currentptr->next;
					}
				}
				if(tmp!=NULL)
				{
					prev->next=tmp->next;
					cout<<"node unlinked with key value: "<<k<<endl;
				}
				else
				{
					cout<<"node doesnot exist with key value: "<<k<<endl;
				}
			}
		}
	}

	void updatenode(int k,int d)
	{
		node *ptr=isnodeexist(k);
		if(ptr!=NULL)
		{
			ptr->data=d;
			cout<<"node data updated successfully"<<endl;
		}
		else
		{
			cout<<"no node exist"<<endl;
		}
	}

	void printlist()
	{
		if(head==NULL)
		{
			cout<<"list is empty"<<endl;
		}
		else
		{
			node *trav=head;
			while(trav!=NULL)
			{
				cout<<"("<<trav->key<<","<<trav->data<<")"<<"->";
				trav=trav->next;
			}
		}
	}

};

int menu()
{
	int ch;
	cout<<"\n0.EXIT"<<endl;
	cout<<"1.APPEND"<<endl;
	cout<<"2.PREPEND"<<endl;
	cout<<"3.INSERT AT SPECIFIC KEY"<<endl;
	cout<<"4.DELETE AT SPECIFIC KEY"<<endl;
	cout<<"5.UPDATE DATA AT SPECIFIC KEY"<<endl;
	cout<<"6.PRINT LIST"<<endl;
	cout<<"ENTER THE CHOICE"<<endl;
	cin>>ch;
	return ch;
}

int main() {

	singlylist s;

	int ch;
	int key1,data;
	while((ch=menu())!=0)
	{
		node *n1=new node;
		switch(ch)
		{
		case 1:
			{
			cout<<"APPEND NODE\n ENTER THE KEY AND DATA "<<endl;
			cin>>key1;
			cin>>data;
			n1->key=key1;
			n1->data=data;
			s.appendnode(n1);
			}break;
		case 2:
			{
				cout<<"PREPEND  NODE\n ENTER THE KEY AND DATA "<<endl;
				cin>>key1;
				cin>>data;
				n1->key=key1;
				n1->data=data;
				s.prependnode(n1);
			}break;
		case 3:
			{
				int k;
				cout<<"ENTER KEY FOR EXISTING"<<endl;
				cin>>k;
				cout<<"INSERT NODE AT SPECIFIC \n ENTER THE KEY AND DATA "<<endl;
				cin>>key1;
				cin>>data;
				n1->key=key1;
				n1->data=data;
				s.insertafternode(k,n1);
			}break;
		case 4:
			{
				int k;
				cout<<"DELETE NODE\n ENTER THE KEY OF THE NODE "<<endl;
				cin>>k;
				s.deletenode(k);
			}break;
		case 5:
			{
				cout<<"UPDATE NODE\n ENTER THE KEY AND DATA "<<endl;
				cin>>key1;
				cin>>data;
				s.updatenode(key1,data);

			}break;
		case 6:
			{
			s.printlist();
			}break;

		}
	}

	return 0;
}
