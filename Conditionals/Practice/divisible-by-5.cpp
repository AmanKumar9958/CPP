#include<iostream>
using namespace std;
int main(){
    int num;

    cout<<"Enter the a number to check: ";
    cin>>num;

    if(num % 5 == 0){
        cout<<num<<" is divisible by 5";
    }
    else{
        cout<<num<<" is NOT divisible by 5";
    }
}