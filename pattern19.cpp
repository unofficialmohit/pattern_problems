#include<iostream>
using namespace std;
int main()
{
int n=6;
int abc[n][n];
abc[1][1]=1;
abc[1][0]=1;
cout<<"1"<<endl;
for(int i=0;i<n;i++)
{
    for(int j=0;j<=i;j++)
    {   if(j==i)
        {
            abc[i-1][j]=1;
        }   
        if(j==0)
        {abc[i][j]=1;}
        else
        {
            abc[i][j]=abc[i-1][j]+abc[i-1][j-1];
        }
        cout<<abc[i][j]<<"\t";
    }
    cout<<"1";
cout<<endl;

}
return 0;
}