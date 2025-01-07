#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);

    cout<<"Original string: "<<s<<endl;

    for(int i=0; i<s.length(); i++){
        if(s[i] % 2 == 0){
            s[i] = '<>';
        }
    }

    cout<<"Updated string: "<<s<<endl;

    system("pause");
    return 0;
}