// *
// **
// ***
// ****
// *****
// i = row
// j = column (which is equal to row)
// n = 5 (number of rows)
// stars will print using j
// line end will come using i
#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}