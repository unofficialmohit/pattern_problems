#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
int n=5;int x=1,y;
for(int i=0;i<n;i++)
{

for(int j=0;j<=i;j++)
{
	cout<<x;
	x=x+1;
	if(j!=i)
	cout<<"*";
}
	cout<<endl;	
}
for(int i=n;i>0;i--)
{
 x=x-i;
 y=x;
 for(int j=0;j<i;j++)
 {
 	cout<<y;
 	if(j!=i-1)
 	{
 		cout<<"*";
 	}
 	y=y+1;
 }
	cout<<endl;
}

return 0;
}