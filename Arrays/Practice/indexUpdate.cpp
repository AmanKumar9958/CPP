// oddIndexValue -> double
// evenIndexValue -> increment by 10


#include<iostream>
using namespace std;

void updateArray(int arr[]){
    for(int i = 0; i < 10; i++){
        if(i % 2 == 0){
            arr[i] += 10;
        }
        else{
            arr[i] *= 2;
        }
    }

    for(int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    updateArray(arr);
    return 0;
}