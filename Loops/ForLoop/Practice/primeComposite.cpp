#include<iostream>
using namespace std;
int main(){
    int number;
    bool check = true;  // true -> prime

    cout<<"Enter the number to check: ";
    cin>>number;

    for(int i = 2; i <= number/2; i++){
        if(number % i == 0){
            check = false;   // false -> composite
            break;
        }
        else{
            check = true;
        }
    }
    if(check == true){
        cout<<number<<" is Prime";
    }
    else{
        cout<<number<<" is Composite";
    }
}