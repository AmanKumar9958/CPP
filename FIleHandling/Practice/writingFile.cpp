#include<iostream>
#include<fstream>
using namespace std;
int main(){

    ofstream myFile("friends_list.txt");
    if(myFile.is_open()){
        cout<<"File created successfully";
        myFile.close();
    }

    ofstream friendsList("friends_list.txt");
    if(friendsList.is_open()){
        cout<<"File created successfully";
        friendsList<<"Varun"<<endl;
        friendsList<<"Chirag"<<endl;
        friendsList<<"Sumit"<<endl;
        friendsList<<"Sumit"<<endl;
        friendsList<<"Krish"<<endl;
        friendsList<<"SUnny"<<endl;
        friendsList.close();
    }




    return 0;
}