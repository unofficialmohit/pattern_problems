#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"ENTER VALUE OF N";
cin>>n;
for(int i=n;i>0;i--)
{

for(int j=n;j>=i;j--)
{
cout<<j;
}
for(int k=(((i-2)*2)+1);k>=1;k--)
{
    cout<<i;
}
for(int m=i;m<=n;m++)
{   if(m==1 )
    {
     continue;
    }
    cout<<m;
}
cout<<endl;
}
for(int i=2;i<=n;i++)
{
    for(int j=n;j>i;j--)
    {
        cout<<j;
    }

    for(int k=0;k<(((i-1)*2)+1);k++)
    {   
        cout<<i;
       
        
    }
    for(int m=i+1;m<=n;m++)
    {
        cout<<m;
    }
    cout<<endl;
}
}