#include<bits/stdc++.h>
#define f(x) 1/(1+x*x)
using namespace std;


int main()
{
    double low,up,n;
    cin>>low>>up>>n;

    double step = (up-low)/n;
    double ans = f(up)+f(low);
    ans = ans/2;

    for(double i=1;i<n ; i++)
    {
        double x = low + i*step;
        ans+=f(x);
    }
    //simpson 1/3
    ans = ans;
    for(double i=1;i<n ; i++)
    {
        double x = low + i*step;
        if(int(i)%2!=0) ans +=4*f(x);
        else ans+=2*f(x);
    }

    //simpspn 3/8
    ans = ans;
    for(double i=1;i<n ; i++)
    {
        double x = low + i*step;
        if(int(i)%3!=0) ans +=3*f(x);
        else ans+=2*f(x);
    }
    cout<<ans*step<<endl;

    return 0;+
}
