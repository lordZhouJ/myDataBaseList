#include "myDataBase.h"

/*
 *在构造函数中对变量进行初始化
 * */
myDataBase::myDataBase()
{	
	pNode = NULL;	
}

//析构函数的使用
myDataBase::~myDataBase()
{       
	deleteMyList(pNode);
}


//删除链表每一个节点
void myDataBase::deleteMyList(node * MyNode)
{
	node * tempNode = MyNode;
	delete MyNode;

	if(tempNode->Next)
	{
		deleteMyList(tempNode->Next);
	}	
	
	return ;	
}	

void myDataBase::createDataBaseList()
{
	pNode = new node;
	
	pNode->data.key=0;
	pNode->Next = NULL;

	return ;
}

/*
 *对链表插入的学习和使用
 *对c++的string的学习使用，目前对他只是简单的学习
 * */
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

/*
 *是希望通过之中方式的调用，避免类没有创建而使用，造成的指针越界的困扰
 * */
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
