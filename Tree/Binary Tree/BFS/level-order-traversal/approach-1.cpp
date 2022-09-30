// level order traversal using queue data structure
#include <iostream>
#include <queue>
#include <vector>
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

void levelOrderTraversal(Node *root)
{
  vector<int> ans;
  if (root == NULL)
    return;

  queue<Node *> q;
  q.push(root);

  while (!q.empty())
  {
    Node *tmp = q.front();
    q.pop();

    if (tmp->left != NULL)
      q.push(tmp->left);
    if (tmp->right != NULL)
      q.push(tmp->right);

    ans.push_back(tmp->key);
  }
  for (auto it : ans)
  {
    cout << it << " ";
  }
}

int main()
{
  Node *root = new Node(1);
  root->left = new Node(4);
  root->right = new Node(6);
  root->left->left = new Node(2);
  root->left->right = new Node(7);
  root->right->left = new Node(6);
  levelOrderTraversal(root);
  return 0;
}
