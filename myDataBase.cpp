#include "myDataBase.h"

myDataBase::myDataBase()
{	
	pNode = NULL;	
}

void myDataBase::createDataBaseList()
{
	pNode = new node;
	
	pNode->data.key=0;
	pNode->Next = NULL;

	return ;
}


bool myDataBase::InsertListDataTail(int data, std::string & name)
{
	node * subNode = new node;
	if(subNode == NULL)
	{
		cout<< "subNode create error!"<<endl;

		return false;
	}	

	subNode->data.key = data;
	subNode->data.name = name;
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
			cout<<"key: "<<tempNode->data.key<<"\t name :"<<tempNode->data.name<<endl;
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
