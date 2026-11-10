//Find the Last Occurence of the x in the Array/Vector
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v = {5, 2, 8, 2, 9, 2, 7 , 0 , 6};
    int x;
    cout << "Enter an Element to Find : ";
    cin >> x;
    int lastIndex = -1;
    for (int i = v.size(); i >= 0; i--) { //right to left
        if (v[i] == x) {
            lastIndex = i;
            break;
        }
    }
    if (lastIndex != -1) cout << "Last Occurrence of " << x << " is at index " << lastIndex;
    else cout << x << "Element not found.";
    return 0;
}