// move all the negative elements to start of array
// partioning approach
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    int i = 0;
    int p = -1;
    for (int j = 0; j < n; j++)
    {
      if (arr[j] < i)
      {
        p++;
        swap(arr[p], arr[j]);
      }
    }
    for (int i = 0; i < n; i++)
      cout << arr[i] << " ";
  }
}