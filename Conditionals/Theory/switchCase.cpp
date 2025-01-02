#include<iostream>
using namespace std;
int main(){
    int num1, num2;

    cout<<"Enter 1st number: ";
    cin>>num1;
    cout<<"Enter 2nd number: ";
    cin>>num2;

    char op;    // operator
    cout<<"Enter the operator: ";
    cin>>op;

    switch (op){
        case '+':
            cout<<"Addition: "<<num1+num2;
            break;
        case '-':
            cout<<"Subtraction: "<<num1-num2;
            break;
        case '/':
            cout<<"Division: "<<num1/num2;
            break;
        case '*':
            cout<<"Multiplication: "<<num1*num2;
            break;
        default:
            cout<<"Invalid operator!";
    }
}