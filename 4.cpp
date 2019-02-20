
// Brute force method to find the largest palindrome made
// from the product of two 3-digit numbers.

#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str)
{
  int left = 0;
  int right = str.length() - 1;
  while(right > left)
  {
    if(str[left++] != str[right--])
    {
      return false;
    }
  }

  return true;
}

int main()
{
  unsigned int result = 0;
  for (int i = 999; i >= 100; --i)
  {
    for (int j = 999; j >= 100; --j)
    {
      unsigned int prod = i*j;
      if (isPalindrome(to_string(prod)))
	if (prod > result)
	  result = prod;
    }
  }
  cout << "the largest palindrome made from the product "
    "of two 3-digit numbers is " <<result << endl;
  return 0;
}
