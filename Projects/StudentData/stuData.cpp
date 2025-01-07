#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;
int main(){
    int numberOfStudents;

    cout<<"Enter the number of students: ";
    cin>>numberOfStudents;
    cout<<endl;


    string studentNames[numberOfStudents];
    int studentRolls[numberOfStudents];
    int studentMarks[numberOfStudents];
    string studentData[numberOfStudents][2]; // 2D array to store student marks and roll number

    // input..
    for(int r=0; r<numberOfStudents; r++){
        cout<<"Enter the name of student "<<r+1<<": ";
        cin>>studentNames[r];
        cout<<"Enter the roll number "<<studentNames[r]<<": ";
        cin>>studentData[r][0];
        cout<<"Enter the marks of "<<studentNames[r]<<": ";
        cin>>studentData[r][1];

        cout<<endl;

    }

    // display..
    for(int i=0; i<numberOfStudents; i++){
        // cout<<"Name: "<<studentNames[i]<<endl;
        // cout<<"Roll: "<<studentData[i][0]<<endl;
        // cout<<"Marks: "<<studentData[i][1]<<endl;
        cout<<"Name: "<<studentNames[i]<<" Roll: "<<studentData[i][0]<<" Marks: "<<studentData[i][1]<<endl;
    }

    // Writing the data into the file..
    ofstream studentDataFile("studentData.txt");
    if(studentDataFile.is_open()){
        cout<<"File created successfully..";
        for(int i=0; i<numberOfStudents; i++){
            studentDataFile<<"Name: "<<studentNames[i]<<" Roll: "<<studentData[i][0]<<" Marks:"<<studentData[i][1]<<endl;
        }
        studentDataFile.close();
    }else{
        cout<<"Error in creating the file..";
    }
    
    system("pause");
    return 0;
}