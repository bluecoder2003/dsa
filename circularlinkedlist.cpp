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
        
    }
    void insertend(int value)
    {
        
    }
    void insertLocation(int key)
    {
       
    }
    void deleteend()
    {
        
    }
    void deleteLocation(int key)
    {
       
    }
    void display()
    {
        
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
        cout<< "8. exit"<<endl;
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
            exit(0);           
            default: cout<<"Invalid Input!!!Error."<<endl;
            break;
        }
    } while (c!=8);
    return 0;
}
