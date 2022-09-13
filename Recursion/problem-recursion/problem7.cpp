// multiple recursion call fibbo series
#include <iostream>
using namespace std;

int fibbo(int num)
{
  if (num <= 1)
    return num;
  return fibbo(num - 1) + fibbo(num - 2);
}

int main()
{
  int n;
  cin >> n;
  cout << fibbo(n);
}