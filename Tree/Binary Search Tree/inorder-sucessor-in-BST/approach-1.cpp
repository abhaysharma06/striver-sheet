#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <math.h>
using namespace std;

struct node
{
  int key;
  struct node *left, *right;
};

// Create a node
struct node *newNode(int item)
{
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

// Inorder Traversal
vector<int> inorder(struct node *root)
{
  vector<int> v;
  if (root != NULL)
  {
    inorder(root->left);
    v.push_back(root->key);
    inorder(root->right);
  }
  for (auto its : v)
  {
    cout << its << " ";
  }
  return v;
}

void successor(node *root, int k)
{
  inorder(root);
}

// Insert a node
struct node *insert(struct node *node, int key)
{
  if (node == NULL)
    return newNode(key);

  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);

  return node;
}

int main()
{
  struct node *root = NULL;
  root = insert(root, 8);
  root = insert(root, 3);
  root = insert(root, 1);
  root = insert(root, 6);
  root = insert(root, 7);
  root = insert(root, 10);
  root = insert(root, 14);
  root = insert(root, 4);

  cout << "Inorder traversal: ";
  successor(root, 8);
}