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

class Solution
{
public:
  TreeNode *insertIntoBST(TreeNode *root, int val)
  {
    if (!root)
      return new TreeNode(val);
    TreeNode *curr = root;
    while (true)
    {
      // moving to right part of tree
      if (curr->val <= val)
      {
        if (curr->right != NULL)
          curr = curr->right;
        else
        {
          curr->right = new TreeNode(val);
          break;
        }
      }
      // moving to left part of tree
      else
      {
        if (curr->left != NULL)
          curr = curr->left;
        else
        {
          curr->left = new TreeNode(val);
          break;
        }
      }
    }
    return root;
  }
};