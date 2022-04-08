#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
int n;
double a;
cout<<"Hafta kunini belgilang: "<<endl;
cin>>n;
a=n%7;
switch (n)
{
case 0: cout<<"yakshanba";break;	
case 1: cout<<"dushanba";break;
case 2: cout<<"seshanba";break;
case 3: cout<<"chorshanba";break;
case 4: cout<<"payshanba";break;
case 5: cout<<"juma";break;
case 6: cout<<"shanba";break;
default: "bunday kun yo`q";break;	
}

	
}
 
