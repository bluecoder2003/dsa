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
    int temp,j;
    for(int i=1;i<n;i++)
    {
        temp=arr[j];
        j=i-1;
        while(arr[j]>temp && j>0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j-1]=temp;
    }
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++)
    {
         cout<<arr[i]<<" ";
    }
   return 0;
}


























































//     {
//         key=arr[i];
//         j=i-1;
//         while(j>=0 && arr[j]>key)
//         {
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=key;
//     }
//     cout<<"Sorted array is: ";
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }