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
int maxDepth(Node *root)
{
  if (root == NULL)
    return 0;
  return 1 + max(maxDepth(root->left), maxDepth(root->right));
}
int main()
{
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(5);
  root->left->left = new Node(3);
  root->left->right = new Node(4);
  root->left->left->left = new Node(9);
  root->right->right = new Node(7);

  cout << maxDepth(root);
  return 0;
}