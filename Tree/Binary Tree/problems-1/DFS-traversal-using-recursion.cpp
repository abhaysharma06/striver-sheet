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

void postOrderTraversal(Node *root)
{
  if (root == NULL)
    return;
  postOrderTraversal(root->left);
  postOrderTraversal(root->right);
  cout << root->key << " ";
}

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

  // inOrder Traversal using recursion
  cout << "InOrder Traversal Using Recursion"
       << " ";
  inOrderTraversal(root);
  cout << "\n";

  cout << "PreOrder Traversal Using Recursion"
       << " ";
  // preOrder Traversal using recursion
  preOrderTraversal(root);
  cout << "\n";

  cout << "PostOrder Traversal Using Recursion"
       << " ";
  // postOrder Traversal using recursion
  postOrderTraversal(root);
  cout << "\n";

  return 0;
}
