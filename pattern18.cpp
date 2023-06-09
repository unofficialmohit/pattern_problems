#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int n=5;
	for(int i=0;i<n+1;i++)
	{ cout<<"*";
		for(int j=1;j<=i;j++)
		{
			cout<<j;
			if(i==1)
			cout<<"*";
		}
		for(int k=i-1;k>0;k--)
		{
			cout<<k;
			if(k==1)
			{
				cout<<"*";
			}
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++)
	{
		cout<<"*";
		for(int j=1;j<n-i;j++)
		{
			cout<<j;
		}
		for(int k=n-i-2;k>0;k--)
		{
			cout<<k;
			if(k==1)
			{
				cout<<"*";
			}
		}
		if(i==n-2)
		cout<<"*";
		cout<<endl;
	}
	
return 0;
}