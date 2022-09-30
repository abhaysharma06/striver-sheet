#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
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

int height(Node *root, int &diameter)
{
  if (!root)
    return 0;
  int lh = height(root->left, diameter);
  int rh = height(root->right, diameter);

  diameter = max(diameter, lh + rh);
  return 1 + max(lh, rh);
}

int diameterOfTree(Node *root)
{
  int diameter = 0;
  height(root, diameter);
  return diameter;
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

  cout << diameterOfTree(root);
  return 0;
}