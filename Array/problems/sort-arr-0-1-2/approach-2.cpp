// TC - O(N)+O(N) SC - O(1);
// using count of each number
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

void sortArray(vector<int> &v)
{
  int sz = v.size();
  int cnt0 = 0, cnt1 = 0, cnt2 = 0;
  for (int i = 0; i < sz; i++)
  {
    if (v[i] == 0)
      cnt0++;
    else if (v[i] == 1)
      cnt1++;
    else
      cnt2++;
  }
  for (int i = 0; i < cnt0; i++)
    v[i] = 0;

  for (int i = cnt0; i < cnt0 + cnt1; i++)
    v[i] = 1;
  for (int i = cnt0 + cnt1; i < sz; i++)
  {
    v[i] = 2;
  }
  for (auto it : v)
    cout << it << " ";
}

int main()
{
  vector<int> vec;
  vec = {0, 2, 1, 1, 0, 2, 1, 1, 0};
  sortArray(vec);
  return 0;
}