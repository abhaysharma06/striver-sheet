// iterative approach of recursion in InOrder

#include <iostream>
#include <stack>
using namespace std;

struct Node
{
  int key;
  Node *right;
  Node *left;

  Node(int k)
  {
    key = k;
    left = right = NULL;
  }
};

// inOrder Approach using iterative

int main()
{

  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);
  return 0;
}
