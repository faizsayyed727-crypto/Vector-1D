#include <iostream>
using namespace std;
void display(int a[]){
    for (int i = 0; i <= 4; i++) cout << a[i] << " ";
    cout << endl;
    return;
}
void change(int b[]){
    b[0] = 100;
    b[1] = 150;
    b[2] = 200;
    b[3] = 250;
    b[4] = 300;
}
int main(){
    int arr[5] = {1, 3, 5, 7, 9};
    display(arr);
    change(arr);
    display(arr);
}