#include<iostream>
using namespace std;
int main(){
    int arr[4][3];

    // manual input..
    // arr[0][0] = 1;
    // arr[0][1] = 2;
    // arr[0][2] = 3;
    // arr[1][0] = 4;
    // arr[1][1] = 5;
    // arr[1][2] = 6;
    // arr[2][0] = 7;
    // arr[2][1] = 8;
    // arr[2][2] = 9;
    // arr[3][0] = 10;
    // arr[3][1] = 11;
    // arr[3][2] = 12;

    // manually printing the array..
    // cout<<arr[0][0]<<" "<<arr[0][1]<<" "<<arr[0][2]<<endl;
    // cout<<arr[1][0]<<" "<<arr[1][1]<<" "<<arr[1][2]<<endl;
    // cout<<arr[2][0]<<" "<<arr[2][1]<<" "<<arr[2][2]<<endl;
    // cout<<arr[3][0]<<" "<<arr[3][1]<<" "<<arr[3][2]<<endl;


    // using loops to input the array..
    for(int r=0; r<4; r++){
        for(int c=0; c<3; c++){
            cout<<"Enter the element at index "<<r<<" "<<c<<": ";
            cin>>arr[r][c];
        }
    }

    // using loops to print the array..
    for(int r=0; r<4; r++){
        cout<<endl;
        for(int c=0; c<3; c++){
            cout<<arr[r][c]<<" ";
        }
    }
    return 0;
}