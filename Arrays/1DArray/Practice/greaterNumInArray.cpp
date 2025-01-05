#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }

    int maxNum;
    cout<<"Enter the maximum number: ";
    cin>>maxNum;

    for(int i = 0; i < n; i++){
        if(arr[i] > maxNum){
            cout<<"Number greater than "<<maxNum<<" is: "<<arr[i]<<endl;
        }
        else{
            cout<<"No number greater than "<<maxNum<<" is present in the array."<<endl;
            break;
        }
    }
    return 0;
}