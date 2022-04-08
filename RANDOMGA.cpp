#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
int a,n,l[101];
cin>>n;
for(int  i=0; i<=n; i++){
    cin>>l[i];
    }
srand(time(0));
a=rand()%n;

cout<<l[a];


}
}
