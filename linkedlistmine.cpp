#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value)
    {
        data=value;
        next=nullptr;
    }
};
class Linkedlist
{
    Node *head;
    public:
    Linkedlist()
    {
        head=NULL;
    }
    void insertbeg(int value)
    {
        Node* newnode=new Node(value);
        newnode->next=head;
        head=newnode;
    }
    void insertend(int value)
    {
        Node* newnode=new Node(value);
        if(head==NULL)
        {
            newnode->next=head;
            head=newnode;
        }
        else
        {
            Node*temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
        }
    }
    void deletebeg()
    {
        if(head!=NULL)
        {
        Node*temp=head;
        head=temp->next;
        free(temp); 
        }
    }
    void deleteend()
    {
        if(head==NULL)
        {
            cout<<"EMPTY";
        }
        Node *temp=head;
        Node *p=NULL;
        while(temp->next!=NULL)
        {
            p=temp;
            temp=temp->next;
        }
        p->next=NULL;
        delete temp;

    }
    void display()
    {
         if(head != NULL){
            Node* temp = head;
            
            while(temp != NULL){
                cout<<temp -> data<<" ";
                temp = temp -> next;
            }

        }
    }
    void reverse()
    {
        Node *p=head,*q,*r=NULL;
        while(p)
        {
            q=p;
            p=p->next;
            q->next=r;
            r=q;
        }
        head=q;
        
    }

};