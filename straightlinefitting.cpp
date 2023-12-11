#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    double x[n],y[n],a1=n,a2=0,b1=0,b2=0,c1=0,c2=0;
    for(int i=0; i<n; i++){
        cin>>x[i]>>y[i];
        c1+=y[i];
        b1+=x[i];
        c2+=(x[i]*y[i]);
        b2+=(x[i]*x[i]);
    }
    a2=b1;

    double a,b;
    a=(c1*b2-c2*b1)/(a1*b2-a2*b1);
    b=(c1*a2-c2*a1)/(a2*b1-a1*b2);
    cout<<"b="<<b<<" c="<<a<<endl;
}