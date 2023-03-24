// main-1-2.cpp

#include <iostream>
#include <string>

#include "Person.h"



int main()
	{
		int n = 4;
		PersonList pList = createPersonList(n);
		std::cout << "Person list - numPeople: " << pList.numPeople << std::endl;
  
		for (int i = 0; i < n; ++i)
			{
				std::cout << "Person: " << i+1 << "Name: " << pList.people[i].name << ", Age: " << pList.people[i].age << std::endl;
			}
			
	delete[] pList.people;
  
	return 0;
  
}
