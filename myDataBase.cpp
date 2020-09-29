#include "myDataBase.h"

using namespace std;

myDataBase::myDataBase()
{	
	pNode = NULL;	
}

void myDataBase::createDataBaseList()
{
	pNode = new node;
	
	pNode->data=0;
	pNode->Next = NULL;

	return ;
}


bool myDataBase::InsertListDataTail(int data)
{
	node * subNode = new node;
	if(subNode == NULL)
	{
		cout<< "subNode create error!"<<endl;

		return false;
	}	

	subNode->data = data;
	subNode->Next = NULL;

	node *temNode = pNode;

	while(temNode->Next != NULL)
	{
		temNode = temNode->Next;
	}

	temNode->Next = subNode;

	return true;
}


void myDataBase::ShowDataBaseList()
{
	node * tempNode = pNode;
	if(tempNode == NULL)
	{
		return ;
	}	

	do{
		if( (tempNode = tempNode->Next ) == NULL )
		{
			break;
		}
		else
		{	
			cout<<"listData: "<<tempNode->data<<endl;
		}
	}while(tempNode->Next);

	return ;
}


static  myDataBase *m_instance = NULL;

myDataBase &myDataBase::GetInstance()
{
	if(m_instance == NULL)
	{
		m_instance = new myDataBase;
		if(m_instance == NULL)
		{
			cout<< "create myDataBase class err!"<<endl;
			exit(0);
		}	
	}	
	return *m_instance;
}
