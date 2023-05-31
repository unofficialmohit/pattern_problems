#include<iostream>
using namespace std;
int main()
{
int n=8;
for(int i=0;i<n;i++)
{
for(int j=i;j<n-1;j++)
{
    cout<<" ";
}
for(int k=0;k<=i;k++)
{   if(k==0||k==i)
    cout<<"* ";
    else
    { cout<<"  ";}
}
cout<<endl;
}
for(int i=0;i<n;i++)
{   if(i==0)
    continue;

    for(int j=0;j<i;j++)
    {
        cout<<" ";
    }
    for(int k=0;k<n-i;k++)
    {   if(k==0 || k==(n-i-1))
        cout<<"* ";
        else
        cout<<"  ";
    }
    cout<<endl;
}
return 0;
}
