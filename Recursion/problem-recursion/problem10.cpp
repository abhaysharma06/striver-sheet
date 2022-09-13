// printing subSequance whose sum is k
#include <iostream>
#include <vector>
using namespace std;

void sumOfSub(int i, vector<int> &v, int s, int sum, int arr[], int n)
{
  if (i == n)
  {
    if (s == sum)
    {
      for (auto it : v)
        cout << it << " ";
      cout << endl;
    }
    return;
  }
  v.push_back(arr[i]);
  s += arr[i];
  sumOfSub(i + 1, v, s, sum, arr, n);
  s -= arr[i];
  v.pop_back();
  sumOfSub(i + 1, v, s, sum, arr, n);
}

int main()
{

  int arr[] = {3, 1, 2};
  int k = 3;
  int n = 3;
  vector<int> vec;
  sumOfSub(0, vec, 0, k, arr, n);
  return 0;
}