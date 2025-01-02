// It is a square so we will take only 1 variable to print this pattern
#include<iostream>
using namespace std;
int main(){
    int side;
    cout<<"Enter the side of the square: ";
    cin>>side;

    for(int i = 1; i <= side; i++){ // rows
        for(int j = 1; j <= side; j++){ // columns
            cout<<"* ";
        }
        cout<<endl;
    }
}