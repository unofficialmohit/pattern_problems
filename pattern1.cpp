#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Rows";
    cin>>n;
for(int i=0;i<=n;i++)
{
    for(int j=i;j>0;j--)
    {
        cout<<"*";
    }
cout<<endl;
}

return 0;
}