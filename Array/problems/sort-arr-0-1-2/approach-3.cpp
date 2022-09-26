// TC - O(N) SC-O(1)
// using 3 pointer approach
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

void sortArray(vector<int> &v)
{
  int mid = 0;
  int low = 0;
  int high = v.size() - 1;

  while (mid <= high)
  {
    switch (v[mid])
    {
    case 0:
      swap(v[low++], v[mid++]);
      break;
    case 1:
      mid++;
      break;
    case 2:
      swap(v[mid], v[high--]);
      break;
    }
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