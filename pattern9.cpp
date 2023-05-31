#include<iostream>
using namespace std;
int main()
{
int n=5;
for(int i=0;i<n;i++)
{
for(int j=i;j<n-1;j++)
{
    cout<<" ";
}
for(int k=0;k<=i;k++)
{
    cout<<"* ";
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
    {
        cout<<"* ";
    }
    cout<<endl;
}
return 0;
}
