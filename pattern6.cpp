#include<iostream>
using namespace std;
int main()
{
int n=6;
for(int i=0;i<=n;i++)
{
    for(int j=i;j<n;j++)
    {
        cout<<" ";
    }
    for(int x=0;x<i;x++)
    {
        cout<<"* ";
    }
    cout<<endl;
}
}