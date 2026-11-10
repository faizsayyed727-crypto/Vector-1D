// Sort 0's , 1's and 2's. --> Dutch National Flag Algorithm.
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v){
    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;
}
void sort(vector<int> &v){
    int lo = 0, mid = 0, hi = v.size() - 1;
    while(mid <= hi){
        if (v[mid] == 2){
            swap(v[mid], v[hi]);
            hi--;
        }
        else if (v[mid] == 0){
            swap(v[mid], v[lo]);
            lo++;
            mid++;
        }
        else mid++; // nums[mid] == 1
    }
}
int main(){
    int n;
    cout << "Enter Array Size : ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter 0's and 1's and 2's : " << endl;
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v);
    cout << "Sorted Vector : ";
    display(v);
    return 0;
}