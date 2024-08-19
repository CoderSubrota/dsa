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

class Node2
{
public:
    int val;
    Node2 *next;

    Node2(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class linkedList
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    // node2
    Node2 *head2 = NULL;
    Node2 *tail2 = NULL;
    //sizes
    int size=0 ;
    int size2=0 ;
    // insert
    void insertElemnt(int val)
    {
      size++ ;

        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head = newNode;
            tail->next = NULL;
        }
    }
    // insert 2

    void insertElemnt2(int val)
    {
      size2++ ;


        Node2 *newNode = new Node2(val);

        if (head2 == NULL)
        {
            head2 = newNode;
            tail2 = newNode;
            return;
        }
        else
        {
            tail2->next = newNode;
            tail2 = newNode;
            tail2->next = NULL;
        }
    }

    int printNode()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            /* code */
            cout << temp->val << " ";
            temp = temp->next;
        }
    }

    int printNode2()
    {
        Node2 *temp = head2;
        // cout << size << " " << size2 ; 
        while (temp != NULL)
        {
            /* code */
            cout << temp->val << " ";
            temp = temp->next;
        }
    }
    //check element
    bool checkElement (){
        Node * temp = head ;
        Node2 * temp2 = head2 ;
        
        if(size!=size2) return false ; 

        while (temp!=NULL && temp2!=NULL)
        {
            /* code */
            if(temp->val!=temp2->val){
                return false ;
            }
            temp = temp->next ;
            temp2=temp2->next ;
        }
        return true ;
        
    }
    void clearMemory(){

        Node * temp = head ;
        Node2 * temp2 = head2 ;
        

        while (temp!=NULL && temp2!=NULL)
        {
            Node * dltfirst = head ;
            head = head->next ;
            delete dltfirst;

            Node2 * dltSecond = head2 ;
            head2=head2->next ;
            delete dltSecond ;
            
            temp = temp->next ;
            temp2=temp2->next ;
        }

        // cout <<endl << "Clear memory" <<endl ;
    }
};

int main()
{
    linkedList ll;

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        ll.insertElemnt(val);
    }

    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        ll.insertElemnt2(val);
    }
   //print node elements 

    ll.printNode();
    cout << endl;
    ll.printNode2();
    cout << endl;
    //check element
    bool result = ll.checkElement() ;
    if(result==true){
        cout << "YES" << endl ;
    }else {
        cout << "NO" << endl ;
    }
    ll.clearMemory() ;

    return 0;
}