// main-1-2.cpp

#include <iostream>
#include <string>

#include "Person.h"



int main()
	{
		int n = 4;
		PersonList pList = createPersonList(n);
		std::cout << "Person list - numPersons: " << pList.numPersons << std::endl;
  
		for (int i = 0; i < n; ++i)
			{
				std::cout << "Person: " << i+1 << "Name: " << pList.persons[i].name << ", Age: " << pList.persons[i].age << std::endl;
			}
			
	delete[] pList.persons;
  
	return 0;
  
}