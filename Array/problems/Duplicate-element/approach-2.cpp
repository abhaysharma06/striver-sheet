// TC - O(N) SC- O(N)
// Using frequency array
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

int duplicateNumber(vector<int> &vec)
{

  int sz = vec.size();
  int freq[sz + 1] = {0};

  for (int i = 0; i < sz; i++)
  {
    if (freq[vec[i]] == 0)
      freq[vec[i]] += 1;
    else
      return vec[i];
  }
}

int main()
{

  vector<int> v;
  v = {1, 3, 3, 4, 2, 6};
  cout << " Duplicate number is " << duplicateNumber(v) << endl;
  return 0;
}