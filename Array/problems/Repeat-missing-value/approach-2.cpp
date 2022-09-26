// TC O(N) SC - O(1)
// Using maths formula

// TC O(N) SC O(N)
// using frequency array
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

vector<int> repeatingMissingNumber(vector<int> &v)
{
  vector<int> ans;
  long long int len = v.size();
  long long int S = (len * (len + 1)) / 2;
  long long int P = (len * (len + 1) * (2 * len + 1)) / 6;
  long long int missingNumber = 0, repeatingNumber = 0;

  for (int i = 0; i < len; i++)
  {
    S -= (long long int)v[i];
    P -= (long long int)v[i] * (long long int)v[i];
  }

  missingNumber = (S + P / S) / 2;
  repeatingNumber = missingNumber - S;
  ans.push_back(repeatingNumber);
  ans.push_back(missingNumber);

  for (auto it : ans)
    cout << it << " ";
}

int main()
{
  vector<int> vec;
  vec = {1, 2, 1, 3, 4, 6};
  repeatingMissingNumber(vec);
  return 0;
}