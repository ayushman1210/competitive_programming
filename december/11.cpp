#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
int x;
cin>>t;
while(t--){
    cin>>x;
    int count=0;
    int a=x-1;
    int b=1;
    while(a>0){
    if(a>b && a+b==x){
        count++;
        a--;
        b++;
    }
    else{
        a--;
        b++;
    }
    }
    cout<<count<<endl;
    }
}