#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4};
    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;
    
    v.push_back(5);
    cout << "New Size : " << v.size() << endl;
    cout << "New Capacity : " << v.capacity() << endl;
    
    vector<int> v1;
    cout << "Size of v1 : " << v1.size() << endl;
    cout << "Capacity of v1 : " << v1.capacity() << endl;

    v1.push_back(5);
    cout << "New Size of v1 : " << v1.size() << endl;
    cout << "New Capacity of v1 : " << v1.capacity() << endl;
    
    // pop back doesnt reduce the capacity, only decreases the size;
    
    v1.pop_back();
    cout << "New Size of v1 after pop_back : " << v1.size() << endl;
    cout << "New Capacity of v1 after pop_back : " << v1.capacity() << endl;
}