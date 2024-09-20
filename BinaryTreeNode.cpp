#include <bits/stdc++.h>

using namespace std;

template <typename T> class BinaryTreeNode {
public:
  T data;
  BinaryTreeNode<T> *left;
  BinaryTreeNode<T> *right;

  BinaryTreeNode(T data) {
    this->data = data;
    left = NULL;
    right = NULL;
  }

  ~BinaryTreeNode() {
    if (left)
      delete left;
    if (right)
      delete right;
  }
};

BinaryTreeNode<int> *takeInput() {
  int rootData;
  cin >> rootData;

  if (rootData == -1) {
    return NULL;
  }

  BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
  queue<BinaryTreeNode<int> *> pendingNodes;
  pendingNodes.push(root);

  while (pendingNodes.size() != 0) {
    BinaryTreeNode<int> *front = pendingNodes.front();
    pendingNodes.pop();
    int leftData, rightData;
    cin >> leftData >> rightData;
    if (leftData != -1) {
      BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftData);
      pendingNodes.push(leftNode);
    }

    if (rightData != -1) {
      BinaryTreeNode<int> *rightNode = new BinaryTreeNode<int>(rightData);
      pendingNodes.push(rightNode);
    }
  }
  return root;
}

void print(BinaryTreeNode<int> *root) {
  if (root == NULL) {
    return;
  }

  queue<BinaryTreeNode<int> *> pendingNodes;
  pendingNodes.push(root);

  while (pendingNodes.size() != 0) {
    BinaryTreeNode<int> *front = pendingNodes.front();
    if (front->left) {
    }
    if (front->right) {
    }
  }
}

int main() {
  BinaryTreeNode<int> *root = takeInput();
  print(root);
}
