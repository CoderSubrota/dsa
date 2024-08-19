#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class linkedList
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    bool insert(int x, int v)
    {
        Node *newNode = new Node(v);

         if (x == 0)
        {
            if (head == NULL)
            {
                head = newNode;
                tail = newNode;
            }
          else{
             newNode->next = head;
            head->prev = newNode;
            head = newNode;
          }
        }
        else
        {
            Node *temp = head;
            int i = 0;
            while (temp != NULL && i < x - 1)
            {
                temp = temp->next;
                i++;
            }
            if (temp == NULL)
            {
                cout << "Invalid" << endl;
                return false;
            }
            if (temp->next == NULL)
            {
                temp->next = newNode;
                newNode->prev = temp;
                tail = newNode;
            }
            else
            {
                newNode->next = temp->next;
                temp->next->prev = newNode;
                newNode->prev = temp;
                temp->next = newNode;
            }
        }
        return true;
    }

    void printLeftToRight()
    {
        cout << "L -> ";
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void printRightToLeft()
    {
        cout << "R -> ";
        Node *temp = tail;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};

int main()
{
    linkedList ll;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x, v;
        cin >> x >> v;
        if (ll.insert(x, v) != false)
        {
            ll.printLeftToRight();
            ll.printRightToLeft();
        }
    }
    return 0;
}