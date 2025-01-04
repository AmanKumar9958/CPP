#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream friendsList("friends_list.txt", ios::app);
    if(friendsList.is_open()){
        friendsList<<"These are my friends"<<endl;
        friendsList.close();
        cout<<"File appended successfully"<<endl;
    }
    else{
        cout<<"Unable to open file"<<endl;
    }

    return 0;
}