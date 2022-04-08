#include <iostream>
using namespace std;
int main()
{
	string s;
	cin>>s; // probelda uziladi
	//getline(cin,s); enterda uziladi
	int n=s.size(); // s.length();
	// s=sardor s0=s s1=a .. . s5= r;
	// raqamlar 48-57
	// kich harf 97-122
	// katta harf 65 -90
	//SaRdOr
	for(int i=0; i<n;i++)
	{
		if(s[i]>=97&&s[i]<=122) // islower(s[i])
		{
			s[i]=s[i]-32; // toupper(s[i])
		}
		else if(s[i]>=65&&s[i]<=90) // isupper(s[i])
		{
			s[i]=s[i]+32; // tolower(s[i])
		}
	}
	cout<<s;
}
