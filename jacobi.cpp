#include<bits/stdc++.h>
using namespace std;
#define f1(x,y,z) x+y
#define f2(x,y,z) x-y
#define f3(x,y,z) z


int main()
{
    float e;
    cout<<"Enter error recive: ";
    cin>>e;
    float x,y,z,e1,e2,e3;
    float x0=0,y0=0,z0=0;

    do{
        x= f1(x0,y0,z0);
        y= f2(x0,y0,z0);
        z= f3(x0,y0,z0);

        e1 = abs(x-x0);
        e2 = abs(y-y0);
        e3 = abs(z-z0);

        x0=x;
        y0=y;
        z0=z;
    }while(e1>e && e2>e && e3>e);


    cout<<"Root: "<<x<<" "<<y<<" "<<z<<endl;
    return 0;
}
