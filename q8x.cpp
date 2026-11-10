//Rotate an Array 'k'times. (LeftSide)
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;
}
void reversePart(int i, int j, vector<int> &v){
    while(i < j){
        swap(v[i] , v[j]);
        i++;
        j--;
    }
}
int main(){
    int n;
    cout << "Enter the Size of the Array : " << endl;
    cin >> n;
    vector<int> v(n);   // 1 2 3 4 5
    cout << "Input Array Elements : " << endl;
    for(int i = 0; i < n; i++) cin >> v[i];
    cout << endl;
    int k;
    cout << "Enter Number of Times to Rotate the Array : " << endl;
    cin >> k;   //2
    cout << "Array after Rotating " << k << " Times : " << endl;
    k = k % n;
    //1. reverse first k elements       // 2 1 3 4 5
    reversePart(n - k , n - 1 , v);
    //2. reverse remaining elements     // 2 1 5 4 3
    reversePart(0 , n - 1 , v);
    //3. reverse entire array           // 3 4 5 1 2
    reversePart(0 , n - k - 1 , v);
    display(v);
    return 0;
}