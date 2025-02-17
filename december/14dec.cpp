// #include<bits/stdc++.h>
// using namespace std;
// int arr[5][5];
// int main(){
// for(int i=1; i<=5; i++){
//     for(int j=1; j<=5; j++){
//         cin>>arr[i][j];
//     }
// }

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int t;
// int n;
// int count=0;
// int rec=0;
// cin>>t;
// while(t--){
//     cin>>n;
//     if(n<0){
//         rec=rec+n;
//      if(rec<0)
//      {count++;}
//      }
//      if(n>0){rec=rec+n;
//     if(rec<=0){count=count-n;}
//     }
//     }
//     cout<<count;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int n;
int bst=0;
int wst=0;
int count=0;
if(t>1){
for(int i=0; i<1;i++){
    cin>>n;
    wst=n;
    bst=n;
}
for(int i=1; i<t; i++){
    cin>>n;
   if(n<wst){
    wst=n;
    count++;
    }
    if(n>bst){
        bst=n;
        count++;
    }
    }

    cout<<count;
}
else{
    cin>>n;
    cout<<0;
}
}