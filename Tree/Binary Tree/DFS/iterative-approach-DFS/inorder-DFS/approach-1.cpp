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

void inOrderTraversal(Node *root)
{
  stack<Node *> st;
  Node *node = root;
  vector<int> inorder;

  while (true)
  {
    if (node != NULL)
    {
      st.push(node);
      node = node->left;
    }
    else
    {
      if (st.empty() == true)
        break;
      node = st.top();
      st.pop();
      inorder.push_back(node->key);
      node = node->right;
    }
  }
  for (auto it : inorder)
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
  cout << "InOrder Traversal Using Recursion"
       << " ";
  inOrderTraversal(root);
  cout << "\n";
  return 0;
}
