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
  vector<int> preOrder;
  if (root == NULL)
    return;
  stack<Node *> st;
  st.push(root);
  Node *curr = root;

  while (!st.empty())
  {
    while (curr != NULL)
    {
      preOrder.push_back(curr->key);
      if (curr->right != NULL)
        st.push(curr->right);
      curr = curr->left;
    }
    curr = st.top();
    st.pop();
  }
  for (auto it : preOrder)
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
  cout << "Pre Order Traversal Using Recursion"
       << " ";
  preOrderTraversal(root);
  cout << "\n";
  return 0;
}
