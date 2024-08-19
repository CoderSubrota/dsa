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
// print max
void printMaxValue(Node *head)
{
    int minValue = INT_MAX;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->val < minValue)
        {
            minValue = i->val;
        }
    }
    cout << "Minimum value : " << minValue;
}
// dessending order
void diccendOrder(Node  * head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val <  j->val){
                swap(i->val , j-> val) ;
            }
        }
    }
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
    printMaxValue(head);

    diccendOrder(head);
    
    printValue(head) ;
    return 0;
}