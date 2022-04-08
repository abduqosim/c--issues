#include <iostream>
#include <cmath>
using namespace std;
 int main ()
{
	int a,b,c=0,d[10001],e=0,f=0,g=0,h=0,j=0,k,l;
	cin>>a>>k;
	
	for (int i=1;i<=a;i++)
		{
		    cin>>d[i];
		}
	for (int j=1;j<=a;j++)
	{
if (k<d[j])
{
	e++;
}
	}
	cout<<e;	
}
