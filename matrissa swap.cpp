#include <iostream>
#include <cmath>
using namespace std;
 int main ()
 {
int a[101],b,c,d[101][101],k[101][101],t,h,n;
cin>>n>>t>>h;

for (int i=1;i<=n;i++)
{
	cin>>a[i];
}

for (int i=1;i<=t;i++)
for (int j=1;j<=h;j++)
{
	cin>>d[i][j];	
}

for (int i=1;i<=t;i++)
for (int j=1;j<=h;j++)
{
	if (a[i][j]%2==0)
		{
			break;
		}
		else
		{
			cout<;
		}		
}

for (int i=1;i<=t;i++)
for (int j=1;j<=h;j++)
{
	cout<<k[i][j];	
}
}
