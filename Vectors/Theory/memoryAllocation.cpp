#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;

    cout << "Initial size: " << vec.size() << endl;
    cout << "Initial capacity: " << vec.capacity() << endl;

    vec.push_back(10);
    cout << "Size after adding 1 element: " << vec.size() << endl;
    cout << "Capacity after adding 1 element: " << vec.capacity() << endl;

    vec.push_back(20);
    cout << "Size after adding 2 elements: " << vec.size() << endl;
    cout << "Capacity after adding 2 elements: " << vec.capacity() << endl;

    vec.push_back(30);
    cout << "Size after adding 3 elements: " << vec.size() << endl;
    cout << "Capacity after adding 3 elements: " << vec.capacity() << endl;

    vec.push_back(40);
    cout << "Size after adding 4 elements: " << vec.size() << endl;
    cout << "Capacity after adding 4 elements: " << vec.capacity() << endl;

    return 0;
}