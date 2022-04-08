#include <iostream>
using namespace std;
int main()
{
	string s,b,c;
	int n;
	cin>>s>>b;
	//s.find(b) = s.find("info") s satr ichidan b satr (info) ni izlaydi.
	n=s.find(b); // s.find(b) qiymat qaytaradi agar mavjud bo'lsa b satr s ni ichida nechanchi elementdan boshlanganini
	// s=informatika b=format n=2
	if(n>=0&&n<=s.size()-b.size())
	{
		cout<<"YEs";
	}
	else cout<<"no";
	cout<<endl<<n<<endl;
	
	
	n=s.find(b,5);
	if(n>=0&&n<=s.size()-b.size())
	{
		cout<<"YEs";
	}
	else cout<<"no";
	cout<<endl<<n;
	
	
}
