// main-1-1.cpp

#include <iostream>
#include <string>

#include "Person.h"




int main()
	{
		int n = 4;
		Person* array = createPersonArray(n);
		
		for (int i = 1; i <= n; ++i)
			{
				std::cout << "Person: " << i << "Name: " << array[i].name << ", Age: " << array[i].age << std::endl;
			}
			
		delete[] array;
		
		return 0;
		
}