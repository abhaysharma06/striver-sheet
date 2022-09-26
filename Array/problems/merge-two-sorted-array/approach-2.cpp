// solved using without extra space
// TC - O(n*m) SC- O(1)
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

void mergedTwoSortedArray(int arr1[], int arr2[], int n, int m)
{
  int i, k;
  for (i = 0; i < n; i++)
  {
    // check from first array for arrange item in a order
    if (arr1[i] > arr2[0])
    {
      int tmp = arr1[i];
      arr1[i] = arr2[0];
      arr2[0] = tmp;
    }

    int first = arr2[0];
    // sort the second array again to maintain the sorting
    for (k = 1; k < m && arr2[k] < first; k++)
    {
      arr2[k - 1] = arr2[k];
    }
    arr2[k - 1] = first;
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