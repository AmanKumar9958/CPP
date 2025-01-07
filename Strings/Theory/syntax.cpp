#include<iostream>
using namespace std;
int main(){

    // Declaring string
    string name = "Aman Kumar";
    cout<<"Name: "<<name<<endl;

    // Length of string
    cout<<"Length of name: "<<name.length()<<endl;

    // Accessing characters
    cout<<"First character: "<<name[0]<<endl;

    // User input
    string course;
    cout<<"Enter your course: ";
    cin>>course;
    cout<<"Course: "<<course<<endl;

    // clear the input buffer
    cin.ignore();

    // Complexity in string input
    // string city;
    // cout<<"Enter your city: ";
    // cin>>city;
    // cout<<"City: "<<city<<endl;     // Only one word (Starting) will be printed

    // This problem comes due to cin, to solve this we use getline function

    string city2;
    cout<<"Enter your city: ";
    getline(cin, city2);
    cout<<"City: "<<city2<<endl;     // Now it will print the whole line
    return 0;
}