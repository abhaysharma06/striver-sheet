// TC O(N) SC O(N)
// using frequency array
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

vector<int> repeatMissingNumber(vector<int> &v)
{
  int n = v.size();
  int sz = v.size() + 1;
  vector<int> freq(sz, 0);
  vector<int> ans;

  for (int i = 0; i < n; i++)
  {
    freq[v[i]]++;
  }
  for (int i = 1; i < sz; i++)
  {
    if (freq[i] == 0 || freq[i] > 1)
      ans.push_back(i);
  }

  for (auto it : ans)
    cout << it << " ";
}

int main()
{
  vector<int> vec;
  vec = {1, 2, 1, 3, 4, 6};
  repeatMissingNumber(vec);
  return 0;
}