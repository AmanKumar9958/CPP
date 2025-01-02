// absolute numbers are always a positive number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(num >= 0){
        cout<<"Absolute number: "<<num;
    }
    else{
        cout<<num<<" is not an absolute number"<<endl;
        cout<<"Absolute Value of: "<<num<<" is "<<-num;
    }
}