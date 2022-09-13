#include <iostream>
using namespace std;

int main()
{

  int n;
  cin >> n;
  int cnt0 = 0, cnt1 = 0, cnt2 = 0;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 0)
      cnt0++;
    if (arr[i] == 1)
      cnt1++;
    if (arr[i] == 2)
      cnt2++;
  }

  for (int i = 0; i < cnt0; i++)
    arr[i] = 0;
  for (int i = cnt0; i < cnt0 + cnt1; i++)
    arr[i] = 1;
  for (int i = cnt0 + cnt1; i < n; i++)
    arr[i] = 2;
  for (int i = 0; i < n; i++)
    cout << arr[i];
  return 0;
}