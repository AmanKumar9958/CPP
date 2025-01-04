#include<iostream>
using namespace std;

int factorial(int x){
    // base class
    if(x == 1 || x == 0){
        return 1;
    }
    else{
        return x * factorial(x - 1);
    }
}

int main(){
    int num;
    cout<<"Enter the number to calculate the factorial: ";
    cin>>num;
    cout<<"Factorial of "<<num<<": "<<factorial(num);
    return 0;
}