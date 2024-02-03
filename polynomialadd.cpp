#include<iostream>
using namespace std;
class polynomial
{
    int a[10],b[10],c[10],i,j,k,m,n;
    public:
    void getdata();
    void add();
    void display();
};
void polynomial::getdata()
{
    cout<<"Enter the degree of first polynomial:";
    cin>>m;
    cout<<"Enter the degree of second polynomial:";
    cin>>n;
    cout<<"Enter the coefficients of first polynomial:";
    for(i=0;i<=m;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the coefficients of second polynomial:";
    for(j=0;j<=n;j++)
    {
        cin>>b[j];
    }
}
void polynomial::add()
{
    if(m>n)
    {
        for(i=0;i<=m;i++)
        {
            c[i]=a[i];
        }
        for(i=0;i<=n;i++)
        {
            c[i]=c[i]+b[i];
        }
    }
    else
    {
        for(i=0;i<=n;i++)
        {
            c[i]=b[i];
        }
        for(i=0;i<=m;i++)
        {
            c[i]=c[i]+a[i];
        }
    }
}
void polynomial::display()
{
    cout<<"The sum of the two polynomials is:";
    for(i=0;i<=m;i++)
    {
        cout<<c[i]<<"x^"<<i<<"+";
    }
    cout<<endl;
}
int main()
{
    polynomial p;
    p.getdata();
    p.add();
    p.display();
    return 0;
}