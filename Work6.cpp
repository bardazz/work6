//Gerasimenko Vladislav COI-21-1//
#include <iostream>
#include <math.h>
using namespace std;
void equation( double *a, double *b);
int main()
{
double a,b,x;
cout << "Enter 1-st number: " << endl;
    cin >> a;
    cout << "Enter 2-st number: " << endl;
    cin >> b;
if (a==0)
   {
   if (b==0)
   cout << "Bezlich \n ";
   else 
   cout << "Nema \n ";
   }
else
   {
if (a!=0&b!=0)
x=-(a/b);
cout << x;
   }
return 0;
}


