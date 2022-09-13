// print the subSequance

#include <iostream>
#include <vector>
using namespace std;

void subSequance(int ind, vector<int> &v, int arr[], int num)
{
  if (ind == num)
  {
    for (auto it : v)
    {
      cout << it << " ";
    }
    cout << endl;
    return;
  }
  // this is used to take that value
  v.push_back(arr[ind]);
  subSequance(ind + 1, v, arr, num);
  // this is used to not take that value
  v.pop_back();
  subSequance(ind + 1, v, arr, num);
}

int main()
{
  int arr[] = {3, 1, 2};
  int n = 3;
  vector<int> ds;
  subSequance(0, ds, arr, n);
}