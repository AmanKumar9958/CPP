#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    int mid = rows/2 + 1;   // we have to print * in middle row..
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= rows; j++){
            if(i == mid || j == mid) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}