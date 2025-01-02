#include<iostream>
using namespace std;
int main(){

    // this print nothing using while loop because i = 11 and our condition is i < 10
    // int i = 11;
    // while(i <= 10){
    //     cout<<i<<" ";
    //     i++;
    // }

    // to solve this problem we use do while loop
    // this time our loop will also not work but this print the 11 atleast because we are
    // using do while loop..
    int i = 11;
    do{
        cout<<i<<" ";
        i++;
    }while(i <= 10);
}