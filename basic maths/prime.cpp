#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
bool flag=false;
for(int i=2; i<t; i++){
    if(t%i==0) {
        flag=true;
    }
    else{flag=false;
    } 
}
if(flag==true) cout<<"not prime";
else{cout<<"prime";}
}