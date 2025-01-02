// highest factor other than itself..
#include<iostream>
using namespace std;
int main(){
    int factor;
    int number;
    cout<<"Enter the number to find the highest factor: ";
    cin>>number;

    cout<<"Factors of "<<number<<" are: ";
    for(int i = 1; i <+ number; i++){
        if(number % i == 0){
            cout<<i<<" ";
            factor = i;
        }
    }
    cout<<"\nHighest factor (other than itself): "<<factor;
    
    return 0;
}