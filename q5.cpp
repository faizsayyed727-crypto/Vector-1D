//Copy the Reverse of One Array into Another Array.
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v1){
    for(int i = 0 ; i < v1.size() ; i++) cout << v1[i] << " ";
    cout << endl;
}
int main(){
    vector<int> v1 = {2, 7, 4, 1, 3, 6};
    cout << "Original Array is : ";
    display(v1);
    int n = v1.size(); 
    vector<int> v2(n);
    cout << "Reverse of the Array is : ";
    for(int i = 0 ; i < n; i++){
        // i + j == size - 1;
        int j = n -  i - 1;
        v2[i] = v1[j];
    }
    display(v2);
}