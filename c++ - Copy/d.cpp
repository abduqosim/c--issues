#include <iostream>
using namespace std;
int main()
{
	string s,b,c;
	int n=0,k;
	cin>>s;
	cout<<n<<endl;
	for(int i=0;i<s.size();i++)
	{
		k=int(s[i]-48);// char dan int ga otish
		n=n*10+k;
	}
	cout<<n;
	int j=6;
	char a=char ( j+48);
	cout<<endl <<"a="<<a;
}
