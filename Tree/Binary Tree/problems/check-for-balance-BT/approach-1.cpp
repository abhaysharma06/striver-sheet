#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct Node
{
  int key;
  Node *left;
  Node *right;

  Node(int k)
  {
    key = k;
    left = right = NULL;
  }
};

int height(Node *root)
{
  if (root == NULL)
    return 0;
  int lh = height(root->left);
  if (lh == -1)
    return -1;
  int rh = height(root->right);
  if (rh == -1)
    return -1;
  if (abs(lh - rh) > 1)
    return -1;
  return 1 + max(lh, rh);
}

bool isBalanced(Node *root)
{
  return height(root) != -1;
}

int main()
{
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(5);
  root->left->left = new Node(3);
  root->left->right = new Node(4);
  root->left->left->left = new Node(9);
  // root->right->right = new Node(7);

  cout << isBalanced(root);
  return 0;
}