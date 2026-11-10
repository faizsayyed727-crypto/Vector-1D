// Arrays and Pointers.
#include <iostream>
using namespace std;
int main(){
    int arr[] = {1, 3, 2, 5, 8};
    int *ptr = arr; // giving address
    cout << ptr << endl;    //address of arr

    cout << "Array Before Updating : ";
    for (int i = 0; i <= 4; i++){
        cout << *ptr << " ";
        ptr++;
    }

    ptr = arr;
    *ptr = 8;
    ptr++;
    *ptr = 9;
    ptr--;
    cout << endl;

    cout << "Array After Updating : ";
    for (int i = 0; i <= 4; i++){
        cout << *ptr << " ";
        ptr++;
    }
    ptr = arr;
}