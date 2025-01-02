#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number to calculate the factorial: ";
    cin>>num;

    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact *= i;
    }
    cout<<"Factorial of "<<num<<": "<<fact;
    return 0;
}