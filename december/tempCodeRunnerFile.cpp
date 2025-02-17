#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int n;
int count=0;
int rec=0;
while(t--){
    cin>>n;
    if(rec==0){count=count*0;}
    if(n<0){
   rec=rec+n; 
   count++;
    }
    else{rec=rec+n;
    }
    }
    cout<<count;
}