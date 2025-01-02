#include<iostream>
using namespace std;

// declaring function..
void greet(){
    cout<<"Good Morning"<<endl;
    cout<<"How are you?"<<endl;
}
void askQuestion(){
    cout<<"Where do you live?"<<endl;
}
int main(){
    greet();    //calling function
    askQuestion();
}