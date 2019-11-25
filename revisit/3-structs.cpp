#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node *next;
} *head = nullptr;

int takeChoice();
void checkIfFail(istream &c)
{
  if (c.fail())
  {
    throw runtime_error("Invalid entry");
  }
}

Node *createNewNode()
{
  int x;
  cout << "Enter data for this node: ";
  cin >> x;
  checkIfFail(cin);
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = x;
  newNode->next = nullptr;
  return newNode;
}

int main()
{
  try
  {
    while (1)
    {
      int c = takeChoice();
      cout << "--------------------------------------------------" << endl;
      switch (c)
      {
      case 1:
        if (head == nullptr)
        {
          cout << "Linked list is empty" << endl;
        }
        else
        {
          Node *ptr = head;
          while (ptr != nullptr)
          {
            cout << ptr->data
                 << " | " << ptr->next
                 << ((ptr->next == nullptr) ? " " : " -> ");
            ptr = ptr->next;
          }
          cout << endl;
        }
        break;
      case 2:
      {
        Node *newNode = createNewNode();
        if (head == nullptr)
        {
          head = newNode;
        }
        else
        {
          newNode->next = head;
          head = newNode;
        }
      }
      break;
      case 3:
      {
        Node *newNode = createNewNode();
        if (head == nullptr)
        {
          head = newNode;
        }
        else
        {
          Node *ptr = head;
          while (ptr->next != nullptr)
          {
            ptr = ptr->next;
          }
          ptr->next = newNode;
        }
      }
      break;
      case 4:
      {
        Node *ptr = head;
        if (ptr == nullptr)
        {
          cout << "Linked list is empty" << endl;
        }
        else
        {
          head = ptr->next;
          free(ptr);
        }
      }
      break;
      case 5:
      {
        Node *ptr = head;
        if (ptr == nullptr)
        {
          cout << "Linked list is empty" << endl;
        }
        else
        {
          Node *ptr = head, *prev = head;
          while (ptr->next != nullptr)
          {
            prev = ptr;
            ptr = ptr->next;
          }
          if (prev == ptr)
          {
            head = nullptr;
          }
          prev->next = nullptr;
          free(ptr);
        }
      }
      break;
      case 6:
        exit(0);

      default:
        cout << "Please enter the correct option." << endl;
        break;
      }
      cout << "--------------------------------------------------" << endl;
    }
  }
  catch (runtime_error &e)
  {
    cout << "Some error occurred: " << e.what();
    exit(1);
  }
}

int takeChoice()
{
  int choice;
  cout << "Options:\n"
          "1. Print linked list\n"
          "2. Add new node at the front\n"
          "3. Add new node at the end\n"
          "4. Remove first node\n"
          "5. Remove last node\n"
          "6. Exit\n"
          "Pick your preferred option: ";
  cin >> choice;
  checkIfFail(cin);
  return choice;
}