#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v = {19,9,4,10,1};
    // v.push_back(19);
    // v.push_back(9);
    // v.push_back(4);
    // v.push_back(10);
    // v.push_back(1);
    
    cout << "Original Vector : ";
    for(int i = 0 ; i < v.size() ; i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
    
    cout << "Sorted Vector : ";
    sort(v.begin() , v.end());
    for(int i = 0 ; i < v.size() ; i++){
        cout << v.at(i) << " ";
    }
}