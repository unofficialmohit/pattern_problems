#include<iostream>
using namespace std;
int main()
{
int n;
int a=2,b=1,c=1;
cout<<"Enter Number of Rows";
cin>>n;
for(int i=0;i<n-1;i++)
{
    for(int j=n;j>i;j--)
    {
        cout<<" ";
    }
    cout<<"1";
    if(i!=0)
    {
    for(int j=0;j<b;j++)
    {   
        cout<<" ";
    }
    b=b+2;
    cout<<a;
    a=a+1;
    }
    
    cout<<endl;
}
for(int i=1;i<=((n*2)-1);i++)
{   
    if(i==1)
    {
        cout<<" ";
    }
    if((i%2)!=0)
    {
        cout<<c;
        c=c+1;
    }
    else
    {
        cout<<" ";
    }
}

    return 0;
}