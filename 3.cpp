// What is the largest prime factor of the number 600851475143 ?

#include <iostream>
#include <vector>
#include <math.h>

#define NUMBER 600851475143
using namespace std;


int findPrimes(vector<int>& seq, long n, int p)
{
  if (p != -1)
    seq.push_back(p);
  
  if (n == 1)
    return 1;
  else
  {
    for (int i = 2; i <= sqrt(NUMBER); ++i)
    {
      if (n%i == 0)
	n = findPrimes(seq, n/i, i);
      else
	continue;
    }
  }
}

int main()
{
  vector<int> seq;
  findPrimes(seq, NUMBER, -1);

  cout << "The prime factors of " << NUMBER << " are ";
  for (auto it = seq.begin(); it != seq.end(); ++it)
    cout << *it << ",";
  cout << endl;

  cout << "The largest prime number is " << seq.back() << endl;
  return 0;
}
