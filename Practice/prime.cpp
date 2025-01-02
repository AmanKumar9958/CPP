#include<iostream>
using namespace std;
int main(){
    int number;
    bool isPrime = true;    // prime

    cout<<"Enter the number to check: ";
    cin>>number;

    if(number <= 1){
        cout<<number<<" , is NOT a prime number";
    }
    else{
        for(int i = 2; i <=number/2; i++){
            if(number % i == 0){
                isPrime = false;   // NOT Prime
                break;
            }
            
        }
        if(isPrime == true){
            cout<<number<<" is Prime";
        }
        else{
            cout<<number<<" is NOT Prime";
        }
}
}