#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class linkedList
{
public:
    Node *head;
    Node *tail;

    linkedList()
    {
        head = NULL;
        tail = NULL;
    }
    // function will start from here

    // insert
    void insertElement(string val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            head->prev = NULL;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
            tail->next = NULL;
        }
    }
    // create browser design
    void currentFunction(string word)
    {
        while (head != NULL)
        {
            /* code */
            if (head->val == word)
            {
                cout << head->val;
              return;
            }
            else
            {
                cout << "Not available";
            }
            head = head->next;
        }
    }

    void prevFunction(string word)
    {
        while (tail != NULL)
        {
            /* code */
            if (tail->val == word)
            {
                cout << tail->val;
                return;
            }
            else
            {
                cout << "Not available";
            }
            tail = tail->prev;
        }
    }

    void nextFunction(string word)
    {
        while (head != NULL)
        {
            /* code */
            if (head->val == word)
            {
                cout << head->val;
                return;
            }
            else
            {
                cout << "Not available";
            }
            head = head->next;
        }
    }
    //
};

int main()
{
    linkedList list;
    while (1)
    {
        string val;
        cin >> val;
        if (val == "end")
            break;
        list.insertElement(val);
    }

    int query;
    cin >> query;
    for (int i = 0; i <= query; i++)
    {
        string browserCheck;
        getline(cin, browserCheck);
        //
        stringstream stream(browserCheck);
        string word;

        bool flag = false;
        while (stream >> word)
        {
            if (word == "visit")
            {
                flag = true;
            }
            else
            {
                word = word;
            }
        }
        //
        if (flag == true)
        {
            list.currentFunction(word);
        }
        else if (browserCheck == "prev")
        {
            list.prevFunction(word);
        }
        else if (browserCheck == "next")
        {
            list.nextFunction(word);
        }
    }

    return 0;
}