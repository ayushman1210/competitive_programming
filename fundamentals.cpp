// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fact(int x){
    int res=1;
    for(int i=2; i<=x; i++){
        res=res*i;
    }
 return res;
}
int main(){
//    int x;
//    char c='a';
//    cin>>x;
//    cout<<abs(x);
//    cout<<int(c);
// int a=2;
// int b=3;
// int pow=1;
// for(int i=1; i<=b; i++){
//     pow=pow*a;
// }
// cout<<pow;

// combination and permutation 
int n; 
int r;
cin>>n>>r;
int nfact=fact(n);
int rfact=fact(r);
int nrfact=fact(n-r);

int ncr=nfact/(rfact*nrfact);
cout<<ncr;
}

