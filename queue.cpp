#include<iostream>
using namespace std;
#define MAX 5

class Queue
{
    int front, rear;
    int arr[MAX];

public:
    Queue() 
    {
        front=-1;
        rear=-1;
    }

    bool isFull()
    {
        return rear == MAX - 1;
    }

    bool isEmpty()
    {
        return front == rear;
    }

    void enqueue(int data)
    {
        if (!isFull())
        {
            arr[++rear] = data;
        }
        else
        {
            cout << "Queue is full\n";
        }
    }

    int dequeue()
    {
        if (!isEmpty())
        {
            return arr[++front];
        }
        else
        {
            cout << "Queue is empty\n";
            return -1;
        }
    }

    // void peek()
    // {
    //     if (!isEmpty())
    //     {
    //         cout << arr[front + 1] << "\n";
    //     }
    //     else
    //     {
    //         cout << "Queue is empty\n";
    //     }
    // }

    void display()
    {
        if (!isEmpty())
        {
            for (int i = front + 1; i <= rear; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << "Queue is empty\n";
        }
    }
};

int main()
{
    Queue q;
    int choice, data;
    do
    {
        cout << "1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter data: ";
            cin >> data;
            q.enqueue(data);
            break;

        case 2:
            data = q.dequeue();
            if (data != -1)
            {
                cout << "Deleted element is: " << data << "\n";
            }
            break;

        // case 3:
        //     cout << "Top element is: ";
        //     q.peek();
        //     break;

        case 4:
            cout << "Queue elements are: ";
            q.display();
            break;

        case 5:
            cout << "Exit\n";
            break;

        default:
            cout << "Invalid choice\n";
        }
    } while (choice != 5);

    return 0;
}