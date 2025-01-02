#include<iostream>
using namespace std;

// nPr = n!/(n-r)!

void calculatePermutation(int n, int r){
    // calculating n!
    int nFact = 1;
    for(int i = 1; i <= n; i++){
        nFact *= i;
    }

    // calculation (n-r)!
    int rSubn = n - r;
    int nrFact = 1;
    for(int i = 1; i <= rSubn; i++){
        nrFact *= i;
    }

    cout<<"Permutation: "<<nFact/nrFact;
}
int main(){
    calculatePermutation(5, 2);
    return 0;
}