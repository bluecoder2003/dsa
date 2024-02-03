#include<iostream>
using namespace std;
int merge(int a[],int lb,int mid,int ub)
{
   int i=lb;
   int j=mid+1;
   int k=lb;
   int b[ub+1];
   while(i<=mid && j<=ub)
   {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            k++;
            i++;
        }
        else
        {
            b[k]=a[j];
            k++;
            j++;
        }
   }
   if(i>mid)
   {
        while(j<=ub)
        {
            b[k]=a[j];
            k++;
            j++;
        }
   }
   else
   {
        while(i<=mid)
        {
            b[k]=a[i];
            k++;
            i++;
        }
   }
   for (i = lb; i <= ub; i++) {
        a[i] = b[i];
    }

}
int mergesort(int a[],int lb, int ub)
{
    if(lb<ub)
    {
        int mid=(lb+ub)/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    mergesort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}