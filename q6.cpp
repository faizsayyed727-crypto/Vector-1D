//Reverse of an Array --> (Without Using Extra Array).
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i = 0 ; i < v.size() ; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
int main(){
    vector<int> v = {2, 7, 4, 1, 3, 6};
    cout << "Original Array is : ";
    display(v);
    cout << "Reverse of the Array is : ";
    int i = 0;
    int j = v.size() - 1;
    while(i <= j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    display(v);
}