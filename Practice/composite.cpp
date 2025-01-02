#include<iostream>
using namespace std;
int main(){
    int number;
    bool isComposite = false;   // NOT Composite

    cout<<"Enter a number to check: ";
    cin>> number;

    if(number <= 1){
        cout<<number<<" is NOT a composite number";
    }
    else{
        for(int i = 2; i <=number/2; i++){
            if(number % i == 0){
                isComposite = true; // composite
                break;
            }
            else{
                isComposite = false;
            }
        }
        if(isComposite == true){
            cout<<number<<" is Composite";
        }
        else{
            cout<<number<<" is NOT Composite";
        }
    }
}