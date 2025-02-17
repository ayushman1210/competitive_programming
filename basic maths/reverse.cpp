#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
int ld=0;
int rev=0;
cin>>t;
while(t>0){
    ld=t%10;
     t=t/10;
    rev=rev*10+ld;
}
cout<<rev;
}