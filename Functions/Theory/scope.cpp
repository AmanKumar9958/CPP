#include<iostream>
using namespace std;
int main(){
    int x = 10;
    {
        int y = 10;
        cout<<"Y can be accessed: "<<y<<endl;
        cout<<"Value of x: "<<x<<endl;
    }
    // cout<<"Y can't be accessed here"<<y<<endl;  // error
    cout<<"Value of x: "<<x<<endl;
}