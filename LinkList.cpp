#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
};

void InsertAtFront( Node* &head, int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtEnd( Node* &head, int d)
{
    Node* tmp = new Node(d);
    Node* cur=head;
    while( cur->next != NULL)
    {
        cur=cur->next;
    } 
    cur->next=tmp;
}

void insertAtMiddle( Node* &head, int d, int pos)
{
    Node* tmp=new Node(d);
    Node* cur=head;
    int count=1;
    while(count < pos)
    {
        cur=cur->next;
        count++;
    }
    tmp->next=cur->next;
    cur->next=tmp;
}
//      1 2 3 4
void ReverseLLIterative(Node* &head)
{   
    if( head == NULL || head->next == NULL)
    return ;

    Node* prev=NULL;
    Node* cur = head;
    Node* forward = NULL;
    while( cur != NULL)
    {
        forward=cur->next;
        cur->next= prev;
        prev=cur;
        cur=forward;
    }
    head=prev;
}


Node* reverseLLRecursion( Node* &head)
{
    if (head == NULL || head->next == NULL)
            return head;
  
        /* reverse the rest list and put 
          the first element at the end */
        Node* rest = reverseLLRecursion(head->next);
        head->next->next = head;
  
        /* tricky step -- see the diagram */
        head->next = NULL;
  
        /* fix the head pointer */
        return rest;

}

int getmiddle( Node* &head)
{
    if( head == NULL || head->next == NULL)
    {
        return head->data;
    }

    //2 nodes
    if( head->next->next == NULL)
    {
        return head->next->data;
    }
    Node* slow=head;
    Node* fast=head->next;
    while( fast != NULL)
    {
        fast=fast->next;
        if( fast != NULL)
        {
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow->data;
}
void print(Node* head)
{
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
}

int main()
{
    Node* node1=new Node(1);
    Node* head=node1;
    InsertAtFront(head, 2);
    InsertAtFront(head, 3);
    insertAtEnd(head, 4);
    insertAtMiddle(head, 6, 2);
   // print(head);
    //3 2 6 1 4
 //   Node* rev=reverseLLRecursion(head);
   // print(rev);
   //4 1 6 2 3
   cout<<getmiddle(head);
    return 0;
}