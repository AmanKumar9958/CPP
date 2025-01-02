//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5
// ---------------------
//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5
//  1 2 3 4
//   1 2 3
//    1 2
//     1

#include<iostream>
using namespace std;
int main(){
    int n = 5;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++){
            cout<<" ";
        }
        for(int k = 1; k <= (1 * i); k++){
            // cout<<k<<" ";
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int i = n-1; i >= 1; i--){
        for(int j = 1; j <= n-i; j++){
            cout<<" ";
        }
        for(int k = 1; k <= (1 * i); k++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}