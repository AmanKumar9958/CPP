#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i = 1; i <= rows; i++){ // rows
        for(int j = 1; j <= rows-i+1; j++){
            cout<<"  ";
        }
        for(int j = 1; j <= i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}