// Sum of all the multiples of 3 or 5 below 1000

#include <iostream>

int main()
{
  int lim = 1000;
  int sum = 0;
  for (int i = 1; i < lim; ++i)
  {
    if (i%3 == 0 || i%5 == 0)
      sum += i;
  }

  std::cout << "The sum is: " << sum << std::endl;
  
  return 0;
}
