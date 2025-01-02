#include<iostream>
using namespace std;
int main(){
    int number;
    int reverse = 0;
    int lastDigit;
    cout<<"Enter the number: ";
    cin>>number;

    while(number != 0){
        lastDigit = number % 10;
        reverse *= 10;
        reverse += lastDigit;
        number /- 10;
    }
    cout<<"Original Number: "<<number<<endl;
    cout<<"Reversed Number: "<<reverse;
}