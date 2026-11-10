//Find the Doublet in the Array Whose Sum is Equal to the Given Value of x.
#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> v = {2, 7, 4, 1, 3, 6};
    int x;
    cout << "Enter a Number : ";
    cin >> x;
    int n = v.size();
    bool found = false;
    int totalpairs = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] + v[j] == x) {
                cout << "(" << v[i] << ", " << v[j] << ")" << endl;
                totalpairs++;
                found = true;
            }
        }
    }
    if(found) cout << "Total Number of Pairs in the Array are " << totalpairs << " in Count.";
    if(!found) cout << "No Pair Found.";
    return 0;
}