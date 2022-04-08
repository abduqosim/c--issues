#include <iostream>
#include <string>
	using namespace std;
	int main()
	{
		int a,i=0;
		string d,  l="";
		cin>>d;
		a=d.length();
		while(i<a)
		{
			if(d[i]!='0')
			{
				l+=d[i];
			}
			i++;
		}
		cout<<l;
	}

