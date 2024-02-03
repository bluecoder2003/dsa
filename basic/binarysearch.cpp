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
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
        {
            cout<<"Key found at index "<<mid<<endl;
            break;
        }
        else if(arr[mid]>key)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(low>high)
    {
        cout<<"Key not found"<<endl;
    }
    return 0;
}