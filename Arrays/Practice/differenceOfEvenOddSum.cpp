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

    int evenSum = 0;
    int oddSum = 0;
    int diffEvenOddSum = 0;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            evenSum += arr[i];
        }
        else{
            oddSum += arr[i];
        }
    }
    cout<<"Difference of even and odd sum is: "<<evenSum - oddSum<<endl;
    return 0;
}