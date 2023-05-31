#include<iostream>
using namespace std;
int main()
{   int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {   
            if(i!=j)
            cout<<j<<"*";
            else
            cout<<j;
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {   if(j!=n)
            cout<<j<<"*";
            else
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}