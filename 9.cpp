// Special Pythagorean triplet

#include <iostream>

long generateTriplets(int& a, int& b, int& c, int limit) 
{ 
  int m = 2; 
  
  while (c < limit)
    { 
      for (int n = 1; n < m; ++n)
	{ 
	  a = m * m - n * n; 
	  b = 2 * m * n; 
	  c = m * m + n * n; 
  
	  if (a+b+c == limit)
	    {
	      return a*b*c;
	    }
	} 
      ++m; 
    }
} 

int main() 
{
  int a = 0, b = 0, c = 0;
  int limit = 1000; 
  long prod = generateTriplets(a,b,c,limit);
  std::cout << "The product of the triplet for which a+b+c=1000 is ";
  std::cout << prod << std::endl;
  return 0; 
} 
