#include "bits/stdc++.h"
#define COUNT 10
using namespace std;

struct node
{
  int data;
  node *left = nullptr, *right = nullptr;
};

void print(node *, int);
void traversal(node *root, int);
void insertNode(node *&, int);
// int deleteNode(node *&, int);

int main(int argc, char **argv)
{
  cout << "Binary tree" << endl;
  node *root = nullptr;

  while (1)
  {
    cout << "0. Exit" << endl
         << "1. Print tree" << endl
         << "2. Insert data" << endl
         << "3. Delete data" << endl
         << "4. Traversal Pre-order" << endl
         << "5. Traversal In-order" << endl
         << "6. Traversal Post-order" << endl
         << "Choose from the above options: ";
    int option;
    cin >> option;

    switch (option)
    {
    case 0:
      exit(0);
    case 1:
      print(root, 0);
      cout << endl;
      break;
    case 2:
      cout << "Enter a number: ";
      int temp;
      cin >> temp;
      insertNode(root, temp);
      break;
    case 3:
      cout << "Enter a number: ";
      cin >> temp;
      // deleteNode(root, temp);
    case 4:
      traversal(root, 0);
      cout << endl;
      break;
    case 5:
      traversal(root, 1);
      cout << endl;
      break;
    case 6:
      traversal(root, 2);
      cout << endl;
      break;
    }
  }
}

void print(node *root, int space)
{
  // Base case
  if (root == nullptr)
    return;

  // Increase distance between levels
  space += COUNT;

  // Process right child first
  print(root->right, space);

  // Print current node after space
  // count
  cout << endl;
  for (int i = COUNT; i < space; i++)
    cout << " ";
  cout << root->data << "\n";

  // Process left child
  print(root->left, space);
}

void traversal(node *root, int type)
{
  if (root != nullptr)
  {
    switch (type)
    {
    case 0:
      cout << root->data << " ";
      traversal(root->left, type);
      traversal(root->right, type);
      break;
    case 1:
      traversal(root->left, type);
      cout << root->data << " ";
      traversal(root->right, type);
      break;
    case 2:
      traversal(root->left, type);
      traversal(root->right, type);
      cout << root->data << " ";
      break;
    }
  }
}

void insertNode(node *&root, int data)
{
  node *newPtr = (node *)malloc(sizeof(node));
  newPtr->data = data;
  newPtr->left = nullptr;
  newPtr->right = nullptr;
  node *ptr = root, *parent = nullptr;
  while (ptr != nullptr)
  {
    parent = ptr;
    if (data <= ptr->data)
    {
      ptr = ptr->left;
    }
    else
    {
      ptr = ptr->right;
    }
  }
  if (parent == nullptr)
  {
    root = newPtr;
  }
  else
  {
    if (data <= parent->data)
    {
      parent->left = newPtr;
    }
    else
    {
      parent->right = newPtr;
    }
  }
}
