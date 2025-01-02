#include<iostream>
using namespace std;
int main(){
    int row, a = 1;
    cout<<"Enter the number of rows: ";
    cin>>row;

    for(int i = 1; i <= row; i++){   // rows
        for(int j =  1; j <= i; j++){   // columns
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}