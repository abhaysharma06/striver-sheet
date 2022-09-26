// TC - O(nlogn) SC- O(1)
// using sort an array (brute force approach)
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

void sortArray(vector<int> &v)
{
  sort(v.begin(), v.end());
  for (auto it : v)
  {
    cout << it << " ";
  }
}

int main()
{
  vector<int> vec;
  vec = {0, 2, 1, 1, 0, 2, 1, 1, 0};
  sortArray(vec);
  return 0;
}