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

void preOrderTraversal(Node *root)
{
  if (root == NULL)
    return;
  cout << root->key << " ";
  preOrderTraversal(root->left);
  preOrderTraversal(root->right);
}

int main()
{
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);

  cout << "PreOrder Traversal Using Recursion"
       << " ";
  // preOrder Traversal using recursion
  preOrderTraversal(root);
  cout << "\n";

  return 0;
}
