#include<iostream>
using namespace std;

int fibonacci(int n, int a=0,int b=1)
{
    if(n==0)
    {
        return a;
    }
    else
    {
        return fibonacci(n-1,b,a+b);
    }
}

int main()
{
    int n;
    cout<<"enter position of fibonacci number u want to find";
    cin>>n;
    cout<<"the"<<n<<"th fibonacci number is:"<<fibonacci(n)<<endl;
}