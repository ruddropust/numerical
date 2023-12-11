#include<bits/stdc++.h>
using namespace std;
#define d double
#define error 0.00001

double f(double x)
{
    return 3*x-cos(x)-1;
}
double fdot(double x)
{
    return 3 + sin(x);
}
double newton_raphson(double x)
{
        d x1,e;
        do{
            x1 = x- (f(x)/fdot(x));
            x=x1;
        }while(abs(f(x)-f(x1))>=error);
        return x;
}

int main()
{
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Result: "<<newton_raphson(a)<<endl;

    return 0;
}

