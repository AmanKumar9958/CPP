#include<iostream>
using namespace std;
int main(){
    int marks[6];

    // Input..
    for(int i = 0; i <= 4; i++){
        cout<<"Enter Marks: ";
        cin>>marks[i];
    }

    // Output..
    for(int i = 4; i >= 0; i--){
        cout<<"Marks: "<<marks[i]<<endl;
    }

    return 0;
}