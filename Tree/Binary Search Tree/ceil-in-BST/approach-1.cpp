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

int findCeil(TreeNode *node, int val)
{

  int ceil = -1;
  while (node)
  {
    if (node->val == val)
      ceil = node->val;
    return ceil;
  }
  if (val > node->val)
  {
    node = node->right;
  }
  else
  {
    ceil = node->val;
    node = node->left;
  }
  return ceil;
}