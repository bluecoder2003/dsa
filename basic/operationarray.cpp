#include<iostream>
#define maxsize 50
using namespace std;


void insert(int *arr, int size, int x, int pos) {
  if (pos < 0 || pos > size) 
  {
    cout << "Invalid Position" << endl;
    return;
  } 
  else if (size > maxsize) 
  {
    cout << "Insertion not possible" << endl;
    return;
  } 
  else 
  {
    for (int i = size - 1; i >= pos; i--) 
    {
      arr[i + 1] = arr[i];
    }
    arr[pos] = x;
    size++;
  }
}

void update(int *arr, int n, int x, int k) {
  if (k >= 0 && k <= n - 1) {
    arr[k] = x;
  }
  else {
    cout << "Invalid Position" << endl;
  }
}
void remove (int* arr,int size,int pos){
     if(pos<0 || pos>size){
        cout<<"Invalid Position"<<endl;
    }
    for(int i=pos;i<=size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;
}
void display(int* arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void search(int* arr,int n,int key){
    
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"The search element is found "<<i<<" position"<<endl;

        }
        else{
            cout<<"The search element is not found "<<endl;
        }
    }

}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[maxsize]={0};
    while(1){
        cout<<"\n1.Insert"<<endl<<
        "2.Update"<<endl<<
        "3.Search"<<endl<<
        "4.Remove"<<endl<<
        "5.Display"<<endl<<
        "6.Exit"<<endl;
        int ch;
        cout<<"Enter your choice"<<endl;
        cin>>ch;
        switch(ch){
            case 1:
                    int key,pos;
                     cout<<"Enter the element you want to insert"<<endl;
                     cin>>key;
                     cout<<"Enter the position: "<<endl;
                     cin>>pos;
                     insert(arr,n,key,pos);
                     break;
            case 2:
                    int k,p;
                     cout<<"Enter the element you want to update"<<endl;
                     cin>>k;
                     cout<<"Enter the position: "<<endl;
                     cin>>p;
                     update(arr,n,k,p);
                     break;
            case 3:
                    int d;
                    cout<<"Enter the search element: "<<endl;
                    cin>>d;
                    search(arr,n,d);
                    break;
            case 4:
                    int po;
                    cout<<"Enter the position from where you want to delete the data: "<<endl;
                    cin>>po;
                    remove(arr,n,po);
                    break;
            case 5:
                    cout<<"The array elements are: "<<endl;
                    display(arr,n);
                    break;
            case 6:
                    exit(0);
        }

    }
}