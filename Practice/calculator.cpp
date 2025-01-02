#include<iostream>
using namespace std;
int main(){
    int choice;
    float a, b;

    do{
        // calculator menu..
        cout<<"\n ===Calculator Menu=== \n";
        cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice (1-5): ";
        cin>>choice;

        // number input..
        if(choice >= 1 && choice <= 4){
            cout<<"Enter 1st number: ";
            cin>>a;
            cout<<"Enter 2nd number: ";
            cin>>b;
        }

        // calculator operations..
        switch(choice){
            case 1:
                cout<<"Result: "<<a<<" + "<<b<<" = "<<a+b<<endl;
                break;
            case 2:
                cout<<"Result: "<<a<<" - "<<b<<" = "<<a-b<<endl;
                break;
            case 3:
                cout<<"Result: "<<a<<" * "<<b<<" = "<<a*b<<endl;
                break;
            case 4:
                if(b == 0){
                    cout<<"Error! Division by zero is not allowed."<<endl;
                }
                else{
                    cout<<"Result: "<<a<<" / "<<b<<" = "<<a/b<<endl;
                }
                break;
            case 5:
                cout<<"Exiting.."<<endl;
                break;
            default:
                cout<<"Invalid choice! Please enter a valid choice (1-5)."<<endl;
        }
    }
    while(choice != 5);
}