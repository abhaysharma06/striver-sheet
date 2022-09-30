// find using two stack
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

void postOrderTraversal(Node *root)
{
  vector<int> postorder;
  if (root == NULL)
    return;
  stack<Node *> st1, st2;
  Node *curr = root;
  st1.push(curr);

  while (!st1.empty())
  {
    curr = st1.top();
    st1.pop();
    st2.push(curr);

    // check does node left child exist
    if (curr->left != NULL)
      st1.push(curr->left);

    // check does it have right child
    if (curr->right != NULL)
      st1.push(curr->right);
  }
  while (!st2.empty())
  {
    postorder.push_back(st2.top()->key);
    st2.pop();
  }
  for (auto it : postorder)
    cout << it << " ";
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

  // inOrder Traversal using recursion
  cout << "Post Order Traversal Using Recursion"
       << " ";
  postOrderTraversal(root);
  cout << "\n";
  return 0;
}
