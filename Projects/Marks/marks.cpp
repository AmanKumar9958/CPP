// # Show - Enter the subjects ✔
// # Enter all the subjects ✔
// # Enter marks of each subjects ✔
// # Show the subjects and marks ✔
// # Calculate total marks ✔
// # Calculate percentage ✔
// # Show pass/fail in each subjects ✔
// # Highest and lowest marks
// # Store data into a file
// # Sort by marks
// # Grade calculation


#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int subjectsLength;
    cout<<"Enter the number of subjects: ";
    cin>>subjectsLength;

    string subjects[subjectsLength];
    int marks[subjectsLength];

    for(int i = 0; i <= subjectsLength-1; i++){
        cout<<"Enter the subject name: ";
        cin>>subjects[i];
    }

    for(int i = 0; i <= subjectsLength-1; i++){
        cout<<"Enter the marks for: "<<subjects[i]<<": ";
        cin>>marks[i];
    }

    // showing subject wise marks..
    cout<<"\nSubjects and Marks:\n";
    for(int i = 0; i < subjectsLength; i++){
        cout<<subjects[i]<<": "<<marks[i]<<endl;
    }

    // calculating total marks..
    int totalMarks = 0;
    for(int i = 0; i < subjectsLength; i++){
        totalMarks += marks[i];
    }
    cout<<"Total Marks: "<<totalMarks<<endl;

    // calculating percentage..
    int maxMarksPerSubject = 0;
    cout<<"Enter the maximum marks: ";
    cin>>maxMarksPerSubject;

    if(maxMarksPerSubject < 0){
        cout<<"Enter the valid marks!!"<<endl;
        return 1;
    }
    int totalMaxMarks = maxMarksPerSubject * subjectsLength;
    double percentage = ((double)totalMarks / totalMaxMarks) * 100;
    cout << "Your percentage: " << percentage << "%" << endl;

    // pass/fail..
    int passingMarks = 0;
    int passCount = 0, failCount = 0;
    cout<<"Enter the passing marks: ";
    cin>>passingMarks;

    for(int i = 0; i <= subjectsLength-1; i++){
        if(marks[i] >= passingMarks){
            cout << "You passed in: " << subjects[i] << endl;
            passCount++;
        }
        else{
            cout << "You failed in: " << subjects[i] << endl;
            failCount++;
        }
    }
    cout << "\nTotal Passed: " << passCount << endl;
    cout << "Total Failed: " << failCount << endl;

    return 0;
}