// using the gap algorithm
// TC - O(nLogn)+O(N) SC - O(1)
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

void mergedTwoSortedArray(int arr1[], int arr2[], int n, int m)
{
  int gap = ceil((float)(n + m) / 2);
  while (gap > 0)
  {
    int i = 0;
    int j = gap;
    while (j < (n + m))
    {
      if (j < n && arr1[i] > arr2[j])
        swap(arr1[i], arr2[j]);
      else if (j >= n && i < n && arr1[i] > arr2[j - n])
        swap(arr1[i], arr2[j - n]);
      else if (j >= n && i >= n && arr2[i - n] > arr2[j - n])
        swap(arr2[i - n], arr2[j - n]);
      j++;
      i++;
    }
    if (gap == 1)
      gap = 0;
    else
      gap = ceil((float)gap / 2);
  }
}

int main()
{
  int arr1[] = {1, 4, 7, 8, 10};
  int arr2[] = {2, 3, 9};
  cout << "Before merge:" << endl;
  for (int i = 0; i < 5; i++)
  {
    cout << arr1[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < 3; i++)
  {
    cout << arr2[i] << " ";
  }
  cout << endl;
  mergedTwoSortedArray(arr1, arr2, 5, 3);
  cout << "After merge:" << endl;
  for (int i = 0; i < 5; i++)
  {
    cout << arr1[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < 3; i++)
  {
    cout << arr2[i] << " ";
  }
  return 0;
}