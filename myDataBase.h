#ifndef _MYDATABASE_H
#define _MYDATABASE_H			

#include <cstddef>//NULL 需要使用的头文件
#include <iostream>
#include <strings.h>
using namespace std;

//Data content
class dataContent{
	public:
	       	int key;
        	string name;
};

/*存储连表的class*/
class node{
	public:
		//数据
	     	dataContent data ;
		//int data;
		//指向下一个数据区的指针	
	     	struct node *Next;
 };


/*对连表操作的class*/
class  myDataBase{
	public:
		//构造函数
		myDataBase();
		//析构函数
		~myDataBase();
		//创建链表
		void createDataBaseList();
		//show连表里面的数据
		void ShowDataBaseList();
		//数据的尾部插入操作
		bool InsertListDataTail(int data,std::string & name); 
		//按照key值大小，顺序插入
		bool InsertListDataOrder(int data, std::string &name, bool bigtosmall);
		//获取类的句柄
		static myDataBase& GetInstance();
		// 删除链表
		void deleteMyList(node * temMyNode);
		
	private:
		//定义了头节点
		node *pNode;
};

#endif
