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
  TreeNode *firstLastRight(TreeNode *root)
  {
    if (root->right == NULL)
      return root;
    return firstLastRight(root->right);
  }

  TreeNode *connectionRoot(TreeNode *root)
  {
    if (root->right == NULL)
      return root->left;
    else if (root->left == NULL)
      return root->right;
    TreeNode *rightChild = root->right;
    TreeNode *lastRight = firstLastRight(root->left);
    lastRight->right = rightChild;
    return root->left;
  }

  TreeNode *deleteNode(TreeNode *root, int key)
  {
    if (!root)
      return NULL;

    if (root->val == key)
      return connectionRoot(root);

    TreeNode *curr = root;
    while (root != NULL)
    {
      if (root->val > key)
      {
        if (root->left != NULL && root->left->val == key)
        {
          root->left = connectionRoot(root->left);
          break;
        }
        else
          root = root->left;
      }
      else
      {
        if (root->right != NULL && root->right->val == key)
        {
          root->right = connectionRoot(root->right);
          break;
        }
        else
          root = root->right;
      }
    }
    return curr;
  }
};