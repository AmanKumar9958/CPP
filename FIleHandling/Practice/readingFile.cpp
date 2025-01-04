#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream friendsList("friends_list.txt");
    string line;
    if(friendsList.is_open()){
        while(getline(friendsList, line)){
        cout<<line<<endl;
    }
    friendsList.close();
    }
    else{
        cout<<"File not found"<<endl;
    }

    return 0;
}