#include<iostream>
using namespace std;
void display(int a[] , int size){ // int *a
    for(int i = 0 ; i <= size -1 ; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return;
}
void change(int b[] , int size){ // int * b
    b[0] = 100;
    b[1] = 200;
    b[3] = 300;
    b[6] = 700;
}
int main(){
    int arr[] = {1 , 2 , 3 , 4 , 5 , 6 , 7};
    cout << "Array Before Changing Elements in it : ";
    // calculating size of the array manually
    int size = sizeof(arr) / sizeof(arr[0]);
    display(arr , size);
    change(arr , size);
    cout << "Array After Changing Elements in it : ";
    display(arr , size);
}