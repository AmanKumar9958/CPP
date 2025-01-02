#include<iostream>
using namespace std;
int main(){
    int x = 4, y = 0;
    while(x >= 0){
        x--;
        y++;
        if(x == 7){
            continue;
        }
        else{
            cout<<x<<" "<<y<<endl;
        }
    }
}