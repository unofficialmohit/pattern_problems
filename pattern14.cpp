#include<iostream>
using namespace std;
int main()
{   int n=5;
    int x=1,y=1;
    for(int i=n;i>0;i--)
    {
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=x;k<=(2*x)-1;k++)
        {
            cout<<k;
        }
        if(i!=n)
        {
        for(int l=(2*(y-1));l>=y;l--)
        {
            cout<<l;
        }
        
        }
        x=x+1;
        y=y+1;
        cout<<endl;
    }
    return 0;
}