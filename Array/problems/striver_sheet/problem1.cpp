// Q1 reverse the string

#include <iostream>
using namespace std;

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;

    int start = 0, last = s.length() - 1;
    while (start < last)
    {
      swap(s[start], s[last]);
      last--;
      start++;
    }
    cout << s;
  }
  return 0;
}