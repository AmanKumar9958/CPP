#include<iostream>
using namespace std;
int main(){
    int x = 11;
    int* p = &x;

    cout<<"Before value: "<<x<<endl;

    // chaning values..
    *p = 55;
    cout<<"After value: "<<*p<<endl;
}