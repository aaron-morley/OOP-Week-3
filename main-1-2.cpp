#include <iostream>
#include "Person.h"

int main() {
  int n = 3;
  PersonList pl = createPersonList(n);
  std::cout << "Person list - numPeople: " << pl.numPeople << std::endl;
  for (int i = 0; i < n; ++i) {
    std::cout << "Person " << i+1 << " - Name: " << pl.people[i].name << ", Age: " << pl.people[i].age << std::endl;
  }
  delete[] pl.people;
  return 0;
}

