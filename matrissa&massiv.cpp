x#include <iostream>
#include <cmath>
using namespace std;
 int main ()
 {
	double c,m,z,a[101][101],k,l,n,g[101],d=0;
	int p=0,s=0;
	cin>>l;
    for (int i=1;i<=l;i++)
    {
    cin>>g[i];
	}
	cin>>n>>m;
	for (int j=1;j<=n;j++)
	{
		for (int r=1;r<=m;r++)
		{
			s++;
			if (l<s)
			{
				a[j][r]=0;
			}
			else 
			{
			a[j][r]=g[s];
			}
			
		}
	}
		for (int j=1;j<=n;j++)
		{
			for (int r=1;r<=m;r++)
			{
			cout<<a[j][r]<<" ";
			}
			cout<<endl;
		}	
}
