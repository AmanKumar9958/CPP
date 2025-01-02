// In this pattern we will take 2 variable one for length and one for breadth.
#include<iostream>
using namespace std;
int main(){
    int rows;   // taking input for rows
    cout<<"Enter the rows: ";
    cin>>rows;
    int columns;    // taking input for columns
    cout<<"Enter the columns: ";
    cin>>columns;
    for(int i = 1; i <= rows; i++){ // rows
        for(int j = 1; j <= columns; j++){  // columns
            cout<<"* ";
        }
        cout<<endl;
    }
}