#include<bits/stdc++.h>
using namespace std;
vector <int> merge(vector<int>&arr1,vector<int>&arr2){
    int n=arr1.size();
    int m=arr2.size();
    vector<int> v1(m+n);
    int i=0;
    int j=0;
    int k=0;
    while(i<=n-1 && j<=m-1){
        if(arr1[i]<arr2[j]){
        v1[k]=arr1[i];
        i++;
        k++;
        }
    else{
        v1[k]=arr2[j];
        j++;
        k++;
    }
    }
    if(i==n){
        while(j<=m-1){
            v1[k]=arr2[j];
            k++;
            j++;
        }
    }
if(j==m){
    while(i<=n-1){
        v1[k]=arr1[i];
        i++;
        j++;
    }
}
return v1;
}
int main(){
vector<int>arr1;
arr1.push_back(1);
arr1.push_back(3);
arr1.push_back(5);
arr1.push_back(4);
arr1.push_back(9);

vector<int> arr2;
arr2.push_back(1);
arr2.push_back(1);
arr2.push_back(3);
arr2.push_back(5);
arr2.push_back(4);
arr2.push_back(9);
vector<int> v=merge(arr1,arr2);

for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
}
}