// What is the 10001st prime number?

#include <iostream>
#include <cmath>

bool isPrime(unsigned long num)
{
  for (int j = 2; j <= num / 2; j++)
  {
    if ((num % j) == 0)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  unsigned long n = 2;
  unsigned long count = 0;
  while(count < 10001)
  {
    if (isPrime(n++))
      count++;
  }

  std::cout << "The 10001th prime is ";
  std::cout << n-1 << std::endl;
  return 0;
}
