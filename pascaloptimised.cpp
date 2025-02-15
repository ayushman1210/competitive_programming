#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
for(int i=0; i<=t; i++){
    int cur=1;
    for(int j=0; j<=i; j++){
        cout<<cur<<" ";
        cur=cur*(i-j)/(j+1);
    }
    cout<<endl;
}

}