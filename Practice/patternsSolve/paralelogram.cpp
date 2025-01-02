//     ****
//    ****
//   ****
//  ****
// ****

// i = rows;
// j = gap;
// k = *;
// n = 5;
#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++){
            cout<<" ";
        }
        for(int k = 1; k <= n-1; k++){
            cout<<"*";
        }
        cout<<endl;
    }
}