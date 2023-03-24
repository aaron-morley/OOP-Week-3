// function-1-2.cpp

#include "Person.h"

PersonList createPersonList(int n)
	{
		PersonList personList;
		personList.numPersons = n;
		personList.persons = new Person[n];
		
		for (int i = 0; i < n; ++i)
			{
				personList.persons[i].name = "John Doe";
				personList.persons[i].age = 1;
			}
			
		return personList;
		
}