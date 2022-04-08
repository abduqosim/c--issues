#include <iostream>
#include <cmath>
using namespace std;
 int main ()
 {
	int c=1,s=0,z,a[101],k,l,n,g=1,p=0,d=0,m,x,y;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
	cin>>a[i];	
    }
    for (int i=1;i<=n;i++)
    {k=a[i];
       for (int j=i;j<=n;j++)
       {
		       if(a[i]>k)
			{
				k=a[i];
				g=i;
		    }
	swap(a[g],a[j]);
	   }
	}
	
    	for (int i=1;i<=n;i++)
	{
	cout<<a[i]<<" ";	
    }
    
}

