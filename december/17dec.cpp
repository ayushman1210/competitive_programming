// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// int m;
// int p;
// int q;
// cin>>n>>m>>p>>q;

//     if(n==q){
//         int arr[n][m];
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 cin>>arr[i][j];
//             }
//        }
//        int arr2[p][q];
//         for(int i=0; i<p; i++){
//             for(int j=0; j<q; j++){
//                 cin>>arr[i][j];
//             }
//        }
//        int res[n][q];
//        for(int i=0; i<n; i++){
//         for(int j=0; j<q; j++){
//             res[n][q]=0;
//             for(int k=0; k<q; k++){
//                 res[n][q]+=arr[i][k]*arr2[k][j];
//             }
//         }
//        }
//        for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 cout<<res[i][j];
//             }
//        }
//     }
     
// }


//both the diagonal 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n; 
// int m;
// cin>>n>>m;
// int arr[n][m];
// for(int i=0; i<n; i++){
//     for(int j=0; j<m; j++){
//         cin>>arr[i][j];
//     }
// }
// for(int i=0; i<n; i++){
//     for(int j=0; j<m; j++){
//         if((i+j)%2==0)
//         cout<<arr[i][j]<<' ';
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }
// }

//90 degree anticlockwise 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// int m; 
// cin>>n>>m;
// int arr[n][m];
//  for(int i=0; i<n; i++){
//  for(int j=0; j<m; j++){
// cin>>arr[i][j];
//  }
// }
// for(int j=m-1; j>=0; j--){
//     for(int i=0; i<n; i++){
//         cout<<arr[i][j]<<' ';
//     }
//     cout<<endl;
// }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// int m; 
// cin>>n>>m;
// int arr[n][m];
//  for(int i=0; i<n; i++){
//  for(int j=0; j<m; j++){
// cin>>arr[i][j];
//  }
// }

   
//         for(int j=0; j<m; j++){
//                 if(j%2==0){
//                      for(int i=n-1; i>=0; i--){
//         cout<<arr[i][j]<<' ';
//                 }
//                 }
//         else{
//             for(int i=0; i<n; i++){
//                 cout<<arr[i][j]<<' ';
//             }
//         }
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int arr[][2]={{1,2},{3,4}};
// for(int i=0; i<2; i++){
//     for(int j=0; j<2; j++){
//         cout<<arr[i][j];
//     }
// }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// int t;
// int n;
// int m;
// int k;
// cin>>t;
// while(t--){
//     cin>>n>>m>>k;
//     for(int i=1; i<n; i++){
//         for(int j=1; j<m; j++){
//      int per=2*(i+j);
//      if(per>=k){
//             cout<<per-k<<endl; 
//              break;
//         }
//         else{
//             continue;
//         }
//       }
// }
// }

// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     int n;
//     int m;
//     int k;
//     cin >> t;
//     while (t--) {
//         cin >> n >> m >> k;
//         bool printed = false;  
//         for (int i = 1; i < n; i++) {
//             for (int j = 1; j < m; j++) {
//                 int per = 2 * (i + j);
//                 int peri=2*(n+m);
//                 if (per >= k) {
//                     cout << per - k << endl;  
//                     printed = true;
//                     break;  
//                 }
//                else if(peri<k){
//                     cout<<k-per<<endl;
//                 printed=true;
//                 break;}
//             }
//             if (printed) {
//                 break;  
//             }
//         }
//     }
// }

// #include <iostream>
// #include <cmath>
// #include <climits>

// using namespace std;

// int main() {
//     int T;
//     cin >> T;
    
//     while (T--) {
//         int N, M, K;
//         cin >> N >> M >> K;
//         int min_diff = INT_MAX;
//         for (int l = 1; l <= N; ++l) {
//             for (int w = 1; w <= M; ++w) {
//                 int perimeter = 2 * (l + w);
//                 int diff = abs(perimeter - K);
//                 min_diff = min(min_diff, diff);
//             }
//         }
        
//         cout << min_diff << endl;
//     }
    
    
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int t;
// cin>>t;
// int even=t/2;
// int sev=even*(even+1);
// int odd=(t+1)/2;
// int sod=odd*odd;
// cout<<sev-sod;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// long long t;
// cin>>t;
// long long even=t/2;
// long long sev=even*(even+1);
// long long odd=(t+1)/2;
// long long  sod=odd*odd;
// cout<<sev-sod;
// }

