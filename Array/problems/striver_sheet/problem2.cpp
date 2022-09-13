#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

//************this apporach takes O(nlogn + n) ********************//

// int main()
// {

//   int t;
//   cin >> t;
//   while (t--)
//   {
//     int num;
//     cin >> num;
//     int arr[num];
//     for (int i = 0; i < num; i++)
//       cin >> arr[i];
//     int k;
//     cin >> k;
//     sort(arr, arr + num);
//     cout << arr[k - 1];
//   }
// }

// Method 2 brute force apporach takes o(n^2) as sorting done by bubble sort.

// Method 3 O(n)
// priority queue

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int num;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
      cin >> arr[i];
    int k;
    cin >> k;

    // priority queue

    priority_queue<int, vector<int>, greater<int>> p;

    for (int i = 0; i < num; i++)
    {
      p.push(arr[i]);
    }

    int ans, i = 1;
    while (!p.empty())
    {
      if (i == k)
      {
        ans = p.top();
        break;
      }
      i++;
      p.pop();
    }
    cout << ans;
  }
}
