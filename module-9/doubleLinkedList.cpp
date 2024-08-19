#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
// count
int sizeNode(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        /* code */
        count++;
    }
    return count;
}

//
void insertAtHead(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
//
void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
//
void insertAtAnyPosition(Node *&head, int val, int pos)
{
    Node *newNode = new Node(val);

    Node *temp = head;

    for (int i = 0; i < pos - 1; i++)
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
    newNode->next->prev = newNode;
    newNode->prev = temp;
    cout << endl
         << "Inserted" << endl;
}
//
void deleteAtHead(Node *&head, Node *&tail)
{
    Node * deleteHead = head ;
    head = head->next ;

      if(head==NULL) {
        tail=NULL;
        cout <<endl << "List is empty" <<endl; 
        return ;
    } 
    delete deleteHead;

    head->prev = NULL ;
   
}
// delete at any position
void deleteAtAnyPosition(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deleteNode;
    cout << endl
         << "Node delete from position" << endl;
}
// delte from tail
void deleteFromTail(Node *&tail, Node * &head)
{

    Node * deleteTail = tail;

    tail = tail->prev;
       if(tail==NULL) {
        head=NULL;
        cout <<endl << "List is empty" <<endl; 
        return ;
    } 
//   if(tail==NULL && head==NULL) cout <<endl << "Your tail is empty" <<endl; return ;

    delete deleteTail;
    tail->next = NULL;
}
void printNormalNode(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        /* code */
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void printReverseNode(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        /* code */
        cout << temp->val << " ";
        temp = temp->prev;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        /* code */
        cout << "Option 1 : Insert at head" << endl;
        cout << "Option 2 : Insert at tail" << endl;
        cout << "Option 3 : Insert at middle" << endl;
        cout << "Option 4 : Delete from head" << endl;
        cout << "Option 5 : Delete from tail" << endl;
        cout << "Option 6 : Delete from any position" << endl;
        cout << "Option 7 : Print your list" << endl;
        cout << "Option 8 : Terminate proggram" << endl;

        int opt;
        cin >> opt;
        if (opt == 1)
        {
            int val;
            cout << "Enter value : ";
            cin >> val;
            insertAtHead(head, tail, val);
        }
        else if (opt == 2)
        {
            int val;
            cout << "Enter value : ";
            cin >> val;

            insertAtTail(head, tail, val);
        }
        else if (opt == 3)
        {
            int val;
            cout << "Enter value : ";
            cin >> val;
            int pos;
            cout << "Enter position : ";
            cin >> pos;
            if (pos == 0)
            {
                cout << endl
                     << "Invalid index" << endl;
                return 0;
            }
            insertAtAnyPosition(head, val, pos);
        }
        else if (opt == 4)
        {
            deleteAtHead(head, tail);
        }
        else if (opt == 5)
        {
            if(head->next == NULL || head==NULL){ deleteAtHead(head,tail) ; return 0 ;}
            deleteFromTail(tail, head);
        }
        else if (opt == 6)
        {
            cout << "Enter your position : ";
            int pos;
            cin >> pos;
            deleteAtAnyPosition(head, pos);
        }
        else if (opt == 7)
        {
            cout << endl
                 << endl;
            printNormalNode(head);
            cout << endl;
            printReverseNode(tail);
            cout << endl
                 << endl;
        }
        else if (opt == 8)
        {
            break;
        }
    }

    return 0;
}