#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,b,c,d,e,f,l,k;
cin>>a>>b;
c=a/10;//10lar xonasi
d=c*10;
e=a-d;//1lar xonasi
f=b/10;//10lar
l=f*10;
k=b-l;//1lar
if ((c==f&&e==k)||(k==c&&f==e))
cout<<"100%";
else if (c==f||e==k||k==c||f==e)
cout<<"50%";
else if (c!=f&&e!=k&&k!=c&&f!=e)
cout<<"0%";


	
}
