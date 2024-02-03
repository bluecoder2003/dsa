#include<iostream>
using namespace std;
#define MAX 5

class Stack
{
    int top;
    int arr[MAX];

public:
    Stack()
    {
        top=-1;
    }

    bool isFull()
    {
        return top == MAX - 1;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    void push(int data)
    {
        if (!isFull())
        {
            arr[++top] = data;
        }
        else
        {
            cout << "Stack is full\n";
        }
    }

    void pop()
    {
        if (!isEmpty())
        {
            top--;
        }
        else
        {
            cout << "Stack is empty\n";
        }
    }

    void peek()
    {
        if (!isEmpty())
        {
            cout << arr[top] << "\n";
        }
        else
        {
            cout << "Stack is empty\n";
        }
    }

    void display()
    {
        if (!isEmpty())
        {
            for (int i = 0; i <= top; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << "Stack is empty\n";
        }
    }
};

int main()
{
    Stack s;
    int ch, data;
    do
    {
        cout << "\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the data: ";
            cin >> data;
            s.push(data);
            break;

        case 2:
            s.pop();
            break;

        case 3:
            s.peek();
            break;

        case 4:
            s.display();
            break;

        case 5:
            exit(0);
            break;

        default:
            cout << "Invalid choice\n";
            break;
        }
    } while (ch != 5);

    return 0;
}