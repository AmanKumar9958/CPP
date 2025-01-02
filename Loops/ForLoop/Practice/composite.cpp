#include<iostream>
using namespace std;
int main(){
    int number;
    bool isComposite = false;

    cout<<"Enter the number to check: ";
    cin>>number;

    if(number <= 1){
        cout<<number<<" is neither prime not composite";
    }
    else{
        for(int i = 2; i <= number/2; i++){
            if(number % i == 0){
                isComposite = true;
                break;
            }
        }
        if(isComposite == true){
            cout<<number<<" is composite";
        }
        else{
            cout<<number<<" is NOT composite";
        }
    }
}