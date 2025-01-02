// *
// * *
// * * *
// * * * *
// * * * * *



#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the rows: ";
    cin>>n;
    
    for(int i = 1; i <= n; i++){
        cout<<"\n";
        for(int j = 1; j <= i; j++){
            cout<<" *";
        }
    }
}