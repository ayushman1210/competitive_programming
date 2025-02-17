#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
int count=0;
cin>>t;
while(t>0){
    t=t/10;
    count++;
}
cout<<count;
}