//     *
//    ***
//   *****
//  *******
// *********

// In this we need 3 loops --> 1 for rows, 1 for spaces and 1 for printing stars.
// n = 5 (number of rows)
// i = n

#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++){
            cout<<" ";
        }
        for(int k = 1; k <= (2 * i -1); k++){
            cout<<"*";
        }
        cout<<endl;
    }
}