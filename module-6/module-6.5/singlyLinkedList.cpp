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

void inserData(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    { // insert data after the head
        temp = temp->next;
    }
    temp->next = newNode; // now it is the tail of the node .
}
// print data
void printData(Node *&head)
{
    long long int sum = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp->val;
        temp = temp->next;
        sum = sum + 1;
    }
    cout << "Sum of the list size : " << sum << endl;
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "Option 1: Insert element " << endl;
        cout << "Option 2: Treminate proggram" << endl;
        int opt;
        cin >> opt;

        if (opt == 1)
        {
            cout << "Pleae enter the value : " << endl;

            int val;
            cin >> val;
            inserData(head, val);
        }
        else if (opt == 2)
        {
            break;
        }
    }

    printData(head);

    return 0;
}