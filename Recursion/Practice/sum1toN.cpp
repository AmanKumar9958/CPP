#include<iostream>
using namespace std;

int sum(int x, int stop){       // stop - upto which the sum is calculated   x - current number to be added..
    if(x > stop){
        return 0;
    }
    else{
        return x + (sum(x + 1, stop));
    }
}

int main(){
    int num;        // the last number..

    cout<<"Enter the number to stop: ";
    cin>>num;

    cout<<"Sum from 1 to "<<num<<" is: "<<sum(1, num);

    return 0;
}