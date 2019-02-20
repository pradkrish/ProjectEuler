#include <iostream>
#include <vector>

#define LIMIT 4e6

using namespace std;

// recursive function to calculate fibonacci sequence
void Fibonacci(vector<int>& seq)
{
  auto temp_sum = seq.at(seq.size()-1)+seq.at(seq.size()-2);
  if (temp_sum < LIMIT)
  {
    seq.push_back(temp_sum);
    Fibonacci(seq);
  }
  else
    return;
}

int main()
{
  vector<int> seq;

  // Initial values
  seq.push_back(1);
  seq.push_back(2);

  Fibonacci(seq);

  cout << "The fibonacci sequence is :" << endl;
  for (auto it=seq.begin(); it!=seq.end(); ++it)
    cout<<*it<<',';

  cout << endl;
  
  int sum = 0;
  cout << "Sum of even valued terms is :" << endl;
  for (auto it = seq.begin(); it != seq.end(); ++it)
    if (*it%2 == 0)
      sum += *it;

  cout<<sum<<endl;

  return 0;
}
