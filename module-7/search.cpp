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
// find min and max difference
void searchElement(Node *head, int val)
{
    int index = 0;
    bool flag = false ;

    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->val == val) //3 > 1+1 = 2 > 1 + 2 = 3 > 3 break // 3 > 3 - 1 = 2 
        {
            flag = true ;
            break;
        }
        index++;
    }
    if (flag)
    {
        cout << "Your element postion : " << index << endl;
    }
    else
    {
        cout << "Don't get that position: " << -1 << endl;
    }
}
int main()
{

    cout << "Enter test case : ";
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
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

        cout << "Enter value to search : ";
        int val;
        cin >> val;

        searchElement(head, val);
    }

    return 0;
}