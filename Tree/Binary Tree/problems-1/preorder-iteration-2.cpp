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

// preorder traversal
void preOrder(Node *root)
{
  vector<int> vc;
  if (root == NULL)
    return;

  stack<Node *> st;
  st.push(root);
  Node *curr = root;

  while (!st.empty())
  {
    while (curr != NULL)
    {
      vc.push_back(curr->key);

      if (curr->right != NULL)
      {
        st.push(curr->right);
      }

      curr = curr->left;
    }
    curr = st.top();
    st.pop();
  }
  for (auto it : vc)
    cout << it;
}

int main()
{
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  preOrder(root);
  return 0;
}
