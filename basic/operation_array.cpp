#include<iostream>
#define maxsize 50
using namespace std;

void insert(int *arr,int size,int x,int pos)
{
    if(pos<0 || pos>size)
    {
        cout<<"invalid position"<<endl;
        return;
    }
    else if(size>maxsize)
    {
        cout<<"insertion not possible";
        return;
    }

}

int main()
{
    int n;
    cout<<"enter size of an array";
    cin>>n;
    int arr[maxsize]={0};
    while(1)
    {
        cout<<"\n1.Insert"<<endl<<
        "2.Update"<<endl<<
        "3.Search"<<endl<<
        "4.Remove"<<endl<<
        "5.Display"<<endl<<
        "6.Exit"<<endl;
        int ch;
        cout<<"enter choice";
        cin>>ch;
        switch(ch)
        {
            case 1:
            int key,pos;
            cout<<"enter element to insert";
            cin>>key;
            cout<<"enter position";
            cin>>pos;
            insert(arr,n,key,pos);
            break;
        }
    }
}
