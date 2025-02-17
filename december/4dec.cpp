#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
int n;
int k;
   int sum=0;
   cin>>t;
while(t--){
 
    cin>>n>>k;
    for(int i=0; i<n; i++){
        if(i%2==0){
        sum+=1;
        }
        else{
        sum+=0;
        }
   cout<<sum<<endl;
    }
    if(sum==k){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

}