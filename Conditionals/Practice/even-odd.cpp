#include<iostream>
using namespace std;
int main(){
    // take a +ve integer input and tell if it is even or odd..

    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(num % 2 == 0){
        cout<<num<<" is an even number";
    }
    else{
        cout<<num<<" is an odd number";
    }
    return 0;
}