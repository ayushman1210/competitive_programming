#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int dup=t;
int ld=0;
int sum=0;
while(t>0){
   
    ld=t%10;
     t=t/10;
     sum+=ld*ld*ld;
}
if(dup==sum) cout<<"true";
else cout<<"false";
}