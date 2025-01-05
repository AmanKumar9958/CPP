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

    cout<<"Original Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int reverseArr[n];
    for(int i=0; i<n; i++){
        int j = n-1-i;
        reverseArr[i] = arr[j];
    }

    cout<<"Reversed Array: ";
    for(int i=0; i<n; i++){
        cout<<reverseArr[i]<<" ";
    }
    cout<<endl;

    bool isPalindrome = true;    // initially assuming that the array is palindrome..
    for(int i=0; i<n; i++){
        if(arr[i] != reverseArr[i]){
            isPalindrome = false;   // if any element of the array is not equal to the corresponding element of the reversed array, then the array is not palindrome..
            break;
        }
    }
    if(isPalindrome){
        cout<<"The array is palindrome."<<endl;
    }
    else{
        cout<<"The array is not palindrome."<<endl;
    }

    return 0;
}