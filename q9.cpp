//Sort the 0's and 1's.
//(M-1) --> TimeComplexity-O(n) , SpaceComplexity-O(1).
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;
}
void sortZeroOne(vector<int> &v) {
    int n = v.size();
    int noo = 0, noz = 0;
    // Counting number of zeroes and ones : -->
    for(int i = 0; i < n ; i++){
        if(v[i] == 0) noz++;
        else noo++;
    }
    // Filling Elements : -->
    for(int i = 0; i < n; i++){
        if(i < noz) v[i] = 0;
        else v[i] = 1;
    }
}
int main() {
    int n;
    cout << "Enter Array Size : ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter 0's and 1's in the Array : " << endl;
    for (int i = 0; i < n; i++) cin >> v[i];
    sortZeroOne(v);
    cout << "Sorted Vector : " << endl;
    display(v);
    return 0;
}