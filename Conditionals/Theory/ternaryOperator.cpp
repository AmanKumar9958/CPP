#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    (n % 3 == 0)? cout<<"Divisible by 3": cout<<"NOT divisible by 3";
}