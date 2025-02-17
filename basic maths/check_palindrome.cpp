#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
int ld=0;
int rev=0;
cin>>t;
int dup=t;
while(t>0){
    ld=t%10;
     t=t/10;
    rev=rev*10+ld;
}
if(dup==rev) cout<<"palindrome";
else cout<<t<<rev;
}