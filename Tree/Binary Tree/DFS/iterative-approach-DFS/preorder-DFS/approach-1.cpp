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

void preOrderTraversal(Node *root)
{
  stack<Node *> st;
  vector<int> preorder;
  if (root == NULL)
    return;
  Node *node = root;
  st.push(node);
  while (!st.empty())
  {
    Node *curr = st.top();
    st.pop();

    if (curr->right != NULL)
      st.push(curr->right);
    if (curr->left != NULL)
      st.push(curr->left);

    preorder.push_back(curr->key);
  }
  for (auto it : preorder)
  {
    cout << it << " ";
  }
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
  cout << "Pre Order Traversal Using Recursion"
       << " ";
  preOrderTraversal(root);
  cout << "\n";
  return 0;
}
