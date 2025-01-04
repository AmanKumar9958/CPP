#include<iostream>
using namespace std;

void printNto1(int n){
    cout<<n<<endl;
    if(n == 0){
        return;
    }
    else{
        printNto1(n-1);
    }
}
int main(){
    printNto1(10);
}