#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=0;i<n;i++)    //i is for rows
    {
        for(int j=0;j<=i;j++)   //j is for columns
        {   char ch=j+'A';
            cout<<ch;
        }
        for(int j=i-1;j>=0;j--)
        {   char ch=j+'A';
            cout<<ch;
        }
        
        cout<<endl;
    }
    return 0;
}