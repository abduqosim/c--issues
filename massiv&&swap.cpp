#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;
 int main ()
 {
double a[100001],b,c,f=0,g,h=0,j,n;
cin>>n;
for (int r=1;r<=n;r++)
{
	cin>>a[r];
}
for (int i=1;i<=n;i++)
    {
	for(int j=i+1;j<=n;j++)
	{f++;
	if(a[i]>a[j])
	{
		swap(a[i],a[j]);
		h++;
		}
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<h<<endl;
	cout<<f<<endl;
			
	}
	}		
}
