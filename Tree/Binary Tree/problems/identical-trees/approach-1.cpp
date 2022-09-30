#include <iostream>
#include <vector>
#include <stack>
#include <queue>
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

bool identicalTree(Node *root1, Node *root2)
{
  if (root1 == NULL && root2 == NULL)
    return true;
  if (root1 == NULL || root2 == NULL)
    return false;

  return ((root1->key == root2->key) && identicalTree(root1->left, root2->left) && identicalTree(root1->right, root2->right));
}

int main()
{
  Node *root1 = new Node(1);
  root1->left = new Node(2);
  root1->right = new Node(5);
  root1->left->left = new Node(3);
  root1->left->right = new Node(4);
  root1->left->left->left = new Node(9);
  root1->right->right = new Node(7);

  Node *root2 = new Node(1);
  root2->left = new Node(2);
  root2->right = new Node(5);
  root2->left->left = new Node(3);
  root2->left->right = new Node(4);
  // root2->left->left->left = new Node(9);
  root2->right->right = new Node(7);
  cout << identicalTree(root1, root2);
  return 0;
}