// main-1-2.cpp

#include <iostream>
#include <string>

#include "Person.h"



int main()
	{
		int n = 4;
		PersonList personList = createPersonList(n);
		std::cout << "Person list - numPersons: " << personList.numPersons << std::endl;
  
		for (int i = 0; i < n; ++i)
			{
				std::cout << "Person: " << i+1 << "Name: " << personList.persons[i].name << ", Age: " << personList.persons[i].age << std::endl;
			}
			
	delete[] personList.persons;
  
	return 0;
  
}