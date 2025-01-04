#include<iostream>
using namespace std;

void print1toN(int n){
    cout<<n<<endl;
    if(n == 15) return;
    print1toN(n+1);
}
int main(){
    print1toN(1);
}