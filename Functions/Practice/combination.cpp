#include<iostream>
using namespace std;

// nCr = n!/(n-r)! * r!

void calculateCombination(int n, int r){
    
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

    cout<<"Combination: "<<nFact/(nrFact*rFact);
}
int main(){
    calculateCombination(5, 2);
    return 0;
}