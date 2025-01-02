#include<iostream>
using namespace std;
int main(){
    int terms;
    cout<<"Enter the number of terms: ";
    cin>>terms;

    int a = 4;  // starting value..
    for(int i = 1; i <= terms; i++){
        cout<<a<<" ";
        a += 3;
    }
}