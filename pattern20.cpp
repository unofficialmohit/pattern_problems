#include<iostream>
using namespace std;
int main()
{
int n=7;
for(int i=0;i<n;i++)
{
    for(int j=i;j<n-1;j++)
    {
        cout<<" ";
    }
    for(int j=0;j<=i;j++)
    {
        cout<<"* ";
    }
    cout<<endl;
}
for(int i=2;i<n;i++)
{
    for(int j=i;j<n-1;j++)
    {
        cout<<" ";
    }
    for(int j=0;j<=i;j++)
    {
        cout<<"* ";
    }
    cout<<endl;
}
for(int i=0;i<n-n/4;i++)
{   if(n%2!=0)
    {
        cout<<" ";
    }
    for(int j=0;j<n/2;j++)
    {
        cout<<" ";
    }
    for(int j=0;j<n/2;j++)
    {
        cout<<"* ";
    }
    cout<<endl;
}
    return 0;
}