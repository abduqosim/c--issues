#include <iostream>
#include <cmath>
k[10];
using namespace std;

int f(int a, int b)
{
    int i = 0;
 if(a == b)
 {
     return 1;
 }
 else{
     k[i] = a;
     i++;
     return f(a + 1, b)
 }
}



 int main ()
{
    int a, b;
    cin >> a >> b;
    f(a, b);
    for(int i = 0; i < b; i++){
        cout << k[i];

    }
}      

