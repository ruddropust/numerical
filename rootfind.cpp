#include<bits/stdc++.h>
using namespace std;
#define db double
#define error .00001
double f(double a){
    return a*a*a-a*a+2;
}

double fdot(db a){
    return 3*a*a-2*a;
}

double bi_sec(db a, db b){
    if(f(a)*f(b)>=0){
        return 1234567890;
    }
    db middle;
    while((b-a)>=error){
        middle=(b+a)/2;
        if(f(middle)*f(a)<0)
            b=middle;
        else
            a=middle;
    }
    return middle;
}

double false_position(db a, db b){
    if(f(a)*f(b)>=0){
        return 1234567890;
    }
    db middle;
    while((b-a)>=error){
        middle=(a*f(a)-b*f(b))/(f(a)-f(b));
        if(f(middle)*f(a)<0)
            b=middle;
        else
            a=middle;
    }
    return middle;
}

double n_raphson(double x){
    db x1,e;
    do{
        x1=x-(f(x)/ fdot(x));
        e=abs(f(x)-f(x1));
        x=x1;
    }while(e>=error);
    return x;
}
int main(){
    cout<<bi_sec(-200,300)<<endl<<false_position(-200,300)<<endl<<n_raphson(1);

}