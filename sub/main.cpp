// Using a lambda expression from inside a member function (see Finder.cpp)
#include <iostream>
#include "helper/Optimum.h"
#include "helper/Finder.h"

int main()
{
  std::vector<int> numbers{ 91, 18, 92, 22, 13, 43 };

  int number_to_search_for {};
  std::cout << "Please enter a number: ";
  std::cin >> number_to_search_for;

  Finder finder;
  finder.setNumberToSearchFor(number_to_search_for);
  std::cout << "The number nearest to " << finder.getNumberToSearchFor() << " is "
            << *finder.findNearest(numbers) << std::endl;
}
