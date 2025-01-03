#include<iostream>
using namespace std;
int main(){
    int x = 4; 
    int* p = &x;
    // int* pointerAddress = &p;
    // int y = &x;

    cout<<"Address of x using &x: "<<&x<<endl;
    cout<<"Address of x stored in a pointer: "<<p<<endl;

    cout<<"Value pointed to by p: "<<*p<<endl;

    cout<<"Value: "<<&p;

    // cout<<"Address of x uing normal variable: "<<y<<endl;
    

    // for checking..
    // if(x == *p){
    //     cout<<"Both are same"<<endl;
    // }
    // else{
    //     cout<<"NOT sane"<<endl;
    // }
}