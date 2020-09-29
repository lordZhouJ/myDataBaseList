#include <stdio.h>
#include<iostream>
#include "myDataBase.h"

//using namespace std ;

int  main()
{
	int i =0;
	string str = "me";
	//myDataBase *temDataBase = new myDataBase;	
	myDataBase::GetInstance().createDataBaseList();
	for(i=0;i<10 ; ++i)
	{
		//string str = "me";	
		 myDataBase::GetInstance().InsertListDataTail(i,str);
	}	
	myDataBase::GetInstance().ShowDataBaseList();
	
	return 0;
}	
