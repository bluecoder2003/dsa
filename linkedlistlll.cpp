#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int value){
            data = value;
            next = nullptr;
        }
};

class Linkedlist{
    Node *head;
    public:
        Linkedlist(){
            head = NULL;
        }
        void insertBeg(int value){
            Node* createNode = new Node(value);
            createNode -> next = head;
            head = createNode;
            cout<<"Value Inserted = "<< value <<"At the Begining.\n";
        }
        void insertEnd(int value){
            Node* createNode = new Node(value);
            if(head  == NULL){
                createNode -> next = head;
                head = createNode;
                cout<<"Value is Inserted = "<< value <<"At the End.\n";
            }
            else{
                Node* temp = head;
                while(temp -> next != NULL){
                    temp = temp -> next;
                }
                temp -> next = createNode;
                cout<<"Value is Inserted = "<< value <<"At the End.\n";
            }
        }
    void insertLocation(int key){
        int value;
        cout<<"Enter the data you want to add : "<<endl;
        cin>>value;
        Node* createNode = new Node(value);
        if(head == NULL){
            cout<<"Linkedlst is empty can not add the value."<<endl;
        }
        else{
            Node* temp = head;
            while(temp -> data != key){
                temp = temp -> next;
            }
            createNode -> next = temp -> next;
            temp -> next = createNode;
            cout<<"Value is Inserted = "<<value<<"after the key location"<<endl;
        }
    }
    void deleteBeg(){
        if(head != NULL){
            Node* temp = head;
            head = temp -> next;
            free(temp);
            cout<<"Deleted the first Node"<<endl;
        }
        cout<<"Linkedlist is empty, can not delete"<<endl;
    }
    void deleteEnd(){
        if(head != NULL){
            Node* temp = head;
            Node* p = NULL;
            while(temp -> next != NULL){
                p = temp;
                temp = temp -> next;
            }
            p -> next == NULL;
            delete  temp;
            cout<<"Deleted the last Node"<<endl;
            
        }
        else{
            cout<<"Linkedlist is empty, can not delete"<<endl;
        }
    }
    void deleteLocation(int key){
        if(head == NULL){
            cout<<"Empty Linkedlist, can not delete"<<endl;
        }
        Node* temp = head;
        Node* p = NULL;
        while(temp -> data != key){
            p = temp;
            temp = temp -> next;
        }
        p -> next = temp -> next;
        free(temp);
        cout<<"Deleted"<<endl;
    }
    void display(){
        if(head != NULL){
            Node* temp = head;
            
            while(temp != NULL){
                cout<<temp -> data<<" ";
                temp = temp -> next;
            }

        }
        cout<<"Empty Linkedlist, can not display anything"<<endl;
    }
    void search(int key){
        if(head == NULL){
            cout<<"Empty Linkedlist"<<endl;
            return ;
        }
        else{
            Node* temp = head;
            while(temp -> next != NULL){
                if(temp -> data == key){
                    cout<<"Your data "<<temp -> data<<" is found"<<endl;
                    break;
                }
                else{
                    temp = temp -> next;
                }
            }
            if(temp -> next == NULL && temp -> data != key){
                cout<<"Your data is not found"<<endl;
            }
        }
    }
    void bubbleSort(){
        if(head == NULL){
            cout<<"Empty Linkedlist"<<endl;
            return;
        }
        else{
            int swap;
            Node* current;
            Node* last = NULL;
            do{
                swap = 0;
                current = head;
                while(current -> next != NULL){
                    if(current -> data > (current -> next) -> data){
                        int temp = current -> data;
                        current -> data = (current -> next) -> data;
                        current -> next -> data = temp;
                        swap = 1;
                    }
                    current = current -> next;
                }
                last = current;
            }while(swap);
        }
    }
};

int main(){
    Linkedlist l;
    int c,val;
    do{
    cout << "-----------------------\n";
		cout << "1. Insert at the beginning\n";
		cout << "2. Insert at the end\n";
		cout <<"3. Insert at any position\n";
		cout << "4. Delete from Beginning\n";
		cout << "5. Delete from End\n";
		cout<< "6. Delete any element\n";
		cout << "7. Display\n";
        cout<<"8. Exit"<<endl;
        cout<< "9. search"<<endl;
        cout<< "10. Bubble sort"<<endl;
        cout<<"Please Enter your choice = "<<endl;
        cin>>c;
        switch(c){
            case 1:
			cout << "Enter the data: ";
			cin >> val;
			l.insertBeg(val);
			break;
		case 2:
			
			cout << "Enter the data: ";
			cin >> val;
			l.insertEnd(val);
			break;
		case 3:
			cout<<"Enter the value after that you want to add : ";
			cin>>val;
			l.insertLocation(val);
			break;
		case 4:
			l.deleteBeg();
			break;
		case 5:
			l.deleteEnd();
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
        case 9:
            int k;
            cout<<"Enter that you want to search : "<<endl;
            cin>>k;
            l.search(k);
        case 10:
            cout<<"Before sorting "<<endl;
            l.display();
            l.bubbleSort();
            cout<<"After sorting "<<endl;
            l.display();
            break;
        default: cout<<"Invalid Input!!!Error."<<endl;
                 break;
        }
    }while(c != 10);
    return 0;
}