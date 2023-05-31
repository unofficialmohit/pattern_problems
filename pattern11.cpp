#include<iostream>
using namespace std;
int main()
{   int n=10;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout<<"*";
        }
        for(int k=0;k<=2*i;k++)
        {
            cout<<" ";
        }
        for(int x=0;x<n-i;x++)
        {
            cout<<"*";
        }
    cout<<"\n";
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        for(int k=0;k<2*n-2*i-1;k++)
        {
            cout<<" ";
        }
        for(int x=0;x<=i;x++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}