#include<iostream>
using namespace std;
int main(){
    int matrix1[3][3], matrix2[3][3], result[3][3];

    // input for matrix1..
    cout<<"Enter the elements of Matrix 1: "<<endl;
    for(int r=0; r<3; r++){
        for(int c=0; c<3; c++){
            cout<<"Enter the element at index "<<r<<" "<<c<<": ";
            cin>>matrix1[r][c];
        }
    }

    cout<<"-----------------------------------"<<endl;
    // input for matrix2..
    cout<<"Enter the elements of Matrix 2: "<<endl;
    for(int r=0; r<3; r++){
        for(int c=0; c<3; c++){
            cout<<"Enter the element at index "<<r<<" "<<c<<": ";
            cin>>matrix2[r][c];
        }
    }

    // adding the matrices..
    for(int r=0; r<3; r++){
        for(int c=0; c<3; c++){
            result[r][c] = matrix1[r][c] + matrix2[r][c];
        }
    }

    cout<<"-----------------------------------"<<endl;
    // printing the result matrix..
    cout<<"The result matrix is: ";
    for(int r=0; r<3; r++){
        cout<<endl;
        for(int c=0; c<3; c++){
            cout<<result[r][c]<<" ";
        }
    }
    return 0;
}