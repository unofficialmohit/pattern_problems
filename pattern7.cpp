#include<iostream>
using namespace std;
int main()
{
int i,j,k,a,n=1;
printf("Enter ROWS ");
scanf("%d",&a);
for(i=0;i<a;i++)
{
    for(j=a;j>i;j--)
    {
        cout<<" ";
    }

   for(k=0;k<n;k++)
   {
    cout<<"*";
   }

   n=n+2;
   cout<<endl;
}
return 0;
}