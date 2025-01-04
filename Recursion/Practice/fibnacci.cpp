#include<iostream>
using namespace std;

int fibonacci(int t){
    // base class
    if( t == 1 || t == 2){
        return 1;
    }
    else{
        return fibonacci(t - 1) + fibonacci(t - 2);
    }
}

int main(){
    int term;

    cout<<"Enter the last term: ";
    cin>>term;

    cout<<"Fibonacci series upto "<<term<<"th: ";
    for(int i = 1; i <= term; i++){
        cout<<fibonacci(i)<<" ";
    }
    return 0;
}