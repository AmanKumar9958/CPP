#include<iostream>
using namespace std;
int main(){
    float length;
    float breadth;
    float area;
    float perimeter;

    cout<<"Enter the length of the rectangle: ";
    cin>>length;
    cout<<"Enter the breadth of the rectangle: ";
    cin>>breadth;

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    cout<<"Area of the given rectangle is: "<<area<<endl;
    cout<<"Perimeter of the given rectangle is: "<<perimeter<<endl;

    if(area > perimeter){
        cout<<"Area of the rectangle is greater than its perimeter";
    }
    else{
        cout<<"Perimeter is greater than its Area";
    }
}