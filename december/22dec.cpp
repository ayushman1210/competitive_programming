// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// vector<int>a(n);
// for(int i=0; i<n; i++){
//     int q;
//     cin>>q;
//     a.push_back(q);
// }

// int sum=0;
// int x=1;
// for(int i=a.size()-1; i>=0;, i--){
//     sum+=a[i]*x;
//     x=x*2;
//     }
// cout<<sum;

// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>a;
    int row=a.size();
    int col=a[0].size();
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            int q;
            cin>>q;
            a.push_back(q);
        }
    }
    for(int i=0; i<row; i++){
        if(a[i][0]==0){
            for(int j=0; j<col; j++){
                if(a[i][j]==0) a[i][j]=1;
            else a[i][j]=0;
        }
    }
}
for(int j=0; j<col; j++){
    int noz=0;
    int noo=0;
for(int i=0; i<row; i++){
    if(a[i][j]==0) noz++;
    else noo++;
}
if(noz>noo){
    for(int i=0; i<row; i++){
        if(a[i][j]==0) a[i][j]=1;
        else a[i][j]=0;
    }
}
}
int sum=0;
int x=1;
for(int i=0; i<row; i++){
    for(int j=col-1; j>=0; j--){
        sum+=a[i][j]+x;
        x=x*2;
    }
}
cout<<sum;
}