#include "myDataBase.h"

int  main()
{
	int i =0;	
	myDataBase::GetInstance().createDataBaseList();
	for(i=0;i<3 ; ++i)
	{
		string str;
		cin >> str;	
		//myDataBase::GetInstance().InsertListDataTail(i,str);
		myDataBase::GetInstance().InsertListDataOrder(i, str, true);

	}	
	myDataBase::GetInstance().ShowDataBaseList();
	
	return 0;
}	
