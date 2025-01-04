#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // ofstream => for writing to file
    // ifstream => for reading from file
    // fstream => for both reading and writing

    // creating a file..
    ofstream file("sampleText.txt");
    if(file.is_open()){
        cout<<"File created successfully"<<endl;
        file<<"Hello World!"<<endl;
        file.close();
    }

    // writing to a file
    ofstream marks("marks.txt");
    if(marks.is_open()){
        cout<<"File created successfully"<<endl;
        marks<<"This is a new line"<<endl;
        marks<<"BPP -> 40"<<endl;
        marks<<"COA -> 03"<<endl;
        marks.close();
    }

    // reading from a file
    ifstream readMarks("marks.txt");
    string line;
    if(readMarks.is_open()){
        while(getline(readMarks, line)){
            cout<<line<<endl;
        }
        readMarks.close();
    }
    else{
        cout<<"File not found"<<endl;
    }
    
    return 0;
}