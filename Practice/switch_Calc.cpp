#include<iostream>
using namespace std;
int main(){
    int choice = 0;
    double num1, num2, result;

    while(choice != 6){
        cout<<"Simple Calculator"<<endl;
        cout<<"Choose an operator: "<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Modulus"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter you choice: ";
        cin>>choice;
    
        switch(choice){
            case 1:
                cout<<"Enter 1st number: ";
                cin>>num1;
    
                cout<<"Enter 2nd number: ";
                cin>>num2;
    
                result = num1 + num2;
                cout<<"Addition: "<<result<<endl;
                break;
            
            case 2:
                cout<<"Enter 1st number: ";
                cin>>num1;
    
                cout<<"Enter 2nd number: ";
                cin>>num2;
    
                result = num1 - num2;
                cout<<"Subtraction: "<<result<<endl;
                break;
            
            case 3:
                cout<<"Enter 1st number: ";
                cin>>num1;
    
                cout<<"Enter 2nd number: ";
                cin>>num2;
    
                result = num1 * num2;
                cout<<"Multiplication: "<<result<<endl;
                break;
    
            case 4:
                cout<<"Enter 1st number: ";
                cin>>num1;
    
                cout<<"Enter 2nd number: ";
                cin>>num2;
    
                if(num2 == 0){
                    cout<<"Can't divide by 0";
                }
                else{
                    result = num1 / num2;
                    cout<<"Division: "<<result<<endl;
                }
                break;
    
            case 5:
                int intNum1, intNum2;
                cout<<"Enter 1st number: ";
                cin>>intNum1;
                cout<<"Enter 2nd number: ";
                cin>>intNum2;
                if(intNum2 != 0){
                    result = intNum1 % intNum2;
                    cout<<"Modulus: "<<result<<endl;
                }
                else{
                    cout<<"Can't divide by 0";
                }
                break;
    
            case 6:
                cout<<"Exiting the calculator, Good Bye!!";
                break;
    
            default:
                cout<<"Invalid choice";
                break;
        }
        }
    return 0;
}