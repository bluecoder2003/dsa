#include<iostream>
using namespace std;
class Node
{
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
        Node* newnode= new Node(value);
        newnode-> next=head;
        head=newnode;
        cout<<"Value Inserted = "<< value <<"At the Begining.\n";
    }
    void insertend(int value)
    {
        Node* newnode= new Node(value);
        if(head==NULL)
        {
            newnode->next=head;
            head=newnode;
            cout<<"Value is Inserted = "<< value <<"At the End.\n";
        }
        else
        {
            Node* temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            cout<<"Value is Inserted = "<< value <<"At the End.\n";
        }
    }
    void insertLocation(int key)
    {
        int value;
        cout<<"enter value to enter"<<endl;
        cin>>value;
        Node* newnode = new Node(value);
        if(head == NULL)
        {
            cout<<"Linkedlst is empty can not add the value."<<endl;
        }
        else
        {
            Node* temp=head;
            while(temp->data!=key)
            {
                temp=temp->next;
            }
            newnode->next=temp->next;
            temp->next=newnode;
             cout<<"Value is Inserted = "<<value<<"after the key location"<<endl;
        }
    }
    void deletebeg()
    {
        if(head!=NULL)
        {
            Node *temp=head;
            head=temp->next;
            free(temp);
            cout<<"Deleted the first Node"<<endl;
        }
        cout<<"Linkedlist is empty, can not delete"<<endl;
    }
    void deleteend()
    {
        if(head!=NULL)
        {
            Node* temp = head;
            Node* p = NULL;
            while(temp->next!=NULL)
            {
                p=temp;
                temp=temp->next;
            }
            p->next==NULL;
            delete temp;
            cout<<"Deleted the last Node"<<endl;
        }
        else
        {
            cout<<"Linkedlist is empty, can not delete"<<endl;
        }
    }
    void deleteLocation(int key)
    {
        if(head == NULL)
        {
            cout<<"Empty Linkedlist, can not delete"<<endl;
        }
        Node *temp=head;
        Node* p = NULL;
        while(temp->next!=NULL)
        {
            p=temp;
            temp=temp->next;
        }
        p->next=temp->next;
        free(temp);
        cout<<"Deleted"<<endl;
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
        cout<<"Empty Linkedlist, can not display anything"<<endl;
    } 
    void search(int key)
    {
        if(head == NULL)
        {
            cout<<"Empty Linkedlist"<<endl;
            return ;
        }
        else
        {
            Node* temp=head;
            while(temp->next!=NULL)
            {
                if(temp->data==key)
                {
                    cout<<"Your data "<<temp -> data<<" is found"<<endl;
                    break;
                }
                else
                {
                    temp = temp -> next;
                }
            }
            if(temp -> next == NULL && temp -> data != key)
            {
                cout<<"Your data is not found"<<endl;
            }
        }
    }
};

int main()
{
    Linkedlist l;
    int c,val;
    do
    {
        cout << "-----------------------\n";
		cout << "1. Insert at the beginning\n";
        cout << "2. Insert at the end\n";
		cout <<"3. Insert at any position\n";
		cout << "4. Delete from Beginning\n";
		cout << "5. Delete from End\n";
		cout<< "6. Delete any element\n";
		cout << "7. Display\n";
        cout<<"8. search"<<endl;
        cout<< "9. exit"<<endl;
        cout<<"Please Enter your choice = "<<endl;
        cin>>c;
        switch(c){
            case 1:
            cout<<"enter val";
            cin>>val;
            l.insertbeg(val);
            break;
            case 2:
            cout<<"enter val";
            cin>>val;
            l.insertend(val);
            break;
            case 3:
            cout<<"enter val to add at any location";
            cin>>val;
            l.insertLocation(val);
            break;
            case 4:
			l.deletebeg();
			break;
		    case 5:
			l.deleteend();
			break;
            case 6:
			cout<<"Enter the data to delete: ";
			cin>>val;
			l.deleteLocation(val);
			break;
            case 7:
            cout << "Displaying the linked list: ";
			l.display();
			break;
            case 8:
            int k;
            cout<<"Enter that you want to search : "<<endl;
            cin>>k;
            l.search(k);

            default: cout<<"Invalid Input!!!Error."<<endl;
            break;
        }
    } while (c!=8);
    return 0;
}
