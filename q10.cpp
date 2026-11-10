//Sort the 0's and 1's.(M-2) --> TWO POINTERs.
//Time Complexity --> O(n^2)  and  Space Complexity --> O(n).
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;
}
void sortZeroOne(vector<int> &v){
    int n = v.size();
    int i = 0; //left
    int j = n - 1; //right
    while(i < j) { 
        if(v[i] == 0) i++;  
        if(v[j] == 1) j--;
        else if(v[i] == 1 && v[j] == 0){ 
            v[i] = 0;           
            v[j] = 1;           
            i++;
            j--;
        }
    }
}
int main() {
    int n;
    cout << "Enter Array Size : ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter 0's and 1's : " << endl;
    for(int i = 0; i < n; i++) cin >> v[i];
    sortZeroOne(v);
    cout << "Sorted Vector : ";
    display(v);
    return 0;
}