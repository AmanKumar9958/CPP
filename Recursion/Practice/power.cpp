#include<iostream>
using namespace std;

int power(int b, int p){
    // base class
    if(p == 0){
        return 1;
    }
    else{
        return b * power(b, p-1);
    }
}

int main(){
    // input: a and b
    // power: a^b;
    int a, b;

    cout<<"Enter the base: ";
    cin>>a;

    cout<<"Enter the power: ";
    cin>>b;

    cout<<a<<" raised to power "<<b<<": "<<power(a, b);

    return 0;
}