// *****
// ****
// ***
// **
// *
// same as right angle triangle --> revers
// n = 5 (number of rows)
// i = n (but i--)
// j = i (but j--)
// stars will print using j
// gaps will come using i

#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for(int i = n; i >=1; i--){
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}