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
//
class secondNode
{
public:
    int val;
    secondNode *next;
    secondNode(int val)
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

// insert value
void insertValue2(secondNode *&head, int val)
{
    secondNode *newNode = new secondNode(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    secondNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode; // tail
}


// print value

void printValue(Node *&head)
{
    cout <<endl << "o-------o Inserted values o--------o" << endl ;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout <<endl << "o-------o END o--------o" << endl ;
}
//


// print value

void printValue2(secondNode *&head)
{
    cout <<endl << "o-------o Inserted values o--------o" << endl ;
    secondNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout <<endl << "o-------o END o--------o" << endl ;
}


//check the nod
void sameToSame(Node * head, secondNode *head2){
    Node * temp = head ;
    secondNode * temp2 = head2 ;
    bool flag = false ;
     int countIndex = 0  ;
      while (temp!=NULL && temp2!=NULL)
      {
        // cout << temp->val << " " << temp2->val << " ";
        if(temp->val == temp2->val){
            flag=true ;
        } 
        temp =temp->next ;
        temp2 = temp2->next ; 
        countIndex++ ;
      }
      
    if(flag==true){
        cout << "YES" ;
    }else{
        cout << "NO";
    }
}
//arrayA , arrayB 
//arrayA[i] = array[j]
int main()
{
    Node*head = NULL;
   
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
//     ----------------

     secondNode * head2 = NULL;
   
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
            int val2;
            cin >> val2;

            insertValue2( head2, val2 );
        }
        else if (opt == 2)
        {
            printValue2(head2);
        }
        else if (opt == 3)
        {
            break;
        }
    }

    sameToSame(head, head2) ;


    return 0;
}


// class Node1 {
// public:
//     int val;
//     Node1* next;

//     Node1(int x) : val(x), next(NULL) {}
// };

// class Node2 {
// public:
//     int val;
//     Node2* next;

//     Node2(int x) : val(x), next(NULL) {}
// };

// bool areNodesSame(Node1* node1, Node2* node2) {
//     while (node1 != NULL && node2 != NULL) {
//         if (node1->val != node2->val) {
//             return false;
//         }
//         node1 = node1->next;
//         node2 = node2->next;
//     }
//     return node1 == NULL && node2 == NULL;
// }