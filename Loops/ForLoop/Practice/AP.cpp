#include<iostream>
using namespace std;
int main(){
    int terms;
    cout<<"Enter the number of terms: ";
    cin>>terms;

    // to print AP -> an = a + (n-1)d -> Formula
    // by using this formula we get our ap..
    // Ex = 4, 7, 10, 13, 16, 19, 12....n   -> an = 3n - 1

    for(int i = 4; i <= 3*terms+1; i+=3){
        cout<<i<<" ";
    }
}