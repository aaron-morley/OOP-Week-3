// function-1-1.cpp

#include "Person.h"

Person* createPersonArray(int n) 
	{
		Person* personList = new Person[n];
		
		for (int i = 0; i < n; i++)
			{
				personList[i].name = "John Doe";
				personList[i].age = 0;
			}
    
	return personList;
	
}