#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;

    for(int i = 1; i <= row; i++){   // rows
        for(int j =  1; j <= i; j++){   // columns
            if((i+j) %2 == 0){
                cout<<"1"<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
}