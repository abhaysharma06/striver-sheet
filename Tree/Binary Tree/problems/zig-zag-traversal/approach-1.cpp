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

vector<vector<int>> zigZagTraversal(Node *root)
{
  vector<vector<int>> zigzag;
  queue<Node *> nodeQueue;
  int flag = true;
  if (root == NULL)
    return;
  nodeQueue.push(root);
  while (!nodeQueue.empty())
  {
    int sz = nodeQueue.size();
    vector<int> row(sz);
    for (int i = 0; i < sz; i++)
    {
      Node *temp = nodeQueue.front();
      nodeQueue.pop();

      // for even levels the value insert from left -> right;
      // for odd levels the value insert from right -> left;
      // it is used to keep check for ordering of value during the insertion;
      int index = (flag) ? i : (sz - 1 - i);

      row[index] = temp->key;

      if (temp->left)
        nodeQueue.push(temp->left);
      if (temp->right)
        nodeQueue.push(temp->right);
    }
    flag = !flag;
    zigzag.push_back(row);
  }
  return zigzag;
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
  zigZagTraversal(root);
  return 0;
}