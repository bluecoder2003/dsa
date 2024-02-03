#include<iostream>
using namespace std;
int main()
{
    int n,i,j,temp,min;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;           
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    cout << "Sorted array: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";   
    }
    return 0;
}