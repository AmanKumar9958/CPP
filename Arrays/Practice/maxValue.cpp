#include<iostream>
using namespace std;
int main(){
    int arr[5] = {0, 5, 2, 3, 1};
    int maxValue = arr[0];

    for(int i = 1; i <= 4; i++){
        maxValue = max(maxValue, arr[i]);
    }

    cout << "Max value in the array is: " << maxValue << endl;
    return 0;
}