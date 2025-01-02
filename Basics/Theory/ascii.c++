#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter a character: ";
    cin>>a;

    cout<<"ASCII Value of: "<<a<<" is: "<<int(a)<<endl;

    // reverse...

    int y;
    cout<<"Enter ASCII value to get character: ",
    cin>>y;

    char z = char(y);
    cout<<"Character is: "<<z;
}