#include<iostream>
#include<vector>
using namespace std;
int main(){

    // vector <int> marks = {10, 20, 30, 40, 50};   // integer vector

    vector <char> grades = {'A', 'B', 'C', 'D', 'E'};   // character vector


    // for output..
    // for(char val : grades){
    //     cout<<val<<" ";
    // }

    
    // for input..
    int numberOfElements;
    cout<<"Enter the number of elements for the array: ";
    cin>>numberOfElements;

    vector <int> number(numberOfElements);

    for(int i=0; i<numberOfElements; i++){
        cout<<"Enter the element "<<i+1<<": ";
        cin>>number[i];
    }

    for(int value : number){
        cout<<value<<" ";
    }
    return 0;
}