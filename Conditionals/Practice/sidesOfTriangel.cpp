#include<iostream>
using namespace std;
int main(){
    int a, b, c;

    cout<<"Enter the first side of the triangle: ";
    cin>>a;
    cout<<"Enter the second side of the triangle: ";
    cin>>b;
    cout<<"Enter the third side of the triangle: ";
    cin>>c;

    if((a+b) > c && (b+c) > a && (c+a) > b){
        cout<<"It is a valid triangle";
    }
    else{
        cout<<"It is NOT a valid triangle";
    }

    return 0;
}