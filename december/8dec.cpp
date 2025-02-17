#include<bits/stdc++.h>
using namespace std;
int main(){
    // int m;
    // int n;
    // cin>>m>>n;
    // int res=(m*n)/2;
    // cout<<res<<endl;
 
 // multiplication of matrix 
 int n;
 int m;
 int p;
 int q;
 cin>>n>>m;
 cout<<"enter the second row and coloumn";
 cin>>p>>q;
  if(m==p){
 int arr[n][m];
 for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>arr[i][j];
    }
 }
 int arr1[p][q];
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>arr1[i][j];
    }
    }
    int res[n][q];
    for(int i=0; i<n; i++){
        for(int j=0; j<q; j++){
            res[i][j]=0;
        for(int k=0; k<p; k++){
            res[i][j]=arr[i][k]*arr1[k][j];
        }
        }
    
 }
  for(int i=0; i<n; i++){
        for(int j=0; j<q; j++){
           cout<<res[i][j]<<" ";
        }
    cout<<endl;
}
}
else{
    cout<<"matrice not found ";
}

}