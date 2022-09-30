#include <iostream>
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

void inOrderTraversal(Node *root)
{
  // vector<int> ans;
  if (root == NULL)
    return;
  inOrderTraversal(root->left);
  cout << root->key << " ";
  inOrderTraversal(root->right);
}

int main()
{
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);

  // inOrder Traversal using recursion
  cout << "InOrder Traversal Using Recursion"
       << " ";
  inOrderTraversal(root);
  cout << "\n";

  return 0;
}
