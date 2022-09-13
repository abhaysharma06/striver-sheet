// reverse an array using recursion
#include <iostream>
using namespace std;

void reverse(int a[], int l, int r)
{
  if (l >= r)
    return;
  swap(a[l], a[r - 1]);
  reverse(a, l + 1, r - 1);
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  reverse(arr, 0, n);
  for (int i = 0; i < n; i++)
    cout << arr[i];
}