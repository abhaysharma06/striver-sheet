// TC - O(nlogn) SC - O(1) brute force
// sorting
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

int duplicateNumber(vector<int> &vec)
{
  sort(vec.begin(), vec.end());
  int sz = vec.size();
  for (int i = 0; i < sz - 1; i++)
  {
    if (vec[i] == vec[i + 1])
    {
      return vec[i];
    }
  }
}

int main()
{

  vector<int> v;
  v = {1, 3, 3, 4, 2, 6};
  cout << " Duplicate number is " << duplicateNumber(v) << endl;
  return 0;
}