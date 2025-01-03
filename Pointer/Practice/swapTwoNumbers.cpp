#include<iostream>
using namespace std;

void swapTwoNumber(float &num1, float &num2){
    float temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}
int main(){
    float num1, num2;

    cout<<"Enter 1st number: ";
    cin>>num1;

    cout<<"Enter 2nd number: ";
    cin>>num2;

    cout<<"Before swapping: "<<num1<<" and "<<num2<<endl;

    swapTwoNumber(num1, num2);

    cout<<"After swapping: "<<num1<<" and "<<num2<<endl;;
}