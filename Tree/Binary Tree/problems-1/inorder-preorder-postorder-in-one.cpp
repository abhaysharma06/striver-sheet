#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct Node
{
  int key;
  Node *left, *right;

  Node(int k)
  {
    key = k;
    left = right = NULL;
  }
};

vector<int> preInPostTraversal(Node *root)
{
  stack<pair<Node *, int>> st;
  st.push({root, 1});
  vector<int> pre, in, post;

  if (root == NULL)
    return pre;
  while (!st.empty())
  {
    auto it = st.top();
    st.pop();

    // this is part of pre
    // increment 1 to 2
    // push it into left side of tree
    if (it.second == 1)
    {
      pre.push_back(it.first->key);
      it.second++;
      st.push(it);

      if (it.first->left != NULL)
        st.push({it.first->left, 1});
    }

    // this is part of pre
    // increment 2 to 3
    // push it into left side of tree
    if (it.second == 2)
    {
      in.push_back(it.first->key);
      it.second++;
      st.push(it);

      if (it.first->left != NULL)
      {
        st.push({it.first->right, 1});
      }
      else
      {
        post.push_back(it.first->key);
      }
    }
  }

  for (auto it1 : pre)
    cout << it1;
  for (auto it2 : in)
    cout << it2;
  for (auto it3 : post)
    cout << it3;
}

int main()
{
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);

  preInPostTraversal(root);
}