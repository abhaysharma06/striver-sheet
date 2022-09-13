// reverse array
#include <iostream>
using namespace std;

void rev(int i, int arr[], int num)
{

  if (i >= num / 2)
    return;
  swap(arr[i], arr[num - i - 1]);
  rev(i + 1, arr, num);
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int k = 0; k < n; k++)
  {
    cin >> arr[k];
  }
  rev(0, arr, n);
  for (int k = 0; k < n; k++)
  {
    cout << arr[k] << " ";
  }
  return 0;
}