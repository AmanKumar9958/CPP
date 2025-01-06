#include<iostream>
using namespace std;
int main(){

    // taking input of rows and columns from the user..
    int r, c;

    cout<<"Enter the number of rows: ";
    cin>>r;

    cout<<"Enter the number of columns: ";
    cin>>c;

    int matrix[r][c];


    // Input the elements of the matrix..
    cout<<"Enter the elements of the matrix: "<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<"Enter the element at "<<i<<","<<j<<": ";
            cin>>matrix[i][j];
        }
    }

    // Display the matrix..
    for(int i=0; i<r; i++){
        cout<<endl;
        for(int j=0; j<c; j++){
            cout<<matrix[i][j]<<" ";
        }
    }

    cout<<endl;

    // Sum of all the elements of the matrix..
    int sumOfElement = 0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            sumOfElement += matrix[i][j];
        }
    }
    cout<<"Sum of all the elements of the matrix is: "<<sumOfElement<<endl;
    return 0;
}