#include<iostream>
using namespace std;

int factorial(int n,int acc=1)
{
    if(n==0)
    {
        return acc;
    }
    else
    {
        return factorial(n-1,n*acc);
    }
}
int main()
{
    int num;
    cout<<"enter integer";
    cin>>num;
    cout<<"factorial of "<<num<<" = "<<factorial(num);
    return 0;
}