//Find the First occurence of the x in the Array/Vector
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v = {5, 2, 8, 2, 9, 2, 7 , 0 , 6 , 6};
    int x;
    cout << "Enter an Element to Find : ";
    cin >> x;
    int firstIndex = -1;
    for (int i = 0; i < v.size(); i++) { //left to right
        if (v[i] == x) {
            firstIndex = i;
            break; // jaise hi first index mile to wahi break kardo !
        }
    }
    if (firstIndex != -1) cout << "First Occurrence of " << x << " is at index " << firstIndex;
    else cout << x << "Element not found.";
    return 0;
}