#include <iostream>
using namespace std;

int sum_rec(int arr[], int size, int ind, int sum)
{
  if (size == ind)
    return sum;
  sum = sum + arr[ind];
  sum_rec(arr, size, ind + 1, sum);
}

int main()
{
  int n;
  cin >> n;
  int arr[100];
  int s = 0;
  for (int k = 0; k < n; k++)
    cin >> arr[k];

  cout << sum_rec(arr, n, 0, s);
  return 0;
}