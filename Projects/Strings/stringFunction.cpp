#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int choice;

    do{
        cout<<"\n \n=========Menu========"<<endl;
        cout<<"1. Check if string is empty"<<endl;      // done..
        cout<<"2. Append String"<<endl;                 // done..
        cout<<"3. Find Substring"<<endl;                // done..
        cout<<"4. Pop Back (Remove from last)"<<endl;   // done..
        cout<<"5. String Length"<<endl;         // done..
        cout<<"6. Replace Substring"<<endl;     // done..
        cout<<"7. Front (Get 1st Word)"<<endl;  // done..
        cout<<"8. Back (Get last word)"<<endl;  // done..
        cout<<"9. Compare String"<<endl;        // done..
        cout<<"10. Get Substring"<<endl;        // done..
        cout<<"0. Exit"<<endl;

        // Choice Input..
        cout<<"Enter your choice from the above: ";
        cin>>choice;
        cin.ignore();

        // String Input..
        string string1;
        if(choice != 0){
            cout<<"Enter your string: ";
            getline(cin, string1);
        }

        // Functionality of choices..
        switch (choice){
            // case 1
            case 1: {
                cout<<"Checking if string is empty.."<<endl;

                if(string1.empty()){
                    cout<<"String is empty!!"<<endl;
                }
                else{
                    cout << "String is not empty." << endl;
                }
                break;
            }
            // case 2
            case 2: {
                cout<<"Appending the string.."<<endl;

                string string2;
                cout<<"Enter another string to append: ";
                getline(cin, string2);

                string1.append(string2);

                cout<<"Updated String: "<<string1<<endl;
                break;
            }
            // case 3
            case 3: {
                cout<<"Finding the substring.."<<endl;

                string string2;
                cout<<"Enter the substring to find: ";
                getline(cin, string2);

                size_t found = string1.find(string2);
                if(found != string::npos){
                    cout<<"Substring found at position: "<<found<<endl;
                }
                else{
                    cout<<"Substring not found!!"<<endl;
                }
                break;
            }
            // case 4
            case 4: {
                cout<<"Removing string from last.."<<endl;

                string1.pop_back();

                cout<<"Updated String: "<<string1<<endl;
                break;
            }
            // case 5
            case 5: {
                cout<<"Finding the length of the string.."<<endl;

                int length = string1.length();

                cout<<"The length of the string "<<string1<<" :"<<length<<endl;
                break;
            }
            // case 6
            case 6: {
                cout<<"Replacing the substring.."<<endl;
                int pos, len;

                cout<<"Enter the starting position: ";
                cin>>pos;

                cout<<"Enter the ending position: ";
                cin>>len;

                cin.ignore();

                string subString;
                cout<<"Enter the string to replace: ";
                getline(cin, subString);

                if(pos < 0 || pos >= string1.length()){
                    cout<<"Invalid position!!"<<endl;
                }
                else{
                    string1.replace(pos, len, subString);
                    cout<<"Updated String: "<<string1<<endl;
                }
                break;
            }
            // case 7
            case 7: {
                cout<<"Getting the last word.."<<endl;
                cout<<"Last word: "<<string1.front()<<endl;
                break;
            }
            // case 8
            case 8: {
                cout<<"Getting the first word.."<<endl;
                cout<<"First word: "<<string1.back()<<endl;
                break;
            }
            // case 9
            case 9: {
                cout<<"Comparing the string.."<<endl;

                string string2;
                cout<<"Enter the string to compare: ";
                getline(cin, string2);

                int result = string1.compare(string2);

                if(result < 0){
                    cout<<"String 2: "<<string2<<" is greater than "<<string1<<" in length.."<<endl;
                }
                else if(result > 0){
                    cout<<"String 2: "<<string2<<" is less than "<<string1<<" in length.."<<endl;
                }
                else{
                    cout<<"Both strings are of equal length.."<<endl;
                }
                break;
            }
            // case 10
            case 10: {
                cout<<"Getting the substring.."<<endl;

                int pos, len;
                cout<<"Enter the starting position: ";
                cin>>pos;

                cout<<"Enter the ending position: ";
                cin>>len;

                if(pos < 0 || pos >= string1.length()){
                    cout<<"Invalid position!!"<<endl;
                }
                else{
                    cout<<"Substring: "<<string1.substr(pos, len)<<endl;
                }
                break;
            }
            // case 11
            case 0: {
                cout<<"Exiting the program..Goodbye!!"<<endl;
                break;
            }
            default: {
                cout<<"Invalid input!! Please try again..";
                break;
            }
        }
    }while(choice != 0);


    system("Pause");
    return 0;
}