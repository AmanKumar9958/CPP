#include<iostream>
using namespace std;
int main(){
    int number;
    int countDigits = 0;
    int sum = 0;
    int product = 1;
    int lastDigit = 0;
    cout<<"Enter the number: ";
    cin>>number;

    if(number == 1){
        countDigits = 1;
    }
    else{
        while(number > 0){
            lastDigit = number % 10;
            number = number / 10;
            countDigits++;
            sum += lastDigit;
            product *= lastDigit;
        }
    }
    cout<<"Total Digits: "<<countDigits<<endl;
    cout<<"Sum of Digits: "<<sum<<endl;
    cout<<"Product of Digits: "<<product;
}