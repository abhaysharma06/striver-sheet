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

bool getpath(Node *root, vector<int> &res, int x)
{
  if (!root)
    return false;
  res.push_back(root->key);
  if (root->key == x)
    return true;
  if (getpath(root->left, res, x) || getpath(root->right, res, x))
    return true;
  res.pop_back();
  return false;
}

vector<int> rootToNode(Node *root, int node)
{
  vector<int> temp_vec;
  if (root == NULL)
    return temp_vec;
  getpath(root, temp_vec, node);
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

  rootToNode(root1, 9);
  return 0;
}