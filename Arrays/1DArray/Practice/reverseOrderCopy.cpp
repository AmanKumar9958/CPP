#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the elements of the array: ";
        cin>>arr[i];
    }

    int reverseArr[n];
    for(int i = 0; i < n; i++){
        int j = n - 1 - i;
        reverseArr[i] = arr[j];
    }

    cout<<"The reverse order of the array is: ";
    for(int i=0; i<n; i++){
        cout<<reverseArr[i]<<" ";
    }
    return 0;
}