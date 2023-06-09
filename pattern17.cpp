#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int n=5;
	for(int i=1;i<=n;i++)
	{
		for(int j=(2*n-2);j>=i;j--)
		{
			cout<<"*";
		}
		for(int k=1;k<=i;k++)
		{
			if(i==0)
			cout<<i;
			else 
			{
			cout<<i;
			if(k!=i)
			cout<<"*";
			}
		}
		for(int x=(2*n-2);x>=i;x--)
		{
		 cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}