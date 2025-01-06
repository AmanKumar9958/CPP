#include<iostream>
using namespace std;
int main(){
    int r, c;

    cout<<"Enter the number of rows: ";
    cin>>r;

    cout<<"Enter the number of columns: ";
    cin>>c;

    // declaring a 2D array of size r*c..
    int matrix[r][c];

    // taking matrix input..
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<"Enter the element at position "<<i<<", "<<j<<": ";
            cin>>matrix[i][j];
        }
    }

    // displaying the matrix..
    cout<<"The matrix is: ";
    for(int i=0; i<r; i++){
        cout<<endl;
        for(int j=0; j<c; j++){
            cout<<matrix[i][j]<<" ";
        }
    }

    // finding the maximum element in the matrix..
    int max = matrix[0][0];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(matrix[i][j] > max){
                max = matrix[i][j];
            }
        }
    }
    cout<<endl<<"The maximum element in the matrix is: "<<max;
    return 0;
}