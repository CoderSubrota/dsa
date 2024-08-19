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
// insert value
void insertValue(Node *&head, int val)
{
    Node *newNode = new Node(val);
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
    temp->next = newNode; // tail
}

// print value

void printValue(Node *&head)
{
    cout << endl
         << "o-------o Inserted values o--------o" << endl;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl
         << "o-------o END o--------o" << endl;
}
// insert index value

void insertIndexAndValue(Node *&head, int index, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
    }
    Node *temp = head;

    for (int i = 1; i < index - 1; i++)
    {
        temp = temp->next;
        
    if (temp == NULL)
    {
        cout << endl
             << "Invalid index" << endl;
        return;
    }
    }
        

    newNode->next = temp->next;
    temp->next = newNode;
    cout << endl
         << "Node element inserted" << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert values" << endl;
        cout << "Option 2: Print values" << endl;
        cout << "Option 3: Terminate Proggram" << endl;
        int opt;
        cin >> opt;
        if (opt == 1)
        {
            cout << "Please enter your values: ";
            int val;
            cin >> val;

            insertValue(head, val);
        }
        else if (opt == 2)
        {
            printValue(head);
        }
        else if (opt == 3)
        {
            break;
        }
    }
    cout << "Enter your query : ";
    int query;
    cin >> query;
    for (int i = 1; i <= query; i++)
    {
        cout << "Please enter index : ";
        int index;
        cin >> index;
        cout << "Please enter value : ";
        int value;
        cin >> value;
        insertIndexAndValue(head, index, value);
    }
    return 0;
}