#include<iostream>
using namespace std;

void sum(int a, int b){
    cout<<"Sum: "<<a+b;
}
int sub(int a, int b){
    return a-b;     // we use return..
}
int main(){
    // calling void function..
    sum(7, 93);
    cout<<endl; 
    // calling int function..
    cout<<"Subtraction: "<<sub(93, 7);
}