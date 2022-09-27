// iterative approach
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
  TreeNode *searchBST(TreeNode *root, int val)
  {
    while (root != NULL && root->val != val)
    {
      if (root->val > val)
        root->left;
      else
        root->right;
    }
    return root;
  }
};
