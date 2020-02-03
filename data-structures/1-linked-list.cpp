#include <bits/stdc++.h>
using namespace std;

struct link
{
  int data;
  link *next;
};

void traverse(link *);
int insertAtBegin(link *&, int);
int deleteFromBegin(link *&);

int main(int argc, char **argv)
{
  cout << "Linked list API" << endl;

  link *head = nullptr;
  while (1)
  {
    cout << "0. Exit" << endl
         << "1. Traversal" << endl
         << "2. Insert at the head" << endl
         << "3. Delete from the head" << endl
         << "Choose from the above options: ";
    int option;
    cin >> option;

    switch (option)
    {
    case 0:
      exit(0);
    case 1:
      traverse(head);
      break;
    case 2:
      cout << "Enter a number: ";
      int temp;
      cin >> temp;
      insertAtBegin(head, temp);
      break;
    case 3:
      deleteFromBegin(head);
    }
  }
}

void traverse(link *head)
{
  link *p = head;
  while (p != nullptr)
  {
    cout << p->data << " ";
    p = p->next;
  }
  cout << endl;
}

int insertAtBegin(link *&head, int x)
{
  link *p = (link *)malloc(sizeof(link));
  p->data = x;
  p->next = head;
  head = p;
  return x;
}

int deleteFromBegin(link *&head)
{
  if (head == nullptr)
  {
    return numeric_limits<int>::min();
  }
  link *p = head;
  int data = p->data;
  head = head->next;
  free(p);
  return data;
}