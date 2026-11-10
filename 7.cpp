//Passing Vectors to Functions.
#include<iostream>
#include<vector>
using namespace std;
void change_1(vector<int> a){ //Pass By Value.
    a[0] = 100;
    a[1] = 200;
    for(int i = 0 ; i < a.size() ; i++) cout << a.at(i) << " ";
    cout << endl;
}
void change_2(vector<int> &a){  //Pass By Reference.
    a[0] = 100;
    a[1] = 200;
    for(int i = 0 ; i < a.size() ; i++) cout << a.at(i) << " ";
    cout << endl;
}
int main(){
    vector<int> v;
    
    v.push_back(19);
    v.push_back(9);
    v.push_back(4);
    v.push_back(10);
    v.push_back(1);

    for(int i = 0 ; i < v.size() ; i++) cout << v.at(i) << " ";
    cout << endl;

    change_1(v); // Vectors when Passed By Value;
    
    //Does not changes the Original vector.
    for(int i = 0 ; i < v.size() ; i++) cout << v.at(i) << " ";
    cout << endl;

    change_2(v); // Vectors when Passed By Reference;
    
    //Changes the Original vector.
    for(int i = 0 ; i < v.size() ; i++) cout << v.at(i) << " ";
    cout << endl;

}