// formula for sum of squares is n*(n+1)*(2n+1)/6

// square of sums: the partial sum of first and last entry
// equals the partial sum of second and last but one entry.
// Hence, the final sum would the partial sum of first and
// last entry multipled by 50 for n = 100.
#include <iostream>
#include <cmath>

int main()
{
  int n = 100;
  unsigned long sumOfSquares = n*(n+1)*(2*n+1)/6;
  int partialSum = 101*50;
  unsigned long squareOfSum = pow(partialSum,2);
  std::cout << "The result is " << squareOfSum-sumOfSquares << std::endl;
  return 0;
}
