
#include<bits/stdc++.h>
using namespace std;
#define d double
#define error 0.00001

double f(double x)
{
    return 3*x - cos(x)-1;
}
double regular_falsi(double a,double b)
{
        double mid;

    if(f(a)*f(b)>=0.0) return 0;
    while(abs(b-a)>=error){
        mid = (a*f(b)-b*f(a))/(f(b)-f(a));

        if(f(mid)*f(a)<0) b=mid;
        else a=mid;
    }

    return mid;
}

int main()
{
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Result: "<<regular_falsi(a,b)<<endl;

    return 0;
}
