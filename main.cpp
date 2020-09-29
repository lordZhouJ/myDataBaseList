#include <stdio.h>
#include<iostream>
#include "myDataBase.h"

using namespace std ;

int  main()
{
	int i =0;
	//myDataBase *temDataBase = new myDataBase;	
	myDataBase::GetInstance().createDataBaseList();
	for(i=0;i<10 ; ++i)
	{	
		 myDataBase::GetInstance().InsertListDataTail(i);
	}	
	myDataBase::GetInstance().ShowDataBaseList();
	
	return 0;
}	
