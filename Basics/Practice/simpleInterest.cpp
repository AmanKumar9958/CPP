#include<iostream>
using namespace std;
int main(){
    float principleAmount;
    float time;
    float rateOfInterest;

    cout<<"Enter the amount: ";
    cin>>principleAmount;

    cout<<"Enter the time (yrs): ";
    cin>>time;

    cout<<"Enter the rate of interest: ";
    cin>>rateOfInterest;

    float SI = (principleAmount * rateOfInterest * time)/100;

    cout<<"Simple Interest: "<<SI;
    return 0;
}