#include<iostream>
using namespace std;

int main(){
    float num1, num2, temp;
    cout<<"Enter 1st Number: ";
    cin>>num1;

    cout<<"Enter 2nd number: ";
    cin>>num2;

    cout<<"Before swapping: "<<num1<<" and "<<num2<<endl;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout<<"After swapping: "<<num1<<" and "<<num2<<endl;

    return 0;
}