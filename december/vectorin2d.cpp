// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     int m;
//     cin>>m;
//     cin>>n;
//     vector<int>v1;
//     vector<int>v2;
//     for(int i=0; i<n; i++){
//         int q;
//         cin>>q;
//         v1.push_back(q);
//     }
//      for(int i=0; i<m; i++){
//         int q;
//         cin>>q;
//         v2.push_back(q);
//     }
//     vector<vector<int>>v;
//     v.push_back(v1);
//     v.push_back(v2);
//         cout<<v[0][0];
//     }

// passing 2d array into functions 
// in array we need to pass both row and coloumn of size thats the limitation of array that why 2d vector is used 
// #include<bits/stdc++.h>
// using namespace std;
// void change(vector <vector<int>>&v){
//     v[0][0]=100;
// }
// void length(vector<vector<int>>v){
//     cout<<v.size();
// }
// int main(){
//     vector<int>v1;
//     v1.push_back(5);
//     v1.push_back(3);
//     v1.push_back(6);
//     vector<int>v2;
//    v2.push_back(1);
//    v2.push_back(3);
//    v2.push_back(1);
//    vector<vector<int>> v;
//    v.push_back(v1);
//    v.push_back(v2);
// //    cout<<v[0][0]<<' ';
// //    change(v);
// //    cout<<v[0][0];
//    length(v);
// }

// 2d vector decleration 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// // vector<int>v(5,2);
// vector<vector<int>>v(3,vector<int>(4,5));
// // cout<<v[0];
// // cout<<v[1];
// // cout<<v[2];
// // cout<<v[3];
// // cout<<v[4]; 
// cout<<v[0][0];


// }

// pascal triangle 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
vector<vector<int>>v;
for(int i=1; i<=n; i++){
    vector<int> a(i);
    v.push_back(a);
}
for(int i=0; i<n; i++){
    for(int j=0; j<=i; j++){
        if(j==i|| j==0){
            v[i][j]=1;
        }
        else{
            v[i][j]=v[i-1][j]+v[i-1][j-1];
        }
    }
}
for(int i=0; i<n; i++){
    for(int j=0; j<=i; j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}

}