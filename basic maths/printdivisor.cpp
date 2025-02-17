#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
for(int i=1; i<=sqrt(t);i++){
    if(t%i==0){
cout<<i<<endl;
if((t/i)!=i)
{
    cout<<(t/i)<<endl;
}
    }
}
}