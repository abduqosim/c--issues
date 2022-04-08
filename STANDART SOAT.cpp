#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
int main ()
{
int usekund=time (0);
int jsekund=usekund%60;
int uminut=usekund/60;
int jminut=uminut%60;
int usoat=uminut/60;
int jsoat=usoat%24;
cout<<jsoat<<":"<<jminut<<":"<<jsekund;	
	
	
	
	
	
	
	
	
	
}
