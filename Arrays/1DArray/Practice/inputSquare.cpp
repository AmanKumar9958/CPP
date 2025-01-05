#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter te size of the array: ";
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++){
        arr[i] = i * i;
    }

    cout<<"The square of the elements are: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}