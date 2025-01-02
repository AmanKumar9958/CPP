#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if(num % 5 == 0 && num % 3 == 0){
        cout<<num<<" is divisible by both 5 and 3";
    }
    else{
        cout<<num<<" is NOT divisible by both 5 and 3";
    }
}