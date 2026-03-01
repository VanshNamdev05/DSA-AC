#include<iostream>
#include<vector>
using namespace std;

int  main(){
    // they are like dynamic arrays that can resize dynamically at runtime.
    // they are stored contiguously in memory.

    vector<int> vec1;
    vector<int> vec2 = {1, 2, 3, 4};
    vector<int> vec3 = {5, -1};

    cout << "Size of vector 1 : " << vec1.size() << endl;
    cout << "Size of vector 2 : " << vec2.size() << endl;
    cout << "Size of vector 3 : " << vec3.size() << endl;
    
    vector<int> vec4(5,-1); // vector of size 5 with each value assigned to -1
    cout << "Size of vector 4 : " << vec4.size() << endl;

    for(int i : vec4){
        cout << i << " ";
    }
    
}