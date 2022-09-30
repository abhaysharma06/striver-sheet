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

void postOrderTraversal(Node *root)
{
  if (root == NULL)
    return;
  postOrderTraversal(root->left);
  postOrderTraversal(root->right);
  cout << root->key << " ";
}

int main()
{
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);

  cout << "PostOrder Traversal Using Recursion"
       << " ";
  // postOrder Traversal using recursion
  postOrderTraversal(root);
  cout << "\n";

  return 0;
}
