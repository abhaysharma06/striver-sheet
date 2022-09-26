// TC - O(nLogn) + O(2N) SC - O(N)
// solved by extra space (Brute force approach)
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

void mergedTwoSortedArray(int arr1[], int arr2[], int n, int m)
{
  int a[n + m];
  int k = 0;

  for (int i = 0; i < n; i++)
  {
    a[k++] = arr1[i];
  }
  for (int i = 0; i < m; i++)
  {
    a[k++] = arr2[i];
  }
  sort(a, a + m + n);
  k = 0;
  for (int i = 0; i < n; i++)
  {
    arr1[i] = a[k++];
  }
  for (int i = 0; i < m; i++)
  {
    arr2[i] = a[k++];
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