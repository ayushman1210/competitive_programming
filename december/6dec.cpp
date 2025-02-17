#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    int n;
    int re;
    cin>>n; 
    cin>>k;
    int count=0;
    int arr[n];
    for(int i=0; i<n; i++){
         cin>>arr[i];
          re=arr[k];
    }
    for(int i=0; i<n; i++){
      
    if(arr[i]>=re && arr[i]>0)
        count++;
        else
        continue;
    }
cout<<count;
}