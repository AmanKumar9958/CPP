#include<iostream>
using namespace std;
int main(){
    int number;
    int countDigits = 0;
    int evenSum = 0;
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
            if(number % 2 == 0){
                evenSum += lastDigit;
            }
        }
    }
    cout<<"Total Digits: "<<countDigits<<endl;
    cout<<"Sum of Even Digits: "<<evenSum<<endl;
}