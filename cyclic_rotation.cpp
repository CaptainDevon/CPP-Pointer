#include<iostream>
using namespace std;
int circular_shift(int *x,int *y,int *z)
{
    //taking three pointer variables
    int temp;
    temp=*x;
    *x=*y;
    *y=*z;
    *z=temp;
    return 0;
}
int main()
{
    int a,b,c;
    cout<<"enter the numbers";
    cin>>a>>b>>c;
    cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;
    circular_shift(&a,&b,&c);
    cout<<"a="<<a<<" b="<<b<<" c="<<c;
}