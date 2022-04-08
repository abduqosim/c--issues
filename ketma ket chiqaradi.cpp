#include <iostream>
#include <cmath>
using namespace std;
 int main ()
{
	int a,b,c=0,d[5001],e,f,g,h,j,k,l,i;
	cin>>a;
    for (int i=1;i<=a;i++)
    {
    	cin>>d[i];
    	c=c*10+d[i];
	}
	cout<<c;
}
