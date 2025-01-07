#include<iostream>
#include <algorithm> // For transform
#include <cctype> // For tolower
#include <cstdlib>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);

    int vowelCount = 0;
    
    // Convert the string to lowercase
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c){
        return tolower(c);
    });

    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            vowelCount++;
        }
    }
    cout<<"Number of vowels in the string are: "<<vowelCount<<endl;

    system("pause");
    return 0;
}