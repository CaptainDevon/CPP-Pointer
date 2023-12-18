# include <iostream>
using namespace std;
void swapr ( int *x, int *y )
{
int t ;
t = *x ;
*x = *y ;
*y = t ;
} 
int main( )
{
int a = 10, b = 20 ;
cout<<"a= "<<a<<" b= "<<b<<endl;
swapr ( &a, &b );
cout<<"a= "<<a<<" b= "<<b;
return 0 ;
}
