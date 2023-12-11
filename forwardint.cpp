#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    double xvalues[n];
    for(int i=0; i<n; i++){
        cin>>xvalues[i];
    }
    double diff_table[n][n];
    for(int i=0; i<n; i++){
        cin>>diff_table[0][i];
    }
    for(int i=1; i<n; i++){
        for(int k=0; k<n-i; k++){
            diff_table[i][k] = diff_table[i-1][k+1]-diff_table[i-1][k];
        }
    }
    for(int i=0; i<n; i++){
        for(int k=0; k<n-i; k++){
            cout<<diff_table[i][k]<<" ";
        }
        cout<<endl;
    }
    cout<<"enter position to calculate:";
    double x;
    cin>>x;
    double u=(x-xvalues[0])/(xvalues[1]-xvalues[0]);

    double res=diff_table[0][0],u_products=1;
    for(int i=0; i<n-1; i++){
        u_products=u_products*(u-i)/(i+1);
        res=res+u_products*diff_table[i+1][0];
    }

    cout<<"Forward:"<<res<<endl;

    u=(x-xvalues[n-1])/(xvalues[1]-xvalues[0]);
    res=diff_table[0][n-1];
    u_products=1;
    for(int i=0; i<n-1; i++){
        u_products=u_products*(u+i)/(i+1);
        res=res+u_products*diff_table[i+1][n-i-2];
    }
    cout<<"Backward:"<<res<<endl;
}

/*
6
1911 1921 1931 1941 1951 1961
12 15 20 27 39 52
 1946*/
