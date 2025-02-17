// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// int m;
// int p;
// int q;
// cin>>m>>n>>p>>q;
// if(n==p){
//     int a[m][n];
//     for(int i=0; i<m; i++){
//         for(int j=0; j<n; j++){
//             cin>>a[i][j];
//         }
//     }
//     int b[p][q];
//      for(int i=0; i<p; i++){
//         for(int j=0; j<q; j++){
//             cin>>b[i][j];
//         }
//     }
//     int res[m][q];
//      for(int i=0; i<m; i++){
//         for(int j=0; j<q; j++){
//             res[i][j]=0;
//             for(int k=0; k<p; k++){
//                 res[i][j]+=a[i][k]*b[k][j];
//             }
//         }
//     }
//      for(int i=0; i<m; i++){
//         for(int j=0; j<q; j++){
//             cout<<res[i][j]<<' ';
//     }
//     cout<<endl;
// }
// }
// }


// spiral matrix 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int m;
//     int n;
//     cin>>m>>n;
// int minr=0;
// int maxr=m-1;
// int minc=0;
// int maxc=n-1;
// int a[m][n];
//  for(int i=0; i<m; i++){
//         for(int j=0; j<n; j++){
//             cin>>a[i][j];
//         }
//     }
//     while(minr<=maxr && minc<=maxc){
//     for(int j=minc; j<=maxc; j++){
//         cout<<a[minr][j]<<" ";
//     }
//     minr++;
//     if(minr>maxr || minc>maxc) break;
//     for(int i=minr; i<=maxr; i++){
//         cout<<a[i][maxc]<<" ";
//     }
//     maxc--;
//      if(minr>maxr || minc>maxc) break;
//     for(int j=maxc; j>=minc; j--){
//         cout<<a[maxr][j]<<" ";
//     }
//     maxr--;
//      if(minr>maxr || minc>maxc) break;
//     for(int i=maxr; i>=minr; i--){
//         cout<<a[i][minc]<<" ";
//     }
//     minc++;
// }
// }

