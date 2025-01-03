#include<iostream>
using namespace std;

void swapTwoNumber(float *a, float *b){
    float temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    float num1, num2;

    cout<<"Enter 1st number: ";
    cin>>num1;

    cout<<"Enter 2nd number: ";
    cin>>num2;

    cout<<"Before swapping: "<<num1<<" and "<<num2<<endl;

    swapTwoNumber(&num1, &num2);

    cout<<"After swapping: "<<num1<<" and "<<num2<<endl;;
}