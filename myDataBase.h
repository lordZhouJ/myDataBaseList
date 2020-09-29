#ifndef _MYDATABASE_H
#define _MYDATABASE_H			

#include <cstddef>//NULL 需要使用的头文件
#include <iostream>


/*存储连表的class*/
class node{
	public:
		//数据
	     	int data;
		//指向下一个数据区的指针	
	     	struct node *Next;
 };

//Data content
class dataContent{
	int key;
		
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
		bool InsertListDataTail(int data); 
		//获取类的句柄
		static myDataBase& GetInstance();

	private:
		//定义了头节点
		node *pNode;
};

#endif