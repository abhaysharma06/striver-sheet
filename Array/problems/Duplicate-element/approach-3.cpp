// TC - O(N) SC - O (1)
//  Linked List cycle method
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

int duplicateNumber(vector<int> &vec)
{
  int slow = vec[0];
  int fast = vec[0];
  do
  {
    slow = vec[slow];
    fast = vec[vec[fast]];
  } while (slow != fast);
  fast = vec[0];
  while (slow != fast)
  {
    slow = vec[slow];
    fast = vec[fast];
  }
  return slow;
}

int main()
{

  vector<int> v;
  v = {1, 3, 3, 4, 2, 6};
  cout << " Duplicate number is " << duplicateNumber(v) << endl;
  return 0;
}