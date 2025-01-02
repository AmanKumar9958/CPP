#include<iostream>
using namespace std;
int main(){
    float costPrice;
    float sellingPrice;

    cout<<"Enter the cost price of the product: ";
    cin>>costPrice;
    cout<<"Enter the selling price of the product: ";
    cin>>sellingPrice;

    if(costPrice > sellingPrice){
        cout<<"Shopkeeper made LOSS"<<endl;
        cout<<"Loss Amount: "<<costPrice - sellingPrice;
    }
    else if(costPrice < sellingPrice){
        cout<<"Shopkeeper made PROFIT"<<endl;
        cout<<"Profit Amount: "<<sellingPrice - costPrice;
    }
    else if(costPrice == sellingPrice){
        cout<<"Shopkeeper neither made profit nor loss"<<endl;
    }
}