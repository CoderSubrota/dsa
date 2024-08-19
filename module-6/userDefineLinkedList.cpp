#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
// insert at tail
void insert_at_tail(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode; // tail node
    cout << endl
         << endl
         << "Element inserted at tail" << endl
         << endl;
}
// print linked list
void printLinkedList(Node *&head)
{
    Node *temp = head;
    cout << endl
         << endl
         << "-------------Your linked list elements-------------" << endl
         << endl;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl
         << endl
         << "------------- END -------------" << endl
         << endl;
}

// insert at any position

void insert_at_any_position(Node *&head, int pos, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << endl
                 << "Invalid Index : " << pos << endl
                 << endl;
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << endl
         << endl
         << "Element inserted in " << pos << " number position" << endl
         << endl;
}
// insert at head
void insert_at_head(Node *&head, int value)
{
    
    Node *newNode = new Node(value);
    Node *temp = head;
    newNode->next = head;
    head = newNode;
    cout << endl
         << endl
         << "Element inerted at head" << endl
         << endl;
}
// delete from position
void delete_from_position(Node *&head, int pos)
{
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << endl
                 << endl
                 << "Invalid Index : " << pos << endl
                 << endl;
            return;
        }
    }

    if (temp->next == NULL)
    {
        cout << endl
             << endl
             << "Invalid Index : " << pos << endl
             << endl;
        return;
    }

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    cout << endl
         << endl
         << "Element deleted from " << pos <<" number position" << endl
         << endl;
}
// delete from head
void delete_head(Node *&head)
{
    if (head == NULL)
        {
            cout << endl
                 << "Head is not available"<< endl
                 << endl;
            return;
        }

    Node *deleteHead = head;
    head = head->next;
    delete deleteHead;
    cout << endl
         << endl
         << "Element deleted from head" << endl
         << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1 : Insert data at tail" << endl;
        cout << "Option 2 : Insert data any position" << endl;
        cout << "Option 3 : Insert data at head" << endl;
        cout << "Option 4 : Delete element from position" << endl;
        cout << "Option 5 : Delete head" << endl;
        cout << "Option 6 : Print your linked list" << endl;
        cout << "Option 7 : Terminate the proggram" << endl;
        int opt;
        cin >> opt;
        if (opt > 7 || opt < 1)
        {
            cout << "Option " << opt <<" is not available" << endl
                 << endl;
        }
        if (opt == 1)
        {
            cout << "Enter the value to insert at tail : ";
            int value;

            cin >> value;
            insert_at_tail(head, value);
        }

        else if (opt == 2)
        {
            cout << "Please  enter position : ";
            int pos;
            cin >> pos;
            cout << "Please enter value : ";
            int value;
            cin >> value;

            insert_at_any_position(head, pos, value);
        }
        else if (opt == 3)
        {
            cout << "Please enter the value : ";
            int value;
            cin >> value;
            insert_at_head(head, value);
        }
        else if (opt == 4)
        {
            cout << "Please enter position : ";
            int pos;
            cin >> pos;
            if (pos < 0)
            {
                cout << "Position number " << pos << " is not avaible" << endl
                     << endl;
            }
            else if (pos == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head, pos);
            }
        }

        else if (opt == 5)
        {
            delete_head(head);
        }
        else if (opt == 6)
        {
            printLinkedList(head);
        }

        else if (opt == 7)
        {
            break;
        }
    }

    return 0;
}