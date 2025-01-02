#include<iostream>
using namespace std;
int main(){
    int terms;
    cout<<"Enter the number of GP terms: ";
    cin>>terms;

    int a = 3;  // starting term..
    for(int i = 1; i <= terms; i++){
        cout<<a<<" ";
        a = a * 4;
    }
}