#include<bits/stdc++.h>
using namespace std;
int main(){
// int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
// int arr[3][3]={1,2,3,4,5,6,7,8,9};
// cout<<arr[0][2];

// input taken 

// int n; 
// cout<<"enter no. of rows ";
// cin>>n;
// int m;
// cout<<"enter no. of of coloumns";
// cin>>m;
// int arr[n][m];
// for(int i=0; i<n; i++){
//     for(int j=0; j<m; j++){
//         cin>>arr[i][j];
//     }
// }
// for(int i=0; i<n; i++){
//     for(int j=0; j<m; j++){
//         cout<<arr[i][j]<<endl;
//     }
// }

// roll number and mark obtained 
// int n;
// int m;
// cin>>n;
// cin>>m;
// int arr[n][m];
// for(int i=0; i<n; i++){
//     for(int j=0; j<m; j++){
//         cin>>arr[i][j];
//     }
// }
// for(int i=0; i<n; i++){
//     for(int j=0; j<m; j++ ){
//         cout<<arr[i][j];
//     }
//     cout<<endl;
// }

// largest element of a given array
// sum of the element of the array 
// int n;
// int m;
// cin>>n;
// cin>>m;
// int arr[n][m];
// for(int i=0; i<n; i++){
//     for(int j=0; j<m; j++){
//         cin>>arr[i][j];
//     }
// }
// // int max=arr[0][0];
// int sum=0;
// for(int i=0; i<n; i++){
//     for(int j=0; j<m; j++){
//         // if(arr[i][j]>max)
//         // max=arr[i][j];
//         // else
//         // continue;
//         sum+=arr[i][j];
//     }
// }
// // cout<<max;
// cout<<sum;

int n;
int m;
// int p;
// int r;
cin>>n; 
cin>>m;
// cout<<"enter row and coloumn for second matrix ";
// cin>>p;
// cin>>r;
int arr[n][m];
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>arr[i][j];
    }
}
// }
// int arr1[p][r];
// for(int i=0; i<p; i++){
//     for(int j=0; j<r; j++){
//         cin>>arr1[i][j];
//     }
// }
// for(int i=0; i<p; i++){
//     for(int j=0; j<r; j++){
// if(n!=p || m!=r){
//     cout<<"error";
// }
// else{
//     arr[i][j]=arr[i][j]+arr1[i][j];
// }
// cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }
// for(int i=0; i<n; i++){
//     for(int j=0; j<m; j++){
//         cout<<arr[j][i]<<" ";
//     }
//     cout<<endl;
// }

for(int i=0; i<n; i++){
    for(int j=i+1; j<m; j++){
{
       int temp=arr[i][j];
       arr[i][j]=arr[j][i];
       arr[j][i]= temp;
    }
    }
}
for(int i=0; i<n; i++){
    for(int j=m-1; j>=0; j--){
        cout<<arr[i][j]<<" ";
    }
    }
for(int i=0; i<n; i++){
    for(int j=m-1; j>=0; j--){
       cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}


}
