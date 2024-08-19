#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

class NodeList
{
public:
    Node *head;
    NodeList()
    {
        head = NULL;
    }

    void insertNode(int value)
    {
        Node *newNode = new Node(value);
        if (head==NULL)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void removeDuplicatesNode()
    {  
        Node * temp = head;
        for(Node * i=temp; i!=NULL; i=i->next)
        {
             for(Node * j = i; j->next !=NULL; ){//null after null or stop when it is to the  
             //befor of end node
                 if(j->next->value==i->value){
                  Node * deleteNode = j->next;
                  j->next = j->next->next ;
                  delete deleteNode ;
                 }else{
                    j=j->next ;
                 }
             }
        }
    }

    void printNodeValues()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    NodeList list;
    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        list.insertNode(value);
    }

    list.removeDuplicatesNode();
    list.printNodeValues();

    return 0;
}