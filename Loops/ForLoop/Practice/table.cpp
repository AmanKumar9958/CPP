#include<iostream>
using namespace std;
int main(){
    int tableNum;
    cout<<"Enter the number to print the table: ";
    cin>>tableNum;
    for(int i = 1; i <=10; i++){
        cout<<tableNum<<" x "<<i<<" = "<<tableNum*i<<endl;
    }
}