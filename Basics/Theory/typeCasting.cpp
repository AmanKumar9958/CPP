#include<iostream>
using namespace std;
int main(){
    // we have to take an integer input and show the result as float number.
    int x;
    cout<<"Enter the number: ";
    cin>>x;

    float y = float(x);  // typecasting..x is now converted to float and stored in a new variable..
    cout<<"Half of your number is: "<<y/2<<endl;
}