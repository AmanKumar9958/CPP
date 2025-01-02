#include<iostream>
using namespace std;
int main(){
    int number;
    int countDigits = 0;
    cout<<"Enter the number: ";
    cin>>number;

    if(number == 0){
        countDigits = 1;
    }
    else{
        while(number > 0){
            number = number/10;
            countDigits++;
        }
    }
    cout<<"Total digits: "<<countDigits;
}