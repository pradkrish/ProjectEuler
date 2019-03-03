// calculate LCM of an array [1...20] iteratively
// through GCD

#include <iostream>

unsigned long gcd(unsigned long a, unsigned long b) 
{
  if (a == 0) 
    return b;
  return gcd(b % a, a); 
}

unsigned long lcm(unsigned long a, int b)
{
  return (a*b)/gcd(a,b);
}

int main()
{
  int i = 1;
  unsigned long ans = 1;

  while( i<=20 )
    ans = lcm(ans,i++);

  std::cout << "The smallest multiple of the array [1..20] is ";
  std::cout << ans << std::endl;
  return 0;
}
