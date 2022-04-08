#include <iostream>
using namespace std;
int main()
{
	string s,a,c;
	cin>>s;
	//s= informatika   // i = 0-element
	//a=s.substr(x,y) = s satrning x - elementidan bowlab y ta elmentni a ga oldi
	a=s.substr(2,6);
	cout<<a;
	//  s="" => s satrni boshatadi;
	// s.empty()==s.size()==0 -> satr bo'shmi
	c=s.erase(2,6); // s satrning x - elementidan bowlab y ta elmentni o'chiradi
	cout<<endl<<c<<" "<<s;
}
