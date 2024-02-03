#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key: ";
    cin>>key;
    int i=0;
    while(i<n)
    {
        if(arr[i]==key)
        {
            cout<<"Key found at index "<<i<<endl;
            break;
        }
        else
        {
            i++;
        }
    }
    if(i==n)
    {
        cout<<"Key not found"<<endl;
    }
    return 0;
}