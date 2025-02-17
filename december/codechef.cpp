#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int n;
    int k;
    while(t--){
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n-1; i++){
         int j=k-arr[i];
         if(j==0){
            cout<<"0"<<endl;
         }else{
            j%arr[i+1]
         }
    }
    }

}