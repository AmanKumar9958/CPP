#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int product = 1;

    for(int i = 0; i < 5; i++){
        product *= arr[i];
    }
    cout << "Product of elements in the array is: " << product << endl;
    return 0;
}