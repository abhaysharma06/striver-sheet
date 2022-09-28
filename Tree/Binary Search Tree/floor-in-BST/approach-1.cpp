#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <math.h>
using namespace std;
struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int findCeil(TreeNode *root, int x)
{
  int floor = -1;
  while (root)
  {
    if (root->val == x)
    {
      floor = root->val;
      return floor;
    }
    if (x > root->val)
    {
      floor = root->val;
      root = root->right;
    }
    else
    {
      root = root->left;
    }
  }
  return floor;
}