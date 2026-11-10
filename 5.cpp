// Taking Input using Loop inside Vector.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout << "Enter Elements inside Vector : " << endl;
    for(int i = 0 ; i < 5 ; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "Elements are : " << endl;
    for(int i = 0 ; i < 5 ; i++){
        cout << v[i] << " ";
    }
}