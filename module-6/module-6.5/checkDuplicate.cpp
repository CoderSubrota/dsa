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

private:
    string name;
    int age;
    int roll;
    string city;

    Node(string name, int age, int roll, string city)
    {
        this->name = name;
        this->age = age;
        this->roll = roll;
        this->city = city;
    }
};

// insert element to the node
void insertElement(Node *&head, int val)
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
    temp->next = newNode; // this is tail
}
// check duplicate
int hasDuplicates(Node * &head)
{
    Node *temp = head;
    vector<int> a ;
    while (temp != NULL)
    {
        a.push_back(temp->val) ;
        temp = temp->next;
    }
    for(int i=0; i<a.size();  i++){
         for(int j=i+1; j<a.size(); j++){
              if(a[i]==a[j]){
                return 1 ;
              }
         }
    }
    
    return 0 ;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert element to the node" << endl;
        cout << "Option 2: Terminate the proggram" << endl;

        int option;
        cin >> option;
        if (option == 1)
        {
            cout << "Please enter the element: ";
            int value;
            cin >> value;

            insertElement(head, value);
        }
        else if (option == 2)
        {
            break;
        }
    }

    int result = hasDuplicates(head);
    
    if (result == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}