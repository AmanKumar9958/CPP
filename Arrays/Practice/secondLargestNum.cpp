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

    int largest = arr[0];
    int secondLargest = arr[0];
    int smallest = arr[0];

    for(int i = 0; i < n; i++){
        largest = max(largest, arr[i]);
    }
    cout<<"Max value in the array is: "<<largest<<endl;

    for(int i = 0; i < n; i++){
        if(arr[i] != largest){
            secondLargest = max(secondLargest, arr[i]);
        }
    }
    cout<<"Second largest value in the array is: "<<secondLargest<<endl;

    for(int i = 0; i < n; i++){
        smallest = min(smallest, arr[i]);
    }
    cout<<"Min value in the array is: "<<smallest<<endl;
    return 0;
}