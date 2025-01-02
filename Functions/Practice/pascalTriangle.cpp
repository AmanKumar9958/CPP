// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1


#include<iostream>
using namespace std;

int combination(int n, int r){
    // calculating n!
    int nFact = 1;
    for(int i = 1; i <= n; i++){
        nFact *= i;
    }

    // calculating r!
    int rFact = 1;
    for(int i = 1; i <= r; i++){
        rFact *= i;
    }

    // calculating (n-r)!
    int nrFact = 1;
    int rSubn = n - r;
    for(int i = 1; i <= rSubn; i++){
        nrFact *= i;
    }

    int finalResult = nFact/(nrFact * rFact);
    return finalResult;
}
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for(int i = 0; i <= n; i++){
        cout<<endl;
        for(int j = 0; j <= n-i; j++){
            cout<<" ";
        }
        for(int j = 0; j <= i; j++){
            cout<<combination(i, j)<<" ";
        }
    }
}