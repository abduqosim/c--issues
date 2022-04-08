#include <iostream>

using namespace std;
int main()
{
int a,b,c;
cin>>a>>b>>c;
int d=c/a,f=c/b;
for(int i=0;i<d;i++)
{
  if((c-i*a)%b==0)
  {
    cout<<1;
    return 0;
  }
}
for(int i=0;i<f;i++)
{
  if((c-i*b)%a==0)
  {
    cout<<1;
    return 0;
  }
}
cout<<-1;
}
