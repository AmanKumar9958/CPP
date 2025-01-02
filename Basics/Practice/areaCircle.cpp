#include<iostream>
using namespace std;
int main(){
    float r;
    float area;

    cout<<"Enter the radius: ";
    cin>>r;

    area = 3.14 * r * r;

    cout<<"Area of circle with radius: "<<r<<" is: "<<area;
}