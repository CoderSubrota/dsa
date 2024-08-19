#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node * next;

    Node(int val){
    this ->val = val;
    this -> next = NULL;
    }
};
//insert at tail

void insertAtTail(Node *& head, int data){
    Node * newNode = new Node(data) ;
    if(head == NULL){
        head = newNode ;
        return;
    }
    Node * temp = head ;

   while(temp->next !=NULL){
     temp = temp->next ;
   }
   //tmp now last node
    temp->next=newNode ;
}

//print list

int  printList (Node* head) {
cout <<endl <<"Your node list data"<< endl<< endl;
    Node * temp = head ;
   while(temp!=NULL){
    cout << temp->val << " ";
    temp=temp->next;
   }
   cout <<endl<<endl << "--------------End-----------" <<endl<<endl;
}

int main(){
Node * head = NULL;

while(true){
    cout <<"Option : 1 Insert data at tail" << endl;
    cout <<"Option : 2 Insert data at head" << endl;
    cout <<"Option : 3 Insert data any position" << endl;
    cout <<"Option : 4 Delete data to tail" << endl;
    cout <<"Option : 5 Delete data to head" << endl;
    cout <<"Option : 6 Delete data from any position" << endl;
    cout <<"Option : 7 Print node list" << endl;
    cout <<"Option : 8 Stop the operation" << endl;
    int num;
    cin >> num;
    if(num==1){
        cout << "Enter the value to insert" << endl ;
        int data;
        cin >> data ;
       insertAtTail(head, data) ;

    }
    else if(num==7){
      printList(head) ;
    }
    else if(num==8){
     break;
    }
}

    return 0;
}
