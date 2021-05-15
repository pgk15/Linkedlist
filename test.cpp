#include<bits/stdc++.h>

using namespace  std;

struct Node
{
    int value;
    Node* next;
    Node(int value)
    {
        this->value=value;
        this->next= NULL;
    }
};

int main()
{
    Node *head=NULL;
    int linkedlist_size;
    cin >> linkedlist_size;
    vector<int> v;
    for (int i = 0; i < linkedlist_size; i++)
    {
        int linkedlist_item;
        cin >> linkedlist_item;
        v.push_back(linkedlist_item);
    }
    //print (head);
    for(int i=v.size()-1;i>=0;i--)
    {
        Node* newNode= new Node(v[i]);
        newNode->next=head;
        head=newNode;
    }
    for(Node* p=head;p!=NULL;p=p->next) cout<<p->value<<" ";
    return 0;
}