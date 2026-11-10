#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;

    v.push_back(7);
    cout << v.size() << " ";
    cout << v.capacity() << endl;

    v.push_back(6);
    cout << v.size() << " ";
    cout << v.capacity() << endl;

    v.push_back(5);
    cout << v.size() << " ";
    cout << v.capacity() << endl;

    v.push_back(4);
    cout << v.size() << " ";
    cout << v.capacity() << endl;

    v.push_back(3);
    cout << v.size() << " ";
    cout << v.capacity() << endl;

    v.push_back(2);
    cout << v.size() << " ";
    cout << v.capacity() << endl;

    v.push_back(1);
    cout << v.size() << " ";
    cout << v.capacity() << endl;

    v.push_back(0);
    cout << v.size() << " ";
    cout << v.capacity() << endl;

    v.push_back(-1);
    cout << v.size() << " ";
    cout << v.capacity() << endl;

    // Accessing using the size of the Element

    cout << "Vector after Pushing Elements inside It : " << endl;

    for(int i = 0; i < v.size() ; i++){
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Vector after Poping Elements from It : " << endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    for(int i = 0; i < v.size() ; i++){
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Size and Capacity after Popping Elements from the Vector ." << endl;

    cout << v.size() << " "; //5
    cout << v.capacity() << endl; //16
    
    // Size reduces after Popping the Element from the Vector
    // but Capacity Remains the Same.

}